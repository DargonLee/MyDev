//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class CAEAGLLayer;

@interface GMSEntityRendererLayer : CALayer
{
    CAEAGLLayer *_openGLLayer;
    CALayer *_activeLayer;
}

@property(readonly, nonatomic) CALayer *activeLayer; // @synthesize activeLayer=_activeLayer;
@property(readonly, nonatomic) CAEAGLLayer *openGLLayer; // @synthesize openGLLayer=_openGLLayer;
- (void).cxx_destruct;
- (void)setContentsScale:(double)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)layoutSublayers;
- (void)setFrame:(struct CGRect)arg1;
- (void)setOpaque:(_Bool)arg1;
- (id)init;

@end

