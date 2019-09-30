//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/data/AutoValue_LegacyCmdSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AutoValue_LegacyCmdSpec")
#ifdef RESTRICT_AutoValue_LegacyCmdSpec
#define INCLUDE_ALL_AutoValue_LegacyCmdSpec 0
#else
#define INCLUDE_ALL_AutoValue_LegacyCmdSpec 1
#endif
#undef RESTRICT_AutoValue_LegacyCmdSpec

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PIAutoValue_LegacyCmdSpec_) && (INCLUDE_ALL_AutoValue_LegacyCmdSpec || defined(INCLUDE_PIAutoValue_LegacyCmdSpec))
#define PIAutoValue_LegacyCmdSpec_

#define RESTRICT_$AutoValue_LegacyCmdSpec 1
#define INCLUDE_PI_AutoValue_LegacyCmdSpec 1
#include "$AutoValue_LegacyCmdSpec.h"

@class JavaUtilArrayList;
@class PIPushTargetConfigSpec;

@interface PIAutoValue_LegacyCmdSpec : PI_AutoValue_LegacyCmdSpec

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)room_size
                    withInt:(jint)reason
                    withInt:(jint)push_mode
      withJavaUtilArrayList:(JavaUtilArrayList *)push_targets
 withPIPushTargetConfigSpec:(PIPushTargetConfigSpec *)push_config
                    withInt:(jint)play_mode
      withJavaUtilArrayList:(JavaUtilArrayList *)play_targets
                withBoolean:(jboolean)force_start
                    withInt:(jint)play_stream_mode
               withNSString:(NSString *)trans_seg_domain
               withNSString:(NSString *)push_url_turnp
               withNSString:(NSString *)cdn_play_url
                    withInt:(jint)leave_origin_behavior
                    withInt:(jint)targets_filter_mode
                    withInt:(jint)scene_play_type
                    withInt:(jint)ax_mode
                    withInt:(jint)self_ve_ax_mode
                    withInt:(jint)prefer_ax_mode
                    withInt:(jint)aggressive_a50_state
                    withInt:(jint)self_ve_a50_state
                    withInt:(jint)prefer_a50_state
               withNSString:(NSString *)play_ve_name
               withNSString:(NSString *)play_br_name
                withBoolean:(jboolean)loopback;

@end

J2OBJC_EMPTY_STATIC_INIT(PIAutoValue_LegacyCmdSpec)

FOUNDATION_EXPORT void PIAutoValue_LegacyCmdSpec_initWithInt_withInt_withInt_withJavaUtilArrayList_withPIPushTargetConfigSpec_withInt_withJavaUtilArrayList_withBoolean_withInt_withNSString_withNSString_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withNSString_withNSString_withBoolean_(PIAutoValue_LegacyCmdSpec *self, jint room_size, jint reason, jint push_mode, JavaUtilArrayList *push_targets, PIPushTargetConfigSpec *push_config, jint play_mode, JavaUtilArrayList *play_targets, jboolean force_start, jint play_stream_mode, NSString *trans_seg_domain, NSString *push_url_turnp, NSString *cdn_play_url, jint leave_origin_behavior, jint targets_filter_mode, jint scene_play_type, jint ax_mode, jint self_ve_ax_mode, jint prefer_ax_mode, jint aggressive_a50_state, jint self_ve_a50_state, jint prefer_a50_state, NSString *play_ve_name, NSString *play_br_name, jboolean loopback);

