//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/utils/PeerHook.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_PeerHook")
#ifdef RESTRICT_PeerHook
#define INCLUDE_ALL_PeerHook 0
#else
#define INCLUDE_ALL_PeerHook 1
#endif
#undef RESTRICT_PeerHook

#if !defined (PIPeerHook_) && (INCLUDE_ALL_PeerHook || defined(INCLUDE_PIPeerHook))
#define PIPeerHook_

@interface PIPeerHook : NSObject

#pragma mark Public

- (instancetype)init;

- (jboolean)onPeerJoinedWithRoomId:(jlong)roomId
                               uid:(NSString *)uid;

- (jboolean)onPeerJoined2WithRoomId:(NSString *)roomId
                                uid:(NSString *)uid;

- (jboolean)onPeerLeftWithRoomId:(jlong)roomId
                             uid:(NSString *)uid;

- (jboolean)onPeerLeft2WithRoomId:(NSString *)roomId
                              uid:(NSString *)uid;

@end

J2OBJC_EMPTY_STATIC_INIT(PIPeerHook)

FOUNDATION_EXPORT void PIPeerHook_init(PIPeerHook *self);

J2OBJC_TYPE_LITERAL_HEADER(PIPeerHook)

@compatibility_alias ComPowerinfoPi_iroomUtilsPeerHook PIPeerHook;

#endif

#pragma pop_macro("INCLUDE_ALL_PeerHook")
