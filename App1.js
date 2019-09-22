/**
 * Sample React Native App
 * https://github.com/facebook/react-native
 *
 * @format
 * @flow
 */
/*
import React, {Fragment} from 'react';
import {
  SafeAreaView,
  StyleSheet,
  ScrollView,
  View,
  Text,
  StatusBar,
} from 'react-native';

import {
  Header,
  LearnMoreLinks,
  Colors,
  DebugInstructions,
  ReloadInstructions,
} from 'react-native/Libraries/NewAppScreen';

const App = () => {
  return (
    <Fragment>
      <StatusBar barStyle="dark-content" />
      <SafeAreaView>
        <ScrollView
          contentInsetAdjustmentBehavior="automatic"
          style={styles.scrollView}>
          <Header />
          {global.HermesInternal == null ? null : (
            <View style={styles.engine}>
              <Text style={styles.footer}>Engine: Hermes</Text>
            </View>
          )}
          <View style={styles.body}>
            <View style={styles.sectionContainer}>
              <Text style={styles.sectionTitle}>Step One</Text>
              <Text style={styles.sectionDescription}>
                Edit <Text style={styles.highlight}>App.js</Text> to change this
                screen and then come back to see your edits.
              </Text>
            </View>
            <View style={styles.sectionContainer}>
              <Text style={styles.sectionTitle}>See Your Changes</Text>
              <Text style={styles.sectionDescription}>
                <ReloadInstructions />
              </Text>
            </View>
            <View style={styles.sectionContainer}>
              <Text style={styles.sectionTitle}>Debug</Text>
              <Text style={styles.sectionDescription}>
                <DebugInstructions />
              </Text>
            </View>
            <View style={styles.sectionContainer}>
              <Text style={styles.sectionTitle}>Learn More</Text>
              <Text style={styles.sectionDescription}>
                Read the docs to discover what to do next:
              </Text>
            </View>
            <LearnMoreLinks />
          </View>
        </ScrollView>
      </SafeAreaView>
    </Fragment>
  );
};

const styles = StyleSheet.create({
  scrollView: {
    backgroundColor: Colors.lighter,
  },
  engine: {
    position: 'absolute',
    right: 0,
  },
  body: {
    backgroundColor: Colors.white,
  },
  sectionContainer: {
    marginTop: 32,
    paddingHorizontal: 24,
  },
  sectionTitle: {
    fontSize: 24,
    fontWeight: '600',
    color: Colors.black,
  },
  sectionDescription: {
    marginTop: 8,
    fontSize: 18,
    fontWeight: '400',
    color: Colors.dark,
  },
  highlight: {
    fontWeight: '700',
  },
  footer: {
    color: Colors.dark,
    fontSize: 12,
    fontWeight: '600',
    padding: 4,
    paddingRight: 12,
    textAlign: 'right',
  },
});

export default App;
*/


var LIST_DATA = {
    "HistoryReocrd": [
        {
            "OtherUserID": 5,
            "OtherUserName": "围坐",
            "OtherUserIcon": "http: //f2f.powerinfo.net: 8345/static/userIcons/5-1539055708537head.jpg",
            "OtherSDKUniqueID": "",
            "Time": "2018-10-09T03: 33: 10.000Z",
            "RecordType": 1
        },
        {
            "GroupID": 1,
            "GroupName": "Group1",
            "CreatorID": 1,
            "CreatorUserName": "英俊",
            "CreatorSDKUniqueID": "14334582",
            "Time": "2018-10-09T03: 07: 09.000Z",
            "RecordType": 2
        },
        {
            "MeetingID": 169,
            "MeetingName": "I’m going",
            "HistoryID": 172,
            "Time": "2018-09-30T03: 00: 14.000Z",
            "CreatorID": 1,
            "CreatorUserName": "英俊",
            "CreatorSDKUniqueID": "14334582",
            "RecordType": 3
        },
        {
            "MeetingID": 93,
            "MeetingName": "回音",
            "HistoryID": 90,
            "Time": "2018-09-25T09: 29: 55.000Z",
            "CreatorID": 3,
            "CreatorUserName": "guanjie",
            "CreatorSDKUniqueID": "",
            "RecordType": 3
        },
        {
            "OtherUserID": 1,
            "OtherUserName": "英俊",
            "OtherUserIcon": "http: //f2f.powerinfo.net: 8345/static/userIcons/default_user.png",
            "OtherSDKUniqueID": "14334582",
            "Time": "2018-09-20T08: 06: 11.000Z",
            "RecordType": 1
        }
    ]
}

import React, { Component } from "react";
import { Image, ImageBackground, TouchableOpacity, FlatList, StyleSheet, Text, View } from "react-native";
import imgSr from './pages/imageSource'

export default class MeetingsList extends Component {
constructor(props) {
    super(props);
    this.state = {
      likedNum: 0,
      data: LIST_DATA.HistoryReocrd,
    };
  }

render() {
    return (
      <FlatList
        extraData={this.state}
        data={this.state.data}
        renderItem={this.renderItem.bind(this)}
        ListHeaderComponent={this.renderHeader.bind(this)}
        ItemSeparatorComponent={this.renderSeparator.bind(this)}
        style={styles.list}
      />
    );
  }

