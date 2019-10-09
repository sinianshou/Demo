//
//  PeerViewManager.m
//  demo
//
//  Created by Easer Liu on 2019/10/8.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import "PeerViewManager.h"
#import "SDKManager.h"

@implementation PeerViewManager
RCT_EXPORT_MODULE(PeerView)

- (UIView *)view
{
  SDKManager *sdkM = [SDKManager shared];
  sdkM.roomStatus = RoomStatusInit;
  return (UIView *)sdkM.peerView;
}
@end
