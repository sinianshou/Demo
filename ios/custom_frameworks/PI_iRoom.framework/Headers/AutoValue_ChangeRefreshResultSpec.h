//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/data/AutoValue_ChangeRefreshResultSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AutoValue_ChangeRefreshResultSpec")
#ifdef RESTRICT_AutoValue_ChangeRefreshResultSpec
#define INCLUDE_ALL_AutoValue_ChangeRefreshResultSpec 0
#else
#define INCLUDE_ALL_AutoValue_ChangeRefreshResultSpec 1
#endif
#undef RESTRICT_AutoValue_ChangeRefreshResultSpec

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PIAutoValue_ChangeRefreshResultSpec_) && (INCLUDE_ALL_AutoValue_ChangeRefreshResultSpec || defined(INCLUDE_PIAutoValue_ChangeRefreshResultSpec))
#define PIAutoValue_ChangeRefreshResultSpec_

#define RESTRICT_$AutoValue_ChangeRefreshResultSpec 1
#define INCLUDE_PI_AutoValue_ChangeRefreshResultSpec 1
#include "$AutoValue_ChangeRefreshResultSpec.h"

@class PIChangeRefreshResultSpec_Sig;
@class PIRxConfigSpec;
@class PISigCmd;
@protocol JavaUtilList;

@interface PIAutoValue_ChangeRefreshResultSpec : PI_AutoValue_ChangeRefreshResultSpec

#pragma mark Package-Private

- (instancetype)initWithInt:(jint)rs_result
                    withInt:(jint)enable_ve_opt
                    withInt:(jint)scene_play_type
                    withInt:(jint)refresh
               withNSString:(NSString *)app_private_data
                    withInt:(jint)status_policy
           withJavaUtilList:(id<JavaUtilList>)joined_srooms
           withJavaUtilList:(id<JavaUtilList>)push_targets
           withJavaUtilList:(id<JavaUtilList>)play_targets
               withPISigCmd:(PISigCmd *)sigcmd
           withJavaUtilList:(id<JavaUtilList>)stream_event_cmd
           withJavaUtilList:(id<JavaUtilList>)us_acts
         withPIRxConfigSpec:(PIRxConfigSpec *)rx_config
               withNSString:(NSString *)mc_global_params
withPIChangeRefreshResultSpec_Sig:(PIChangeRefreshResultSpec_Sig *)sig;

@end

J2OBJC_EMPTY_STATIC_INIT(PIAutoValue_ChangeRefreshResultSpec)

FOUNDATION_EXPORT void PIAutoValue_ChangeRefreshResultSpec_initWithInt_withInt_withInt_withInt_withNSString_withInt_withJavaUtilList_withJavaUtilList_withJavaUtilList_withPISigCmd_withJavaUtilList_withJavaUtilList_withPIRxConfigSpec_withNSString_withPIChangeRefreshResultSpec_Sig_(PIAutoValue_ChangeRefreshResultSpec *self, jint rs_result, jint enable_ve_opt, jint scene_play_type, jint refresh, NSString *app_private_data, jint status_policy, id<JavaUtilList> joined_srooms, id<JavaUtilList> push_targets, id<JavaUtilList> play_targets, PISigCmd *sigcmd, id<JavaUtilList> stream_event_cmd, id<JavaUtilList> us_acts, PIRxConfigSpec *rx_config, NSString *mc_global_params, PIChangeRefreshResultSpec_Sig *sig);

FOUNDATION_EXPORT PIAutoValue_ChangeRefreshResultSpec *new_PIAutoValue_ChangeRefreshResultSpec_initWithInt_withInt_withInt_withInt_withNSString_withInt_withJavaUtilList_withJavaUtilList_withJavaUtilList_withPISigCmd_withJavaUtilList_withJavaUtilList_withPIRxConfigSpec_withNSString_withPIChangeRefreshResultSpec_Sig_(jint rs_result, jint enable_ve_opt, jint scene_play_type, jint refresh, NSString *app_private_data, jint status_policy, id<JavaUtilList> joined_srooms, id<JavaUtilList> push_targets, id<JavaUtilList> play_targets, PISigCmd *sigcmd, id<JavaUtilList> stream_event_cmd, id<JavaUtilList> us_acts, PIRxConfigSpec *rx_config, NSString *mc_global_params, PIChangeRefreshResultSpec_Sig *sig) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIAutoValue_ChangeRefreshResultSpec *create_PIAutoValue_ChangeRefreshResultSpec_initWithInt_withInt_withInt_withInt_withNSString_withInt_withJavaUtilList_withJavaUtilList_withJavaUtilList_withPISigCmd_withJavaUtilList_withJavaUtilList_withPIRxConfigSpec_withNSString_withPIChangeRefreshResultSpec_Sig_(jint rs_result, jint enable_ve_opt, jint scene_play_type, jint refresh, NSString *app_private_data, jint status_policy, id<JavaUtilList> joined_srooms, id<JavaUtilList> push_targets, id<JavaUtilList> play_targets, PISigCmd *sigcmd, id<JavaUtilList> stream_event_cmd, id<JavaUtilList> us_acts, PIRxConfigSpec *rx_config, NSString *mc_global_params, PIChangeRefreshResultSpec_Sig *sig);

J2OBJC_TYPE_LITERAL_HEADER(PIAutoValue_ChangeRefreshResultSpec)

@compatibility_alias ComPowerinfoPi_iroomDataAutoValue_ChangeRefreshResultSpec PIAutoValue_ChangeRefreshResultSpec;

#endif

#if !defined (PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter_) && (INCLUDE_ALL_AutoValue_ChangeRefreshResultSpec || defined(INCLUDE_PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter))
#define PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter_

#define RESTRICT_TypeAdapter 1
#define INCLUDE_ComGoogleGsonTypeAdapter 1
#include "TypeAdapter.h"

@class ComGoogleGsonGson;
@class ComGoogleGsonJsonElement;
@class ComGoogleGsonStreamJsonReader;
@class ComGoogleGsonStreamJsonWriter;
@class JavaIoReader;
@class PIChangeRefreshResultSpec;

@interface PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter : ComGoogleGsonTypeAdapter

#pragma mark Public

- (instancetype)initWithComGoogleGsonGson:(ComGoogleGsonGson *)gson;

- (PIChangeRefreshResultSpec *)fromJsonTreeWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)arg0;

- (PIChangeRefreshResultSpec *)fromJsonWithJavaIoReader:(JavaIoReader *)arg0;

- (PIChangeRefreshResultSpec *)fromJsonWithNSString:(NSString *)arg0;

- (PIChangeRefreshResultSpec *)readWithComGoogleGsonStreamJsonReader:(ComGoogleGsonStreamJsonReader *)jsonReader;

- (void)writeWithComGoogleGsonStreamJsonWriter:(ComGoogleGsonStreamJsonWriter *)jsonWriter
                                        withId:(PIChangeRefreshResultSpec *)object;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter)

FOUNDATION_EXPORT void PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter *self, ComGoogleGsonGson *gson);

FOUNDATION_EXPORT PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter *new_PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(ComGoogleGsonGson *gson) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter *create_PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(ComGoogleGsonGson *gson);

J2OBJC_TYPE_LITERAL_HEADER(PIAutoValue_ChangeRefreshResultSpec_GsonTypeAdapter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AutoValue_ChangeRefreshResultSpec")