FOUNDATION_EXPORT PIAutoValue_LegacyCmdSpec *new_PIAutoValue_LegacyCmdSpec_initWithInt_withInt_withInt_withJavaUtilArrayList_withPIPushTargetConfigSpec_withInt_withJavaUtilArrayList_withBoolean_withInt_withNSString_withNSString_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withNSString_withNSString_withBoolean_(jint room_size, jint reason, jint push_mode, JavaUtilArrayList *push_targets, PIPushTargetConfigSpec *push_config, jint play_mode, JavaUtilArrayList *play_targets, jboolean force_start, jint play_stream_mode, NSString *trans_seg_domain, NSString *push_url_turnp, NSString *cdn_play_url, jint leave_origin_behavior, jint targets_filter_mode, jint scene_play_type, jint ax_mode, jint self_ve_ax_mode, jint prefer_ax_mode, jint aggressive_a50_state, jint self_ve_a50_state, jint prefer_a50_state, NSString *play_ve_name, NSString *play_br_name, jboolean loopback) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIAutoValue_LegacyCmdSpec *create_PIAutoValue_LegacyCmdSpec_initWithInt_withInt_withInt_withJavaUtilArrayList_withPIPushTargetConfigSpec_withInt_withJavaUtilArrayList_withBoolean_withInt_withNSString_withNSString_withNSString_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withInt_withNSString_withNSString_withBoolean_(jint room_size, jint reason, jint push_mode, JavaUtilArrayList *push_targets, PIPushTargetConfigSpec *push_config, jint play_mode, JavaUtilArrayList *play_targets, jboolean force_start, jint play_stream_mode, NSString *trans_seg_domain, NSString *push_url_turnp, NSString *cdn_play_url, jint leave_origin_behavior, jint targets_filter_mode, jint scene_play_type, jint ax_mode, jint self_ve_ax_mode, jint prefer_ax_mode, jint aggressive_a50_state, jint self_ve_a50_state, jint prefer_a50_state, NSString *play_ve_name, NSString *play_br_name, jboolean loopback);

J2OBJC_TYPE_LITERAL_HEADER(PIAutoValue_LegacyCmdSpec)

@compatibility_alias ComPowerinfoPi_iroomDataAutoValue_LegacyCmdSpec PIAutoValue_LegacyCmdSpec;

#endif

#if !defined (PIAutoValue_LegacyCmdSpec_GsonTypeAdapter_) && (INCLUDE_ALL_AutoValue_LegacyCmdSpec || defined(INCLUDE_PIAutoValue_LegacyCmdSpec_GsonTypeAdapter))
#define PIAutoValue_LegacyCmdSpec_GsonTypeAdapter_

#define RESTRICT_TypeAdapter 1
#define INCLUDE_ComGoogleGsonTypeAdapter 1
#include "TypeAdapter.h"

@class ComGoogleGsonGson;
@class ComGoogleGsonJsonElement;
@class ComGoogleGsonStreamJsonReader;
@class ComGoogleGsonStreamJsonWriter;
@class JavaIoReader;
@class PILegacyCmdSpec;

@interface PIAutoValue_LegacyCmdSpec_GsonTypeAdapter : ComGoogleGsonTypeAdapter

#pragma mark Public

- (instancetype)initWithComGoogleGsonGson:(ComGoogleGsonGson *)gson;

- (PILegacyCmdSpec *)fromJsonTreeWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)arg0;

- (PILegacyCmdSpec *)fromJsonWithJavaIoReader:(JavaIoReader *)arg0;

- (PILegacyCmdSpec *)fromJsonWithNSString:(NSString *)arg0;

- (PILegacyCmdSpec *)readWithComGoogleGsonStreamJsonReader:(ComGoogleGsonStreamJsonReader *)jsonReader;

- (void)writeWithComGoogleGsonStreamJsonWriter:(ComGoogleGsonStreamJsonWriter *)jsonWriter
                                        withId:(PILegacyCmdSpec *)object;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PIAutoValue_LegacyCmdSpec_GsonTypeAdapter)

FOUNDATION_EXPORT void PIAutoValue_LegacyCmdSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(PIAutoValue_LegacyCmdSpec_GsonTypeAdapter *self, ComGoogleGsonGson *gson);

FOUNDATION_EXPORT PIAutoValue_LegacyCmdSpec_GsonTypeAdapter *new_PIAutoValue_LegacyCmdSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(ComGoogleGsonGson *gson) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIAutoValue_LegacyCmdSpec_GsonTypeAdapter *create_PIAutoValue_LegacyCmdSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(ComGoogleGsonGson *gson);

J2OBJC_TYPE_LITERAL_HEADER(PIAutoValue_LegacyCmdSpec_GsonTypeAdapter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AutoValue_LegacyCmdSpec")
