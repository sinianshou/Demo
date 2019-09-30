//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: jar:file:libs/XiRoom-sources.jar!com/powerinfo/pi_iroom/window/UserWindow.java
//

#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_UserWindow")
#ifdef RESTRICT_UserWindow
#define INCLUDE_ALL_UserWindow 0
#else
#define INCLUDE_ALL_UserWindow 1
#endif
#undef RESTRICT_UserWindow

#if !defined (PIUserWindow_) && (INCLUDE_ALL_UserWindow || defined(INCLUDE_PIUserWindow))
#define PIUserWindow_

@interface PIUserWindow : NSObject {
 @public
  jint top_;
  jint left_;
  jint width_;
  jint height_;
  jint zIndex_;
  jboolean show_;
  NSString *rid_;
  NSString *uid_;
  NSString *veName_;
}
@property (getter=getTop) jint top;
@property (getter=getLeft) jint left;
@property (getter=getWidth) jint width;
@property (getter=getHeight) jint height;
@property (getter=getZIndex) jint zIndex;
@property (nonatomic, getter=isShow) jboolean show;
@property (copy, getter=getRid) NSString *rid;
@property (copy, getter=getUid) NSString *uid;
@property (copy, getter=getVeName) NSString *veName;

#pragma mark Public

- (instancetype)initWithTop:(jint)top
                   withLeft:(jint)left
                  withWidth:(jint)width
                 withHeight:(jint)height
                 withZIndex:(jint)z;

- (instancetype)init2WithTop:(jint)top
                    withLeft:(jint)left
                   withWidth:(jint)width
                  withHeight:(jint)height
                  withZIndex:(jint)z
                      isShow:(jboolean)show
                     withRid:(NSString *)rid
                     withUid:(NSString *)uid
                  withVeName:(NSString *)veName;

- (instancetype)initWithTop:(jint)top
                   withLeft:(jint)left
                  withWidth:(jint)width
                 withHeight:(jint)height
                 withZIndex:(jint)z
                    withRid:(jlong)rid
                    withUid:(NSString *)uid
                 withVeName:(NSString *)veName;

- (instancetype)initWithTop:(jint)top
                   withLeft:(jint)left
                  withWidth:(jint)width
                 withHeight:(jint)height
                 withZIndex:(jint)z
                    withUid:(NSString *)uid;

- (instancetype)init2WithTop:(jint)top
                    withLeft:(jint)left
                   withWidth:(jint)width
                  withHeight:(jint)height
                  withZIndex:(jint)z
                     withRid:(NSString *)rid
                     withUid:(NSString *)uid
                  withVeName:(NSString *)veName;

- (void)assignZIndex:(jint)z;

- (jint)getHeight;

- (jint)getLeft;

- (jlong)getLongRid;

- (NSString *)getRid;

- (jint)getTop;

- (NSString *)getUid;

- (NSString *)getVeName;

- (jint)getWidth;

- (jint)getZIndex;

- (jboolean)isShow;

- (void)setShowWithBoolean:(jboolean)show;

- (void)setVeNameWithNSString:(NSString *)veName;

- (NSString *)description;

- (void)updateWithTop:(jint)top
             withLeft:(jint)left
            withWidth:(jint)width
           withHeight:(jint)height;

#pragma mark Package-Private

- (void)bindWithRid:(NSString *)rid
             andUid:(NSString *)uid
          andVeName:(NSString *)veName;

- (PIUserWindow *)copy__ OBJC_METHOD_FAMILY_NONE;

- (jboolean)isBoundTo:(NSString *)uid
            andVeName:(NSString *)veName;

- (jboolean)isSame:(PIUserWindow *)that;

- (void)moveWithTop:(jint)top
           withLeft:(jint)left;

- (void)swap:(PIUserWindow *)that;

- (void)unbind;

- (jboolean)userPresent;

// Disallowed inherited constructors, do not use.

- (instancetype)init NS_UNAVAILABLE;

@end

J2OBJC_EMPTY_STATIC_INIT(PIUserWindow)

J2OBJC_FIELD_SETTER(PIUserWindow, rid_, NSString *)
J2OBJC_FIELD_SETTER(PIUserWindow, uid_, NSString *)
J2OBJC_FIELD_SETTER(PIUserWindow, veName_, NSString *)

