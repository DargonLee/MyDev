//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@interface LFGridMaskLayer : CAShapeLayer
{
    _Bool _circle;
    struct CGColor *_maskColor;
    struct CGRect _maskRect;
}

@property(nonatomic, setter=setMaskRect:) struct CGRect maskRect; // @synthesize maskRect=_maskRect;
@property(nonatomic, getter=isCircle) _Bool circle; // @synthesize circle=_circle;
- (struct CGPath *)newDrawClearGrid;
- (struct CGPath *)newDrawGrid;
- (void)clearMaskWithAnimated:(_Bool)arg1;
- (void)clearMask;
- (void)setMaskRect:(struct CGRect)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CGColor *maskColor; // @synthesize maskColor=_maskColor;
- (void)customInit;
- (id)init;

@end

