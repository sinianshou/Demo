//
//  SDKManager.h
//  demo
//
//  Created by Easer Liu on 2019/9/30.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <React/RCTBridgeModule.h>

NS_ASSUME_NONNULL_BEGIN

@class PeerView;

@interface SDKManager : NSObject<RCTBridgeModule>
+(instancetype)shared;
-(PeerView *)peerView;
@end

NS_ASSUME_NONNULL_END
