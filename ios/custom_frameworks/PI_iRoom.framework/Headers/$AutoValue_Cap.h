//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/data/$AutoValue_Cap.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_$AutoValue_Cap")
#ifdef RESTRICT_$AutoValue_Cap
#define INCLUDE_ALL_$AutoValue_Cap 0
#else
#define INCLUDE_ALL_$AutoValue_Cap 1
#endif
#undef RESTRICT_$AutoValue_Cap

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PI_AutoValue_Cap_) && (INCLUDE_ALL_$AutoValue_Cap || defined(INCLUDE_PI_AutoValue_Cap))
#define PI_AutoValue_Cap_

#define RESTRICT_Cap 1
#define INCLUDE_PICap 1
#include "Cap.h"

@class PICap_User;

@interface PI_AutoValue_Cap : PICap

#pragma mark Public

- (jint)cap;

- (jboolean)isEqual:(id)o;

- (PICap_User *)from_user;

- (NSUInteger)hash;

- (jlong)time;

- (PICap_User *)to_user;

- (NSString *)description;

#pragma mark Package-Private

- (instancetype)initWithPICap_User:(PICap_User *)to_user
                    withPICap_User:(PICap_User *)from_user
                           withInt:(jint)cap
                          withLong:(jlong)time;

@end

J2OBJC_EMPTY_STATIC_INIT(PI_AutoValue_Cap)

FOUNDATION_EXPORT void PI_AutoValue_Cap_initWithPICap_User_withPICap_User_withInt_withLong_(PI_AutoValue_Cap *self, PICap_User *to_user, PICap_User *from_user, jint cap, jlong time);

J2OBJC_TYPE_LITERAL_HEADER(PI_AutoValue_Cap)

@compatibility_alias ComPowerinfoPi_iroomData$AutoValue_Cap PI_AutoValue_Cap;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_$AutoValue_Cap")
