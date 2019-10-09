//
//  PeerView.m
//  demo
//
//  Created by Easer Liu on 2019/10/8.
//  Copyright © 2019 Facebook. All rights reserved.
//

#import "PeerView.h"
#import <PI_iRoom/PIiRoom.h>
#import <PI_iRoom/PIiRoomPeer.h>
@interface PeerView ()

@property (nonatomic, strong)NSMutableDictionary *vViewDicM;
@property (nonatomic, strong)NSMutableArray *emptyvViewArrM;

@end
@implementation PeerView
-(instancetype)init{
  self = [super init];
  if (self) {
    _vViewDicM = [[NSMutableDictionary alloc] init];
    _emptyvViewArrM = [[NSMutableArray alloc] init];
  }
  return self;
}
-(UIView*)addVideoViewWithRoomId:(NSString *)rid uid:(NSString *)uid veName:(NSString *)veName{
  UIView *view = [self.emptyvViewArrM lastObject];
  if (!view) {
    view = [[UIView alloc] init];
  }else{
    [self.emptyvViewArrM removeObject:view];
  }
  [self addSubview:view];
  [self.vViewDicM setObject:view forKey:uid];
  return view;
}

-(void)removeVideoViewWithRoomId:(NSString *)rid uid:(NSString *)uid veName:(NSString *)veName{
  UIView *view = [self.vViewDicM objectForKey:uid];
  [view removeFromSuperview];
  [self.vViewDicM removeObjectForKey:uid];
  [self.emptyvViewArrM addObject:view];
}

-(void)resetUI{
  CGFloat wid = self.bounds.size.width * 0.3;
  CGFloat hei = wid * self.bounds.size.height / self.bounds.size.width;
  NSArray *keys = self.vViewDicM.allKeys;
  switch (keys.count) {
    case 1:{
      NSString *key = keys.firstObject;
      UIView *v = [self.vViewDicM objectForKey:key];
      v.frame = self.bounds;
      [self isMyViewWithUid:key view:v];
    }
      break;
    case 2:{
      for (NSUInteger i=0; i<keys.count; i++) {
        NSString *key = keys[i];
        UIView *v = [self.vViewDicM objectForKey:key];
        if ([self.uid isEqualToString:key]) {
          v.frame = CGRectMake(30, 30, wid, hei);
          [self isMyViewWithUid:key view:v];
        }else{
          v.frame = self.bounds;
        }
        NSLog(@"v.frame is %@", NSStringFromCGRect(v.frame));
      }
    }
      break;
    case 3:{
      for (NSUInteger i=0; i<keys.count; i++) {
        NSString *key = keys[i];
        UIView *v = [self.vViewDicM objectForKey:key];
        v.frame = CGRectMake(0, hei * (i>1?1:i), wid, hei);
        [self isMyViewWithUid:key view:v];
      }
    }
      break;
    default:
      break;
  }
}
-(void)isMyViewWithUid:(NSString*)uid view:(UIView*)view{
  if (![self.uid isEqualToString:uid]) {
    return;
  }
  [[Transcoder tcs] getpreviewlayer].frame = view.frame;
  [self bringSubviewToFront:view];
}
/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
