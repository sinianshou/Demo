//
//  SDKManager.m
//  demo
//
//  Created by Easer Liu on 2019/9/30.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import "SDKManager.h"
#import <PI_iRoom/PIiRoom.h>
#import <PI_iRoom/PIiRoomPeer.h>
#import <PI_iRoom/PIiOSPlayerExtraOptions.h>
#import "PeerView.h"

@interface SDKManager()<PILayoutController,PIUserWindowUpdateListener, PeerDelegate>
@property (nonatomic, strong)PIiRoomPeer *peer;
@property (nonatomic, strong)PeerView *peerView;
@property (nonatomic, strong)NSString *Uid;
//@property (nonatomic, assign)BOOL peerConfiged;
@end
@implementation SDKManager

RCT_EXPORT_MODULE()

RCT_EXPORT_METHOD(testMethod:(NSString*)name num:(NSInteger)num
                  findEventsWithResolver:(RCTResponseSenderBlock)callback){
  NSLog(@"Pretending to create an event %@ at %ld", name, num);
  callback(@[[NSNull null], @"callBackStr"]);
}
RCT_EXPORT_METHOD(joinWithRoomId:(NSString*)roomId Cid:(NSString*)cId Role:(NSInteger)role
                  WithCallback:(RCTResponseSenderBlock)callback){
  NSLog(@"func:%s --- %@", __func__, roomId);
  SDKManager * sharedM = [SDKManager shared];
  if (sharedM.roomStatus == RoomStatusJoined) {
    return;
  }
  sharedM.roomStatus = RoomStatusJoined;
  switch (role) {
    case ROLE_NORMAL:{
      [sharedM.peer joinAsParticipatorWithRoomId:roomId withTurnpUrl:nil withCdnPlayUrl:nil];
    }
      break;
    case ROLE_VIEWER:{
      [sharedM.peer joinAsViewerWithRoomId:roomId withPlayStreamMode:PLAY_STREAM_MODE_LOW_DELAY withCreatorUid:cId withUrl:nil];
    }
      break;
      
    default:
      break;
  }
  
}
RCT_EXPORT_METHOD(changeIntoRole:(NSInteger)role RoomId:(NSString*)roomId Cid:(NSString*)cId
                  WithCallback:(RCTResponseSenderBlock)callback){
                    SDKManager * sharedM = [SDKManager shared];
  if (sharedM.roomStatus != RoomStatusJoined) {
    return;
  }
  switch (role) {
    case ROLE_NORMAL:{
      [sharedM.peer changeToParticipatorWithRoomId:roomId withTurnpUrl:nil withCdnPlayUrl:nil];
    }
      break;
    case ROLE_VIEWER:{
      [sharedM.peer changeToViewerWithRoomId:roomId withPlayStreamMode:PLAY_STREAM_MODE_LOW_DELAY withCreatorUid:cId withUrl:nil];
    }
      break;
      
    default:
      break;
  }
  
}
RCT_EXPORT_METHOD(leaveRoomId:(NSString*)roomId){
  NSLog(@"func:%s --- %@", __func__, roomId);
  SDKManager * sharedM = [SDKManager shared];
  sharedM.roomStatus = RoomStatusLeave;
  if (!sharedM.peer) {
    return;
  }
  [sharedM.peer forceShutdown];
  sharedM.peer = nil;
}