inline jint PIUserWindow_get_MATCH_PARENT(void);
#define PIUserWindow_MATCH_PARENT -1
J2OBJC_STATIC_FIELD_CONSTANT(PIUserWindow, MATCH_PARENT, jint)

FOUNDATION_EXPORT void PIUserWindow_initWithTop_withLeft_withWidth_withHeight_withZIndex_(PIUserWindow *self, jint top, jint left, jint width, jint height, jint z);

FOUNDATION_EXPORT PIUserWindow *new_PIUserWindow_initWithTop_withLeft_withWidth_withHeight_withZIndex_(jint top, jint left, jint width, jint height, jint z) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIUserWindow *create_PIUserWindow_initWithTop_withLeft_withWidth_withHeight_withZIndex_(jint top, jint left, jint width, jint height, jint z);

FOUNDATION_EXPORT void PIUserWindow_initWithTop_withLeft_withWidth_withHeight_withZIndex_withUid_(PIUserWindow *self, jint top, jint left, jint width, jint height, jint z, NSString *uid);

FOUNDATION_EXPORT PIUserWindow *new_PIUserWindow_initWithTop_withLeft_withWidth_withHeight_withZIndex_withUid_(jint top, jint left, jint width, jint height, jint z, NSString *uid) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIUserWindow *create_PIUserWindow_initWithTop_withLeft_withWidth_withHeight_withZIndex_withUid_(jint top, jint left, jint width, jint height, jint z, NSString *uid);

FOUNDATION_EXPORT void PIUserWindow_init2WithTop_withLeft_withWidth_withHeight_withZIndex_withRid_withUid_withVeName_(PIUserWindow *self, jint top, jint left, jint width, jint height, jint z, NSString *rid, NSString *uid, NSString *veName);

FOUNDATION_EXPORT PIUserWindow *new_PIUserWindow_init2WithTop_withLeft_withWidth_withHeight_withZIndex_withRid_withUid_withVeName_(jint top, jint left, jint width, jint height, jint z, NSString *rid, NSString *uid, NSString *veName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIUserWindow *create_PIUserWindow_init2WithTop_withLeft_withWidth_withHeight_withZIndex_withRid_withUid_withVeName_(jint top, jint left, jint width, jint height, jint z, NSString *rid, NSString *uid, NSString *veName);

FOUNDATION_EXPORT void PIUserWindow_init2WithTop_withLeft_withWidth_withHeight_withZIndex_isShow_withRid_withUid_withVeName_(PIUserWindow *self, jint top, jint left, jint width, jint height, jint z, jboolean show, NSString *rid, NSString *uid, NSString *veName);

FOUNDATION_EXPORT PIUserWindow *new_PIUserWindow_init2WithTop_withLeft_withWidth_withHeight_withZIndex_isShow_withRid_withUid_withVeName_(jint top, jint left, jint width, jint height, jint z, jboolean show, NSString *rid, NSString *uid, NSString *veName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIUserWindow *create_PIUserWindow_init2WithTop_withLeft_withWidth_withHeight_withZIndex_isShow_withRid_withUid_withVeName_(jint top, jint left, jint width, jint height, jint z, jboolean show, NSString *rid, NSString *uid, NSString *veName);

FOUNDATION_EXPORT void PIUserWindow_initWithTop_withLeft_withWidth_withHeight_withZIndex_withRid_withUid_withVeName_(PIUserWindow *self, jint top, jint left, jint width, jint height, jint z, jlong rid, NSString *uid, NSString *veName);

FOUNDATION_EXPORT PIUserWindow *new_PIUserWindow_initWithTop_withLeft_withWidth_withHeight_withZIndex_withRid_withUid_withVeName_(jint top, jint left, jint width, jint height, jint z, jlong rid, NSString *uid, NSString *veName) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT PIUserWindow *create_PIUserWindow_initWithTop_withLeft_withWidth_withHeight_withZIndex_withRid_withUid_withVeName_(jint top, jint left, jint width, jint height, jint z, jlong rid, NSString *uid, NSString *veName);

J2OBJC_TYPE_LITERAL_HEADER(PIUserWindow)

@compatibility_alias ComPowerinfoPi_iroomWindowUserWindow PIUserWindow;

#endif

#pragma pop_macro("INCLUDE_ALL_UserWindow")