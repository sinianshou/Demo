//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/data/AutoValue_PlayTargetSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_AutoValue_PlayTargetSpec")
#ifdef RESTRICT_AutoValue_PlayTargetSpec
#define INCLUDE_ALL_AutoValue_PlayTargetSpec 0
#else
#define INCLUDE_ALL_AutoValue_PlayTargetSpec 1
#endif
#undef RESTRICT_AutoValue_PlayTargetSpec

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (PIAutoValue_PlayTargetSpec_) && (INCLUDE_ALL_AutoValue_PlayTargetSpec || defined(INCLUDE_PIAutoValue_PlayTargetSpec))
#define PIAutoValue_PlayTargetSpec_

#define RESTRICT_$AutoValue_PlayTargetSpec 1
#define INCLUDE_PI_AutoValue_PlayTargetSpec 1
#include "$AutoValue_PlayTargetSpec.h"

@class JavaLangInteger;
@class JavaLangLong;
@protocol JavaUtilList;

@interface PIAutoValue_PlayTargetSpec : PI_AutoValue_PlayTargetSpec

#pragma mark Package-Private

- (instancetype)initWithNSString:(NSString *)key
                        withLong:(jlong)rid
                    withNSString:(NSString *)srid
                withJavaLangLong:(JavaLangLong *)stream_group
             withJavaLangInteger:(JavaLangInteger *)ve_slot
                    withNSString:(NSString *)from_uid
                    withNSString:(NSString *)to_uid
                         withInt:(jint)slot
                         withInt:(jint)diffnum
                         withInt:(jint)sid
                         withInt:(jint)mode
                         withInt:(jint)push_tcs_mode
                withJavaUtilList:(id<JavaUtilList>)url
                withJavaUtilList:(id<JavaUtilList>)pzb_data
                    withNSString:(NSString *)link_extra_params
                     withBoolean:(jboolean)force_start
                         withInt:(jint)play_stream_mode
                    withNSString:(NSString *)ve_name
                    withNSString:(NSString *)br_name
                         withInt:(jint)render_mode
                    withNSString:(NSString *)render_mode_param
                    withNSString:(NSString *)enc_pzb_data
                    withNSString:(NSString *)enc_url
                    withNSString:(NSString *)link_pzb_data
                    withNSString:(NSString *)link_url;

@end

J2OBJC_EMPTY_STATIC_INIT(PIAutoValue_PlayTargetSpec)

FOUNDATION_EXPORT void PIAutoValue_PlayTargetSpec_initWithNSString_withLong_withNSString_withJavaLangLong_withJavaLangInteger_withNSString_withNSString_withInt_withInt_withInt_withInt_withInt_withJavaUtilList_withJavaUtilList_withNSString_withBoolean_withInt_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_withNSString_withNSString_(PIAutoValue_PlayTargetSpec *self, NSString *key, jlong rid, NSString *srid, JavaLangLong *stream_group, JavaLangInteger *ve_slot, NSString *from_uid, NSString *to_uid, jint slot, jint diffnum, jint sid, jint mode, jint push_tcs_mode, id<JavaUtilList> url, id<JavaUtilList> pzb_data, NSString *link_extra_params, jboolean force_start, jint play_stream_mode, NSString *ve_name, NSString *br_name, jint render_mode, NSString *render_mode_param, NSString *enc_pzb_data, NSString *enc_url, NSString *link_pzb_data, NSString *link_url);

