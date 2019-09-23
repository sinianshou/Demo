// 初始数据
var LIST_DATA = {
    "HistoryReocrd": [
        {
            "OtherUserID": 5,
            "OtherUserName": "围坐",
            "OtherUserIcon": "http://f2f.powerinfo.net:8345/static/userIcons/5-1539055708537head.jpg",
            "OtherSDKUniqueID": "",
            "Time": "2018-10-09T03:33:10.000Z",
            "RecordType": 1
        },
        {
            "GroupID": 1,
            "GroupName": "Group1",
            "CreatorID": 1,
            "CreatorUserName": "英俊",
            "CreatorSDKUniqueID": "14334582",
            "Time": "2018-10-09T03:07:09.000Z",
            "RecordType": 2
        },
        {
            "MeetingID": 169,
            "MeetingName": "I’m going",
            "HistoryID": 172,
            "Time": "2018-09-30T03:00:14.000Z",
            "CreatorID": 1,
            "CreatorUserName": "英俊",
            "CreatorSDKUniqueID": "14334582",
            "RecordType": 3
        },
        {
            "MeetingID": 93,
            "MeetingName": "回音",
            "HistoryID": 90,
            "Time": "2018-09-25T09:29:55.000Z",
            "CreatorID": 3,
            "CreatorUserName": "guanjie",
            "CreatorSDKUniqueID": "",
            "RecordType": 3
        },
        {
            "OtherUserID": 1,
            "OtherUserName": "英俊",
            "OtherUserIcon": "http://f2f.powerinfo.net:8345/static/userIcons/default_user.png",
            "OtherSDKUniqueID": "14334582",
            "Time": "2018-09-20T08:06:11.000Z",
            "RecordType": 1
        }
    ]
}

import React, { Component } from "react";
import { Image, ImageBackground, TouchableOpacity, FlatList, StyleSheet, Text, View } from "react-native";
import imgSr from '../sources/imageSource'

export default class MeetingsList extends Component {

  /**
   *关于导航栏样式的制定
   *
   * @static
   * @memberof MeetingsList
   */
  static navigationOptions = {
    headerStyle: {
      height:0.1,
      backgroundColor:"#274589", 
      shadowColor: '#274589',
      shadowOpacity: 0,
      elevation: 0,
      shadowRadius: 0,
      borderWidth: 0,
      shadowOffset: {width: 0, height: 0}, 
    },
  };

/**
 *Creates an instance of MeetingsList.
 * @param {*} props
 * @memberof MeetingsList
 */
constructor(props) {
    super(props);
    this.state = {
      likedNum: 0,  //收藏的数量，用于取消收藏时移动item用
      data: LIST_DATA.HistoryReocrd,
    };
  }

render() {
  var _this = this
    return (
      <View style={styles.mainView}>
        {/* 以图片为背景的header*/}
      <ImageBackground 
        source={imgSr['headerbg']}
        style={styles.header}>
        <Text style={styles.headerTitle}>会议与聊天</Text>
        <View style={styles.headerBnsBox}>
        {/* 自定义召开会议点击按钮*/}
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
        {/* 长列表显示数据数组 */}
      <FlatList
        extraData={this.state}
        data={this.state.data}
        renderItem={this.renderItem.bind(this)}
        ItemSeparatorComponent={this.renderSeparator.bind(this)}
        keyExtractor={(item, index) => item.Time}
        style={styles.list}
      />
      </View>
    );
  }

  /**
   * 渲染item视图
   *
   * @param {*} {item, index} 对应的item数据以及item的索引
   * @returns 
   * @memberof MeetingsList
   */
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
    /*
      通过不同的RecordType来赋值不同的name，头像，creator和groupID，
      并为group和meeting添加收藏按钮
    */
    switch(item.RecordType) {
     case 1:{
     	userName = item.OtherUserName
      img = {url: item.OtherUserIcon}
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

  /**
   *渲染分隔线
   *
   * @returns
   * @memberof MeetingsList
   */
  renderSeparator(){
    return(
      <View style={{height: 1, flex: 1, backgroundColor: '#E8E8E8'}}/>
    )
  }

  /**
   *渲染header
   *
   * @returns
   * @memberof MeetingsList
   */
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

  /**
   *点击收藏按钮相应的方法，使该item数据表示为收藏或者取消收藏
   *
   * @param {*} item 对应的item数据
   * @param {*} index 对应的索引
   * @memberof MeetingsList
   */
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

  /**
   *召开会议按钮相应的方法，跳转的Meeting页面
   *
   * @memberof MeetingsList
   */
  holdMeeting(){
    const { navigate } = this.props.navigation;
    console.log("holdMeeting")
    navigate('Meeting')
  }
}

//各个视图的样式 
var styles = StyleSheet.create({
  mainView:{
    flex: 1,
  },
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

