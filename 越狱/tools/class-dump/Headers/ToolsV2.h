//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ToolsV2 : NSObject
{
}

+ (id)strFingerOrFace;
+ (id)generateHeaderPartView:(id)arg1 action:(SEL)arg2 ShowBackBtnTag:(id)arg3;
+ (_Bool)isSupportFaceID;
+ (id)imgFingerOrFaceID;
+ (float)getZoomHeight;
+ (float)getZoomWidth;
+ (float)getYEnd:(struct CGRect)arg1;
+ (float)getWidgetDownDelta;
+ (float)getViewHeight;
+ (float)getStatusHeight;
+ (struct CGRect)getLoadedViewFrame;
+ (float)getHeaderHeight;
+ (float)getBottomUpDeta;
+ (struct CGRect)adjustFrame:(struct CGRect)arg1 XZoom:(float)arg2 YZoom:(float)arg3 WidthZoom:(float)arg4 HeigthZoom:(float)arg5;
+ (id)doDevicePlatform;
+ (struct CGRect)adjustFrame:(struct CGRect)arg1 DeltaFrame:(float [4])arg2;
+ (id)shareInstance;
- (id)init;

@end