  renderItem({item, index}){
    var _this = this;
  	var userName = "";
    var creator = "";
    var groupID = "";
    var img;
    var likedBnImg;
    var date = item.Time;
    date = date.substr(0,10);
	  date = date.split("-").join("/")
    switch(item.RecordType) {
     case 1:{
     	userName = item.OtherUserName
     }
        break;
     case 2:{
     	userName = item.GroupName
     	creator = "创建者："+item.CreatorUserName
     	groupID = "群组ID："+item.GroupID
     	img = imgSr['defaultGroup']
      if(item.liked == undefined){
        item.liked = false
      }
     }
        break;
     default:{
     	userName = item.MeetingName
     	creator = "所属者："+item.CreatorUserName
     	groupID = "输入会议ID："+item.MeetingID
     	img = imgSr['defaultMeeting']
      if(item.liked == undefined){
        item.liked = false
      }
     }
	  } 
    return (
      <View 
        style={styles.container}>
      	<Image 
      		source={img} 
      		style={styles.thumbnail}/>
        <View style={styles.middleContainer}>
	        <Text style = {styles.itemName}>{userName}</Text>
	        <View style = {styles.groupContainer}>
	         <Text style = {styles.itemCreator}>{creator}</Text>
	         <Text style = {styles.itemGroup}>{groupID}</Text>
	        </View>
        </View>
        <View style={styles.rightContainer}>
	        <Text style = {styles.itemTime}>{date}</Text>
          {
            (item.liked != undefined)?
            <TouchableOpacity
            disable={true}
            style={{height: 20, width: 20}}
            onPress={()=>{_this.onPressLikeBn(item, index)}}>
            {
              item.liked?
            <Image
              source={imgSr['star']} 
              style={{height: 20, width: 20}}/>
              :
            <Image
              source={imgSr['unstar']} 
              style={{height: 20, width: 20}}/>
            }
          </TouchableOpacity>
            :
            <View style={{height: 20, width: 20}}/>
          }
          
        </View>
      </View>
    );
  }

  renderSeparator(){
    return(
      <View style={{height: 1, flex: 1, backgroundColor: '#E8E8E8'}}/>
    )
  }

  renderHeader(){
    var _this = this;
    return(
      <ImageBackground 
        source={imgSr['headerbg']}
        style={styles.header}>
        <Text style={styles.headerTitle}>会议与聊天</Text>
        <View style={styles.headerBnsBox}>
          <TouchableOpacity 
            onPress={()=>{_this.holdMeeting()}}
            style={styles.headerBnBox}>
            <Image style={styles.headerBn} source={imgSr['startMeet']}/>
            <Text style={styles.headerBnTitle}>召开会议</Text>
          </TouchableOpacity>
          <View style={styles.headerBnBox}>
            <Image style={styles.headerBn} source={imgSr['joinMeet']}/>
            <Text style={styles.headerBnTitle}>加入会议</Text>
          </View>
          <View style={styles.headerBnBox}>
            <Image style={styles.headerBn} source={imgSr['manageMeet']}/>
            <Text style={styles.headerBnTitle}>会议管理</Text>
          </View>
        </View>
      </ImageBackground>
    )
  }

  onPressLikeBn(item, index){
    var data = this.state.data
    var item = data[index]
    var likedNum = this.state.likedNum
    item.liked = !item.liked
    data.splice(index,1);
    if (item.liked) {
      data.unshift(item)
      likedNum++
    }else{
      likedNum--
      data.splice(likedNum, 0, item);
    }
    this.setState({
      likedNum: likedNum,
      data:data,
    })
    console.log("like is "+item.liked)
  }

  holdMeeting(){
    const { navigate } = this.props.navigation;
    console.log("holdMeeting")
    navigate('Meeting')
  }
}

var styles = StyleSheet.create({
  container: {
    flex: 1,
    flexDirection: "row",
    justifyContent: "space-around",
    alignItems: "center",
    backgroundColor: "#F5FCFF"
  },
  middleContainer: {
    flex: 1,
    justifyContent: "space-around",
  },
  rightContainer: {
    paddingRight: 15,
    justifyContent: "space-around",
    alignItems: "center",
  },
  itemLike:{
    paddingTop: 10,
  },
  groupContainer: {
    flexDirection: "row",
    paddingTop: 5,
  },
  header:{
    height:168,
    justifyContent: "space-around",
  },
  headerBnsBox:{
    flexDirection: "row",
    justifyContent: "space-around",
  },
  headerBnBox:{
    alignItems: "center",
    justifyContent: "space-around",
  },
  headerTitle: {
    paddingTop: 20,
    paddingBottom: 5,
    fontSize: 20,
    textAlign: "center",
    color: "white"
  },
  headerBn: {
    width: 51,
    height: 51
  },
  headerBnTitle: {
    paddingTop: 10,
    paddingBottom: 10,
    textAlign: "center",
    color: "white"
  },
  itemName: {
    paddingBottom: 5,
    fontSize: 15,
  },
  itemCreator: {
    fontSize: 10,
  },
  itemGroup: {
    paddingLeft: 15,
    fontSize: 10,
  },
  itemTime: {
    paddingBottom: 5,
    fontSize: 10,
    color: "#A4A4A4",
    textAlign: "center"
  },
  thumbnail: {
    margin: 15,
    width: 40,
    height: 40
  },
  list: {
    backgroundColor: "#F5FCFF"
  }
});

