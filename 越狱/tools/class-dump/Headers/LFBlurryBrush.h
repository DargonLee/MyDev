//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LFPaintBrush.h"

@class UIColor;

@interface LFBlurryBrush : LFPaintBrush
{
    UIColor *_lineColor;
}

+ (_Bool)blurryBrushCache;
+ (void)loadBrushImage:(id)arg1 radius:(double)arg2 canvasSize:(struct CGSize)arg3 useCache:(_Bool)arg4 complete:(CDUnknownBlockType)arg5;
+ (id)drawLayerWithTrackDict:(id)arg1;
- (void).cxx_destruct;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (id)init;

@end

