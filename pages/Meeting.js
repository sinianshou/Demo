import React, { PureComponent } from 'react';
import { AppRegistry, StyleSheet, Text, TouchableOpacity, View } from 'react-native';
import { RNCamera } from 'react-native-camera';
import PeerView from './PeerView'

export default class ExampleApp extends PureComponent {

  /**
   * 将导航栏的返回按钮统一为黑色
   *
   * @static
   * @memberof ExampleApp
   */
  static navigationOptions = {
    headerBackTitleStyle:{color: "black"},
    headerTintColor: "black",
  };
  render() {
    return (
      <View style={styles.container}>
        <PeerView style={styles.preview}/>
        {/* 相机下方的SNAP按钮 */}
        <View style={{ flex: 0, flexDirection: 'row', justifyContent: 'center', backgroundColor: "white" }}>
          <TouchableOpacity onPress={this.takePicture.bind(this)} style={styles.capture}>
            <Text style={{ fontSize: 14}}> SNAP </Text>
          </TouchableOpacity>
        </View>
      </View>
    );
  }

  /**
   *按下SNAP按钮时的相应方法，打印url
   *
   * @memberof ExampleApp
   */
  takePicture = async() => {
    if (this.camera) {
      const options = { quality: 0.5, base64: true };
      const data = await this.camera.takePictureAsync(options);
      console.log(data.uri);
    }
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