FOUNDATION_EXPORT PIAutoValue_PlayTargetSpec *new_PIAutoValue_PlayTargetSpec_initWithNSString_withLong_withNSString_withJavaLangLong_withJavaLangInteger_withNSString_withNSString_withInt_withInt_withInt_withInt_withInt_withJavaUtilList_withJavaUtilList_withNSString_withBoolean_withInt_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_withNSString_withNSString_(NSString *key, jlong rid, NSString *srid, JavaLangLong *stream_group, JavaLangInteger *ve_slot, NSString *from_uid, NSString *to_uid, jint slot, jint diffnum, jint sid, jint mode, jint push_tcs_mode, id<JavaUtilList> url, id<JavaUtilList> pzb_data, NSString *link_extra_params, jboolean force_start, jint play_stream_mode, NSString *ve_name, NSString *br_name, jint render_mode, NSString *render_mode_param, NSString *enc_pzb_data, NSString *enc_url, NSString *link_pzb_data, NSString *link_url) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIAutoValue_PlayTargetSpec *create_PIAutoValue_PlayTargetSpec_initWithNSString_withLong_withNSString_withJavaLangLong_withJavaLangInteger_withNSString_withNSString_withInt_withInt_withInt_withInt_withInt_withJavaUtilList_withJavaUtilList_withNSString_withBoolean_withInt_withNSString_withNSString_withInt_withNSString_withNSString_withNSString_withNSString_withNSString_(NSString *key, jlong rid, NSString *srid, JavaLangLong *stream_group, JavaLangInteger *ve_slot, NSString *from_uid, NSString *to_uid, jint slot, jint diffnum, jint sid, jint mode, jint push_tcs_mode, id<JavaUtilList> url, id<JavaUtilList> pzb_data, NSString *link_extra_params, jboolean force_start, jint play_stream_mode, NSString *ve_name, NSString *br_name, jint render_mode, NSString *render_mode_param, NSString *enc_pzb_data, NSString *enc_url, NSString *link_pzb_data, NSString *link_url);

J2OBJC_TYPE_LITERAL_HEADER(PIAutoValue_PlayTargetSpec)

@compatibility_alias ComPowerinfoPi_iroomDataAutoValue_PlayTargetSpec PIAutoValue_PlayTargetSpec;

#endif

#if !defined (PIAutoValue_PlayTargetSpec_GsonTypeAdapter_) && (INCLUDE_ALL_AutoValue_PlayTargetSpec || defined(INCLUDE_PIAutoValue_PlayTargetSpec_GsonTypeAdapter))
#define PIAutoValue_PlayTargetSpec_GsonTypeAdapter_

#define RESTRICT_TypeAdapter 1
#define INCLUDE_ComGoogleGsonTypeAdapter 1
#include "TypeAdapter.h"

@class ComGoogleGsonGson;
@class ComGoogleGsonJsonElement;
@class ComGoogleGsonStreamJsonReader;
@class ComGoogleGsonStreamJsonWriter;
@class JavaIoReader;
@class PIPlayTargetSpec;

@interface PIAutoValue_PlayTargetSpec_GsonTypeAdapter : ComGoogleGsonTypeAdapter

#pragma mark Public

- (instancetype)initWithComGoogleGsonGson:(ComGoogleGsonGson *)gson;

- (PIPlayTargetSpec *)fromJsonTreeWithComGoogleGsonJsonElement:(ComGoogleGsonJsonElement *)arg0;

- (PIPlayTargetSpec *)fromJsonWithJavaIoReader:(JavaIoReader *)arg0;

- (PIPlayTargetSpec *)fromJsonWithNSString:(NSString *)arg0;

- (PIPlayTargetSpec *)readWithComGoogleGsonStreamJsonReader:(ComGoogleGsonStreamJsonReader *)jsonReader;

- (void)writeWithComGoogleGsonStreamJsonWriter:(ComGoogleGsonStreamJsonWriter *)jsonWriter
                                        withId:(PIPlayTargetSpec *)object;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PIAutoValue_PlayTargetSpec_GsonTypeAdapter)

FOUNDATION_EXPORT void PIAutoValue_PlayTargetSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(PIAutoValue_PlayTargetSpec_GsonTypeAdapter *self, ComGoogleGsonGson *gson);

FOUNDATION_EXPORT PIAutoValue_PlayTargetSpec_GsonTypeAdapter *new_PIAutoValue_PlayTargetSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(ComGoogleGsonGson *gson) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIAutoValue_PlayTargetSpec_GsonTypeAdapter *create_PIAutoValue_PlayTargetSpec_GsonTypeAdapter_initWithComGoogleGsonGson_(ComGoogleGsonGson *gson);

J2OBJC_TYPE_LITERAL_HEADER(PIAutoValue_PlayTargetSpec_GsonTypeAdapter)

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_AutoValue_PlayTargetSpec")