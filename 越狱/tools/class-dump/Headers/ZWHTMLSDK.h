//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZWHTMLOption;

@interface ZWHTMLSDK : NSObject
{
    ZWHTMLOption *_zw_option;
    CDUnknownBlockType _blockHandlePreview;
    CDUnknownBlockType _blockHandleLongPress;
}

+ (id)configPreviewJS:(id)arg1;
+ (id)zw_loadBridgeJSWebview:(id)arg1 withOption:(id)arg2;
+ (id)zw_loadStandardBridgeJSWebview:(id)arg1;
+ (id)zw_loadBridgeJSWebview:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType blockHandleLongPress; // @synthesize blockHandleLongPress=_blockHandleLongPress;
@property(copy, nonatomic) CDUnknownBlockType blockHandlePreview; // @synthesize blockHandlePreview=_blockHandlePreview;
@property(readonly, nonatomic) ZWHTMLOption *zw_option; // @synthesize zw_option=_zw_option;
- (void)setZw_option:(id)arg1;
- (id)encondingNSUTF8:(id)arg1;
- (id)filterImageArray:(id)arg1 withFilterArray:(id)arg2;
- (id)checkURLIlegal:(id)arg1;
- (long long)indexSelectedImage:(id)arg1 allImageUrl:(id)arg2;
- (_Bool)judgeIndexImageUrl:(id)arg1 withOption:(id)arg2;
- (_Bool)zw_handlePreviewImageRequest:(id)arg1;
- (id)zwHTML_init;

@end