static SDKManager *_sharedSDKManager;
+(instancetype)shared{
  static dispatch_once_t onceToken;
  dispatch_once(&onceToken, ^{
    _sharedSDKManager = [[SDKManager alloc] init];
  });
  return _sharedSDKManager;
}
-(void)config{
  
  [Transcoder setAudioCaptureMode:PS_AudioCaptureEnableMixer];
  // PIPIiRoomConfig 使用默认配置
  PIPIiRoomConfig_Builder* room_config_builder = [PIPIiRoomConfig builder];
  [room_config_builder backgroundBehavior:STOP_ACTION_KEEP_AUDIO];
  [room_config_builder sigMode:PI_SDK_SIG];
  [room_config_builder stopPlayOnPause:YES];
  [room_config_builder pushVideo:YES];
  [room_config_builder playerShowBlackWhenAudioOnly:true];
  //重点 11：A50模式 回声抑制需要设为FORCE_OFF
  [room_config_builder aecMode:AEC_AUTO];

  
  PIOptions *option = [PIOptions optionsByDefault];
  //镜像功能
  [option enableFeature:PI_FID_PS_DISPLAY_AUTO_FLIP];
  //audioFiller功能
  [option enableFeature:PI_FID_PS_AUDIO_FILLER];
  //硬解码代码
  [option disableFeature:PI_FID_PS_AUTO_HDECODE];
  //PI_FID_PS_AUTO_HDECODE disable 状态下，设置才会生效
  [option setPlayerOptionIntValue:1 forKey:@"videotoolbox"];
  
  
  PIiOSPlayerExtraOptions* extraOptions = [[PIiOSPlayerExtraOptions alloc] init];
  extraOptions.options = option;
  [room_config_builder playerExtraOptions:extraOptions];
  
  
  PIPIiRoomConfig* config = [room_config_builder build];
  
  // 使用APP层布局控制
  PIiRoomViewConfig* viewConfig = [[PIiRoomViewConfig alloc] init];
  viewConfig.layoutController = self;
  viewConfig.userWindowUpdateListener = self;
  viewConfig.layoutType = PI_LAYOUT_TYPE_APP;
  
  //推流参数设置，使用默认值
  PIProcessSetParam* param = [[PIProcessSetParam alloc] init];
  param.txtype = 1;
  param.maxDelayThreshold = 3000;
  param.working_mode = PS_WorkingMode_Normal;
  
  
  //视频推流参数设置
  PIProcessVideoSetParam* videoParam = [[PIProcessVideoSetParam alloc] init];
  videoParam.video_fps = 30;
  videoParam.keyframeinterval = 2 * videoParam.video_fps;
  videoParam.fps_min = 12;
  videoParam.video_bitrate = 500;
  videoParam.br_max = videoParam.video_bitrate * 1.2;
  videoParam.br_min = videoParam.video_bitrate * 0.5>200?200:videoParam.video_bitrate * 0.5;
  videoParam.width = 800;
  videoParam.height = 448;
  videoParam.video_push_switch = 1;
  videoParam.video_data_source_id = DATASOURCEID_RAW_VIDEO;
  
  
  //音频推流参数设置
  // 第一路音轨设置
  PIProcessAudioSetParam* audioParam = [[PIProcessAudioSetParam alloc] init];
  audioParam.audio_channelnum = 1;
  audioParam.audio_data_source_id = DATASOURCEID_RAW_MIC_AUDIO;
  audioParam.audio_bitrate = 64000;
  audioParam.samplerate = 48000;
  audioParam.audio_push_switch = 3;
  // 第二路音轨设置
   PIProcessAudioSetParam* audioParam2 = [[PIProcessAudioSetParam alloc] init];
   audioParam2.audio_channelnum = 1;
   audioParam2.audio_bitrate = 64000;
   audioParam2.samplerate = 48000;
   audioParam2.audio_push_switch = 3;
   audioParam2.audio_data_source_id = DATASOURCEID_MIXED_AUDIO;
  
//  PIProcessAudioSetParam* audioParam = [[PIProcessAudioSetParam alloc] init];
  
  [[Transcoder tcs] setAudioTrackid:0 forDataSourceid:DATASOURCEID_RAW_MIC_AUDIO];
  [[Transcoder tcs] setAudioTrackid:1 forDataSourceid:DATASOURCEID_MIXED_AUDIO];
  param.video_param = @[ videoParam ];
//  param.audio_param = @[ audioParam ];
  param.audio_param = @[ audioParam,audioParam2 ];
  
  
  // 相机参数设置
  INTERFACE_CAMERA_PARAMS* cameraParam = [[INTERFACE_CAMERA_PARAMS alloc] init];
  cameraParam.avcap_preset = 0;   //采集分辨率
  cameraParam.cam_direction = 0;  //摄像头方向
  cameraParam.capture_fps = videoParam.video_fps;
  cameraParam.video_external_process = true;  //视频数据是否回调
  //配置 PIiRoomPeer
  [self.peer configurePIiRoomConfig:config
                       previewParam:cameraParam
                    processSetParam:param
                     roomViewConfig:viewConfig];
}

#pragma mark --Geeter & Setter
-(PIiRoomPeer *)peer{
  if (!_peer) {
    _peer = [[PIiRoomPeer alloc]initWithUid:self.Uid withPreviewAtStart:true withCallback:self];
  }
  return _peer;
}
-(PeerView *)peerView{
  if (!_peerView) {
    _peerView = [[PeerView alloc] init];
    _peerView.backgroundColor = [UIColor greenColor];
  }
  if (self.roomStatus == RoomStatusInit) {
    self.roomStatus = RoomStatusPreview;
    _peerView.uid = self.Uid;
    _peerView.bounds = [UIScreen mainScreen].bounds;
    [self config];
  }
  return _peerView;
}
-(NSString *)Uid{
  if (!_Uid) {
    CGFloat hei = [UIScreen mainScreen].bounds.size.height;
    NSLog(@"screan height is %f", hei);
    if (hei <= 600) {
      _Uid = @"2";
    }else{
      _Uid = @"1";
    }
  }
  return _Uid;
}
#pragma mark --PILayoutController
- (id)createWindowContainer:(NSString *)rid uid:(NSString *)uid veName:(NSString *)veName {
  NSLog(@"func is -- %s, rid is %@, uid is %@, veName is %@", __func__, rid, uid, veName);
  
  UIView *view = [self.peerView addVideoViewWithRoomId:rid uid:uid veName:veName];
  [self.peerView resetUI];
  return view;
}

