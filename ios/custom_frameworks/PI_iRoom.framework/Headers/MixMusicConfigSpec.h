//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/data/MixMusicConfigSpec.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_MixMusicConfigSpec")
#ifdef RESTRICT_MixMusicConfigSpec
#define INCLUDE_ALL_MixMusicConfigSpec 0
#else
#define INCLUDE_ALL_MixMusicConfigSpec 1
#endif
#undef RESTRICT_MixMusicConfigSpec

#if !defined (PIMixMusicConfigSpec_) && (INCLUDE_ALL_MixMusicConfigSpec || defined(INCLUDE_PIMixMusicConfigSpec))
#define PIMixMusicConfigSpec_

@class ComGoogleGsonGson;
@class ComGoogleGsonTypeAdapter;

@interface PIMixMusicConfigSpec : NSObject

#pragma mark Public

- (instancetype)init;

+ (PIMixMusicConfigSpec *)createMixMusicConfigWithSsrc:(jint)ssrc
                                            withVolume:(jint)volume
                                         withStreaming:(jboolean)streaming
                                             withRemix:(jboolean)remix
                                           withSyncFix:(jboolean)music_sync_fix
                                            withSource:(NSString *)source;

+ (PIMixMusicConfigSpec *)createMixMusicConfigWithSsrc:(jint)ssrc
                                              withPzvt:(jlong)pzvt
                                            withVolume:(jint)volume
                                         withStreaming:(jboolean)streaming
                                             withRemix:(jboolean)remix
                                           withSyncFix:(jboolean)music_sync_fix
                                            withSource:(NSString *)source;

- (jboolean)music_sync_fix;

- (jlong)pzvt;

- (jboolean)remix;

- (PIMixMusicConfigSpec *)setPzvtWithLong:(jlong)pzvt;

- (PIMixMusicConfigSpec *)setSourceWithNSString:(NSString *)source;

- (NSString *)source;

- (jint)ssrc;

- (jboolean)streaming;

+ (ComGoogleGsonTypeAdapter *)typeAdapterWithComGoogleGsonGson:(ComGoogleGsonGson *)gson;

- (jint)volume;

@end

J2OBJC_EMPTY_STATIC_INIT(PIMixMusicConfigSpec)

FOUNDATION_EXPORT void PIMixMusicConfigSpec_init(PIMixMusicConfigSpec *self);

FOUNDATION_EXPORT ComGoogleGsonTypeAdapter *PIMixMusicConfigSpec_typeAdapterWithComGoogleGsonGson_(ComGoogleGsonGson *gson);

FOUNDATION_EXPORT PIMixMusicConfigSpec *PIMixMusicConfigSpec_createMixMusicConfigWithSsrc_withVolume_withStreaming_withRemix_withSyncFix_withSource_(jint ssrc, jint volume, jboolean streaming, jboolean remix, jboolean music_sync_fix, NSString *source);

FOUNDATION_EXPORT PIMixMusicConfigSpec *PIMixMusicConfigSpec_createMixMusicConfigWithSsrc_withPzvt_withVolume_withStreaming_withRemix_withSyncFix_withSource_(jint ssrc, jlong pzvt, jint volume, jboolean streaming, jboolean remix, jboolean music_sync_fix, NSString *source);

J2OBJC_TYPE_LITERAL_HEADER(PIMixMusicConfigSpec)

@compatibility_alias ComPowerinfoPi_iroomDataMixMusicConfigSpec PIMixMusicConfigSpec;

#endif

#pragma pop_macro("INCLUDE_ALL_MixMusicConfigSpec")
