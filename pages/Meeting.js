import React, { PureComponent } from 'react';
import { AppRegistry, StyleSheet, Text, Button, TouchableOpacity, View } from 'react-native';
import { RNCamera } from 'react-native-camera';
import PeerView from './PeerView'
import {NativeModules} from 'react-native';

const PeerStatus = {
  Preverw: "Start",
  Join: "Join",
};
const Role = {
  Normal: {text:'Normal',idx:2},
  Viewer: {text:'Viewer',idx:3},
};

const SDKManager = NativeModules.SDKManager;
const roomId = "10010";
const cId = "1";

// const defaultPeerStatus = PeerStatus.Preverw;
// const defaultRole = Role.Normal;
export default class ExampleApp extends PureComponent {

  /**
   * 将导航栏的返回按钮统一为黑色
   *
   * @static
   * @memberof ExampleApp
   */
  static navigationOptions = ({navigation}) => {
    // headerBackTitleStyle:{color: "black"},
    // headerTintColor: "black",
    return({
    headerLeft: (
      <Button
        // onPress={() => 
        //   // alert('这是个按钮!')
        //   {
        //   SDKManager.leaveRoomId(roomId);
        //   navigation.goBack();}
        // }
        onPress={navigation.getParam('goBack')}
        title="Back"
        color="black"
      />
    ),})
  };
  componentDidMount() {
    this.props.navigation.setParams({ goBack: this._goBack });
  }
  constructor(props) {
    super(props);
    this.state = {
      peerStatus: PeerStatus.Preverw, 
      role: Role.Normal, 
    };
  }
  render() {
    return (
      <View style={styles.container}>
        <PeerView style={styles.preview}>
        <Text style={{ fontSize: 14}}> {this.state.peerStatus} </Text>
        </PeerView>
        {/* 相机下方的SNAP按钮 */}
        <View style={{ flex: 0, flexDirection: 'row', justifyContent: 'center', backgroundColor: "white" }}>
          <TouchableOpacity onPress={this.joinRoom.bind(this)} style={styles.capture}>
            <Text style={{ fontSize: 14}}> {this.state.peerStatus} </Text>
          </TouchableOpacity>
          <TouchableOpacity onPress={this.changeRole.bind(this)} style={styles.capture}>
            <Text style={{ fontSize: 14}}> {this.state.role.text} </Text>
          </TouchableOpacity>
        </View>
      </View>
    );
  }

  changeRole = async() => {
    var nRole = (this.state.role.text === Role.Normal.text)?Role.Viewer:Role.Normal;
    this.setState({
      role: nRole, 
    });
    SDKManager.changeIntoRole(nRole.idx, roomId, cId, (error, events) => {
      if (error) {
        console.error(error);
      } else {
        console.log(events);
      }
    });
  };

  joinRoom = async() => {
    SDKManager.joinWithRoomId(roomId, cId, this.state.role.idx, (error, events) => {
      if (error) {
        console.error(error);
      } else {
        console.log(events);
      }
    });
    if(this.state.peerStatus === PeerStatus.Preverw){
      this.setState({
        peerStatus: PeerStatus.Join,
      })
    }else{
      this.setState({
        peerStatus: PeerStatus.Preverw,
      })
    }
    
    console.log(this.state.peerStatus)
  };

  _goBack = () =>{
    alert('这是个按钮!');
    console.log('这是个按钮!');
    SDKManager.leaveRoomId(roomId);
    this.props.navigation.goBack();
  };

}
// 各个视图的style
const styles = StyleSheet.create({
  container: {
    flex: 1,
    flexDirection: 'column',
    backgroundColor: 'black',
  },
  preview: {
    flex: 1,
    justifyContent: 'flex-end',
    alignItems: 'center',
  },
  capture: {
    flex: 0,
    backgroundColor: '#DCDCDC',
    borderRadius: 5,
    padding: 15,
    paddingHorizontal: 20,
    alignSelf: 'center',
    margin: 20,
  },
});