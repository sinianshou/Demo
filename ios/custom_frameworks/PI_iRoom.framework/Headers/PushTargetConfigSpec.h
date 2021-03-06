//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/data/PushTargetConfigSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_PushTargetConfigSpec")
#ifdef RESTRICT_PushTargetConfigSpec
#define INCLUDE_ALL_PushTargetConfigSpec 0
#else
#define INCLUDE_ALL_PushTargetConfigSpec 1
#endif
#undef RESTRICT_PushTargetConfigSpec

#if !defined (PIPushTargetConfigSpec_) && (INCLUDE_ALL_PushTargetConfigSpec || defined(INCLUDE_PIPushTargetConfigSpec))
#define PIPushTargetConfigSpec_

@class ComGoogleGsonGson;
@class ComGoogleGsonTypeAdapter;
@class PIPushTargetConfigSpec_Builder;

@interface PIPushTargetConfigSpec : NSObject

#pragma mark Public

- (instancetype)init;

- (jint)bitrate;

+ (PIPushTargetConfigSpec_Builder *)builder;

- (jint)fps;

- (jint)height;

- (jint)max_br;

- (jint)min_br;

- (jint)min_fps;

- (jint)preview_height;

- (jint)preview_width;

- (jint)tcs_mode;

- (PIPushTargetConfigSpec_Builder *)toBuilder;

+ (ComGoogleGsonTypeAdapter *)typeAdapterWithComGoogleGsonGson:(ComGoogleGsonGson *)gson;

- (jboolean)valid;

- (jint)video_codec;

- (jint)width;

@end

J2OBJC_EMPTY_STATIC_INIT(PIPushTargetConfigSpec)

FOUNDATION_EXPORT void PIPushTargetConfigSpec_init(PIPushTargetConfigSpec *self);

FOUNDATION_EXPORT ComGoogleGsonTypeAdapter *PIPushTargetConfigSpec_typeAdapterWithComGoogleGsonGson_(ComGoogleGsonGson *gson);

FOUNDATION_EXPORT PIPushTargetConfigSpec_Builder *PIPushTargetConfigSpec_builder(void);

J2OBJC_TYPE_LITERAL_HEADER(PIPushTargetConfigSpec)

@compatibility_alias ComPowerinfoPi_iroomDataPushTargetConfigSpec PIPushTargetConfigSpec;

#endif

#if !defined (PIPushTargetConfigSpec_Builder_) && (INCLUDE_ALL_PushTargetConfigSpec || defined(INCLUDE_PIPushTargetConfigSpec_Builder))
#define PIPushTargetConfigSpec_Builder_

@class PIPushTargetConfigSpec;

@interface PIPushTargetConfigSpec_Builder : NSObject

#pragma mark Public

- (instancetype)init;

- (PIPushTargetConfigSpec_Builder *)bitrate:(jint)bitrate;

- (PIPushTargetConfigSpec *)build;

- (PIPushTargetConfigSpec_Builder *)fps:(jint)fps;

- (PIPushTargetConfigSpec_Builder *)height:(jint)height;

- (PIPushTargetConfigSpec_Builder *)max_br:(jint)max_br;

- (PIPushTargetConfigSpec_Builder *)min_br:(jint)min_br;

- (PIPushTargetConfigSpec_Builder *)min_fps:(jint)min_fps;

- (PIPushTargetConfigSpec_Builder *)preview_height:(jint)preview_height;

- (PIPushTargetConfigSpec_Builder *)preview_width:(jint)preview_width;

- (PIPushTargetConfigSpec_Builder *)tcs_mode:(jint)tcs_mode;

- (PIPushTargetConfigSpec_Builder *)video_codec:(jint)video_codec;

- (PIPushTargetConfigSpec_Builder *)width:(jint)width;

@end

J2OBJC_EMPTY_STATIC_INIT(PIPushTargetConfigSpec_Builder)

FOUNDATION_EXPORT void PIPushTargetConfigSpec_Builder_init(PIPushTargetConfigSpec_Builder *self);

J2OBJC_TYPE_LITERAL_HEADER(PIPushTargetConfigSpec_Builder)

#endif

#pragma pop_macro("INCLUDE_ALL_PushTargetConfigSpec")
