//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/data/$AutoValue_CmdTargetSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_$AutoValue_CmdTargetSpec")
#ifdef RESTRICT_$AutoValue_CmdTargetSpec
#define INCLUDE_ALL_$AutoValue_CmdTargetSpec 0
#else
#define INCLUDE_ALL_$AutoValue_CmdTargetSpec 1
#endif
#undef RESTRICT_$AutoValue_CmdTargetSpec

#if !defined (PI_AutoValue_CmdTargetSpec_) && (INCLUDE_ALL_$AutoValue_CmdTargetSpec || defined(INCLUDE_PI_AutoValue_CmdTargetSpec))
#define PI_AutoValue_CmdTargetSpec_

#define RESTRICT_CmdTargetSpec 1
#define INCLUDE_PICmdTargetSpec 1
#include "CmdTargetSpec.h"

@interface PI_AutoValue_CmdTargetSpec : PICmdTargetSpec

#pragma mark Public

- (jboolean)isEqual:(id)o;

- (NSUInteger)hash;

- (NSString *)description;

- (NSString *)uid;

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)uid;

@end

J2OBJC_EMPTY_STATIC_INIT(PI_AutoValue_CmdTargetSpec)

FOUNDATION_EXPORT void PI_AutoValue_CmdTargetSpec_initWithNSString_(PI_AutoValue_CmdTargetSpec *self, NSString *uid);

J2OBJC_TYPE_LITERAL_HEADER(PI_AutoValue_CmdTargetSpec)

@compatibility_alias ComPowerinfoPi_iroomData$AutoValue_CmdTargetSpec PI_AutoValue_CmdTargetSpec;

#endif

#pragma pop_macro("INCLUDE_ALL_$AutoValue_CmdTargetSpec")