#pragma mark --PIUserWindowUpdateListener

- (void)onWindowAdded:(PIUserWindow *)window {
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onWindowMoved:(PIUserWindow *)before After:(PIUserWindow *)after {
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onWindowRemoved:(PIUserWindow *)window {
  
  NSLog(@"func is ---- %s", __func__);
  
  [self.peerView removeVideoViewWithRoomId:window.rid uid:window.uid veName:window.veName];
  [self.peerView resetUI];
}
#pragma mark --PeerDelegate

- (void)onReceivePeerVideoSuccess2:(NSString *)roomId
                            andUid:(NSString *)uid{
  NSLog(@"func is ---- %s", __func__);
}

- (void)onReceivePeerAudioSuccess2:(NSString *)roomId
                            andUid:(NSString *)uid{
  NSLog(@"func is ---- %s", __func__);
  
}

- (void)onPeerLeft2:(NSString *)roomId
             andUid:(NSString *)uid{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onKickout:(NSString *)roomId{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onMainVeLeft:(NSString *)roomId{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onPeerVeJoined:(NSString *)roomId
                andUid:(NSString *)uid
             andVeName:(NSString *)veName{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onPeerVeLeft:(NSString *)roomId
              andUid:(NSString *)uid
           andVeName:(NSString *)veName{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onLeftiRoom2:(NSString *)roomId{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onJoinediRoom2:(NSString *)roomId{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onLeftAlliRoom{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onMessageOutput3:(NSString *)roomId
          withReceiveUid:(NSString *)receiverUid
      withReceiverVeName:(NSString *)veName
             withMessage:(NSString *)message{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onRsSuccess:(NSString *)rsReqId{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onError:(jint)code
        andData:(NSString *)data{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onAecStatusChanged:(jboolean)enabled{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onAudioDeviceChanged:(PIAudioDevice *)audioDevice{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)oniRoomDestroyed2:(NSString *)roomId{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onTranscoderCreated{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onReceiveAppPrivateData:(NSString *)data{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onPsTimerFired:(NSString *)data{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onReceiveAppMessageWithRid:(NSString *)rid
                       withFromUid:(NSString *)fromUid
                    withFromVeName:(NSString *)fromVeName
                          withData:(NSString *)data{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onChangeVeName:(NSString *)roomId
               withUid:(NSString *)uid
         withOldVeName:(NSString *)oldVeName
         withNewVeName:(NSString *)newVeName{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onVeNameChanged:(NSString *)roomId
                withUid:(NSString *)uid
          withOldVeName:(NSString *)oldVeName
          withNewVeName:(NSString *)newVeName{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onSelfAxModeChanged:(jint)axMode{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onRoomAxModeChanged:(jint)axMode{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onReceiveEventFromPusher:(NSString *)roomId
                          andUid:(NSString *)uid
                 andEventContent:(NSString *)eventContent{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onReceiveEventFromPlayer:(NSString *)data{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onChangeExternalState:(NSString *)data{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onChangeSelfExternalState:(NSString *)data{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onPushStreamingSuccess:(NSString *)roomId
                        andUid:(NSString *)uid{
  NSLog(@"func is ---- %s", __func__);
}

- (void)onUserCapResult:(id<JavaUtilMap>)result {
  NSLog(@"func is ---- %s", __func__);
}
- (void)onNetStatusResult:(NSString *)uid
                andVeName:(NSString *)veName
               andContent:(NSString *)content{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onA50StateChange:(jint)a50State{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onA50StateChangeSuccess:(jint)a50State{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onReceivePeerVideoSuccess:(jlong)roomId
                           andUid:(NSString *)uid{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onReceivePeerAudioSuccess:(jlong)roomId
                           andUid:(NSString *)uid{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onIAEvent:(jlong)roomId
           andUid:(NSString *)uid
  andEventContent:(NSString *)eventContent{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onPeerLeft:(jlong)roomId
            andUid:(NSString *)uid{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onLeftiRoom:(jlong)roomId{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onJoinediRoom:(jlong)roomId{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onMessageOutput:(jlong)roomId
         withReceiveUid:(NSString *)receiverUid
            withMessage:(NSString *)message{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onMessageOutput2:(NSString *)roomId
          withReceiveUid:(NSString *)receiverUid
             withMessage:(NSString *)message{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)oniRoomDestroyed:(jlong)roomId{
  
  NSLog(@"func is ---- %s", __func__);
}

- (void)onIAEvent2:(NSString *)roomId
            andUid:(NSString *)uid
   andEventContent:(NSString *)eventContent{
  
  NSLog(@"func is ---- %s", __func__);
}
@end
