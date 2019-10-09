//
//  PeerView.h
//  demo
//
//  Created by Easer Liu on 2019/10/8.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PeerView : UIView
@property (nonatomic, strong)NSString *uid;

-(UIView*)addVideoViewWithRoomId:(NSString *)rid uid:(NSString *)uid veName:(NSString *)veName;

-(void)removeVideoViewWithRoomId:(NSString *)rid uid:(NSString *)uid veName:(NSString *)veName;

-(void)resetUI;
@end

NS_ASSUME_NONNULL_END
