//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/data/$AutoValue_CheckedUser.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_$AutoValue_CheckedUser")
#ifdef RESTRICT_$AutoValue_CheckedUser
#define INCLUDE_ALL_$AutoValue_CheckedUser 0
#else
#define INCLUDE_ALL_$AutoValue_CheckedUser 1
#endif
#undef RESTRICT_$AutoValue_CheckedUser

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PI_AutoValue_CheckedUser_) && (INCLUDE_ALL_$AutoValue_CheckedUser || defined(INCLUDE_PI_AutoValue_CheckedUser))
#define PI_AutoValue_CheckedUser_

#define RESTRICT_CheckedUser 1
#define INCLUDE_PICheckedUser 1
#include "CheckedUser.h"

@interface PI_AutoValue_CheckedUser : PICheckedUser

#pragma mark Public

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (jboolean)streaming;

- (NSString *)description;

- (NSString *)uid;

- (NSString *)ve_name;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)uid
                    withNSString:(NSString *)ve_name
                     withBoolean:(jboolean)streaming;

@end

J2OBJC_EMPTY_STATIC_INIT(PI_AutoValue_CheckedUser)

FOUNDATION_EXPORT void PI_AutoValue_CheckedUser_initWithNSString_withNSString_withBoolean_(PI_AutoValue_CheckedUser *self, NSString *uid, NSString *ve_name, jboolean streaming);

J2OBJC_TYPE_LITERAL_HEADER(PI_AutoValue_CheckedUser)

@compatibility_alias ComPowerinfoPi_iroomData$AutoValue_CheckedUser PI_AutoValue_CheckedUser;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_$AutoValue_CheckedUser")
