//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/data/MetronomeChannelConfigSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_MetronomeChannelConfigSpec")
#ifdef RESTRICT_MetronomeChannelConfigSpec
#define INCLUDE_ALL_MetronomeChannelConfigSpec 0
#else
#define INCLUDE_ALL_MetronomeChannelConfigSpec 1
#endif
#undef RESTRICT_MetronomeChannelConfigSpec

#if !defined (PIMetronomeChannelConfigSpec_) && (INCLUDE_ALL_MetronomeChannelConfigSpec || defined(INCLUDE_PIMetronomeChannelConfigSpec))
#define PIMetronomeChannelConfigSpec_

@class ComGoogleGsonGson;
@class ComGoogleGsonTypeAdapter;
@protocol JavaUtilList;

@interface PIMetronomeChannelConfigSpec : NSObject

#pragma mark Public

- (instancetype)init;

- (id<JavaUtilList>)beats;

- (jint)beats_count;

+ (PIMetronomeChannelConfigSpec *)createMetronomeChannelConfigWithSsrc:(jint)ssrc
                                                              withNote:(jint)note
                                                              withRate:(jint)rate
                                                        withBeatsCount:(jint)beats_count
                                                            withVolume:(jint)volume
                                                         withStreaming:(jboolean)streaming
                                                           withSyncFix:(jboolean)sync_fix
                                                            withSource:(id<JavaUtilList>)source
                                                             withBeats:(id<JavaUtilList>)beats;

+ (PIMetronomeChannelConfigSpec *)createMetronomeChannelConfigWithSsrc:(jint)ssrc
                                                              withPzvt:(jlong)pzvt
                                                              withNote:(jint)note
                                                              withRate:(jint)rate
                                                        withBeatsCount:(jint)beats_count
                                                            withVolume:(jint)volume
                                                         withStreaming:(jboolean)streaming
                                                           withSyncFix:(jboolean)sync_fix
                                                            withSource:(id<JavaUtilList>)source
                                                             withBeats:(id<JavaUtilList>)beats;

- (jint)note;

- (jlong)pzvt;

- (jint)rate;

- (PIMetronomeChannelConfigSpec *)setPzvtWithLong:(jlong)pzvt;

- (PIMetronomeChannelConfigSpec *)setSourceWithJavaUtilList:(id<JavaUtilList>)source;

- (id<JavaUtilList>)source;

- (jint)ssrc;

- (jboolean)streaming;

- (jboolean)sync_fix;

+ (ComGoogleGsonTypeAdapter *)typeAdapterWithComGoogleGsonGson:(ComGoogleGsonGson *)gson;

- (jint)volume;

@end

J2OBJC_EMPTY_STATIC_INIT(PIMetronomeChannelConfigSpec)

FOUNDATION_EXPORT void PIMetronomeChannelConfigSpec_init(PIMetronomeChannelConfigSpec *self);

FOUNDATION_EXPORT ComGoogleGsonTypeAdapter *PIMetronomeChannelConfigSpec_typeAdapterWithComGoogleGsonGson_(ComGoogleGsonGson *gson);

FOUNDATION_EXPORT PIMetronomeChannelConfigSpec *PIMetronomeChannelConfigSpec_createMetronomeChannelConfigWithSsrc_withNote_withRate_withBeatsCount_withVolume_withStreaming_withSyncFix_withSource_withBeats_(jint ssrc, jint note, jint rate, jint beats_count, jint volume, jboolean streaming, jboolean sync_fix, id<JavaUtilList> source, id<JavaUtilList> beats);

FOUNDATION_EXPORT PIMetronomeChannelConfigSpec *PIMetronomeChannelConfigSpec_createMetronomeChannelConfigWithSsrc_withPzvt_withNote_withRate_withBeatsCount_withVolume_withStreaming_withSyncFix_withSource_withBeats_(jint ssrc, jlong pzvt, jint note, jint rate, jint beats_count, jint volume, jboolean streaming, jboolean sync_fix, id<JavaUtilList> source, id<JavaUtilList> beats);

J2OBJC_TYPE_LITERAL_HEADER(PIMetronomeChannelConfigSpec)

@compatibility_alias ComPowerinfoPi_iroomDataMetronomeChannelConfigSpec PIMetronomeChannelConfigSpec;

#endif

#pragma pop_macro("INCLUDE_ALL_MetronomeChannelConfigSpec")
