//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/data/AutoValue_CmdTargetSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AutoValue_CmdTargetSpec")
#ifdef RESTRICT_AutoValue_CmdTargetSpec
#define INCLUDE_ALL_AutoValue_CmdTargetSpec 0
#else
#define INCLUDE_ALL_AutoValue_CmdTargetSpec 1
#endif
#undef RESTRICT_AutoValue_CmdTargetSpec

#if !defined (PIAutoValue_CmdTargetSpec_) && (INCLUDE_ALL_AutoValue_CmdTargetSpec || defined(INCLUDE_PIAutoValue_CmdTargetSpec))
#define PIAutoValue_CmdTargetSpec_

#define RESTRICT_$AutoValue_CmdTargetSpec 1
#define INCLUDE_PI_AutoValue_CmdTargetSpec 1
#include "$AutoValue_CmdTargetSpec.h"

@interface PIAutoValue_CmdTargetSpec : PI_AutoValue_CmdTargetSpec

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)uid;

@end

J2OBJC_EMPTY_STATIC_INIT(PIAutoValue_CmdTargetSpec)

FOUNDATION_EXPORT void PIAutoValue_CmdTargetSpec_initWithNSString_(PIAutoValue_CmdTargetSpec *self, NSString *uid);

FOUNDATION_EXPORT PIAutoValue_CmdTargetSpec *new_PIAutoValue_CmdTargetSpec_initWithNSString_(NSString *uid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIAutoValue_CmdTargetSpec *create_PIAutoValue_CmdTargetSpec_initWithNSString_(NSString *uid);

J2OBJC_TYPE_LITERAL_HEADER(PIAutoValue_CmdTargetSpec)

@compatibility_alias ComPowerinfoPi_iroomDataAutoValue_CmdTargetSpec PIAutoValue_CmdTargetSpec;

#endif

#if !defined (PIAutoValue_CmdTargetSpec_GsonTypeAdapter_) && (INCLUDE_ALL_AutoValue_CmdTargetSpec || defined(INCLUDE_PIAutoValue_CmdTargetSpec_GsonTypeAdapter))
#define PIAutoValue_CmdTargetSpec_GsonTypeAdapter_

#define RESTRICT_TypeAdapter 1
#define INCLUDE_ComGoogleGsonTypeAdapter 1
#include "TypeAdapter.h"

@class ComGoogleGsonGson;
@class ComGoogleGsonJsonElement;
@class ComGoogleGsonStreamJsonReader;
@class ComGoogleGsonStreamJsonWriter;
@class JavaIoReader;
@class PICmdTargetSpec;

@interface PIAutoValue_CmdTargetSpec_GsonTypeAdapter : ComGoogleGsonTypeAdapter

#pragma mark Public

- (instancetype)initWithComGoogleGsonGson:(ComGoogleGsonGson *)gson;

- (PICmdTargetSpec *)fromJsonTreeWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)arg0;

- (PICmdTargetSpec *)fromJsonWithJavaIoReader:(JavaIoReader *)arg0;

- (PICmdTargetSpec *)fromJsonWithNSString:(NSString *)arg0;

- (PICmdTargetSpec *)readWithComGoogleGsonStreamJsonReader:(ComGoogleGsonStreamJsonReader *)jsonReader;

- (void)writeWithComGoogleGsonStreamJsonWriter:(ComGoogleGsonStreamJsonWriter *)jsonWriter
                                        withId:(PICmdTargetSpec *)object;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PIAutoValue_CmdTargetSpec_GsonTypeAdapter)

FOUNDATION_EXPORT void PIAutoValue_CmdTargetSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(PIAutoValue_CmdTargetSpec_GsonTypeAdapter *self, ComGoogleGsonGson *gson);

FOUNDATION_EXPORT PIAutoValue_CmdTargetSpec_GsonTypeAdapter *new_PIAutoValue_CmdTargetSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(ComGoogleGsonGson *gson) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIAutoValue_CmdTargetSpec_GsonTypeAdapter *create_PIAutoValue_CmdTargetSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(ComGoogleGsonGson *gson);

J2OBJC_TYPE_LITERAL_HEADER(PIAutoValue_CmdTargetSpec_GsonTypeAdapter)

#endif

#pragma pop_macro("INCLUDE_ALL_AutoValue_CmdTargetSpec")
