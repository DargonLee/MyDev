//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface LFStickerProgressView : UIView
{
    float _progress;
    CAShapeLayer *_backCircle;
    CAShapeLayer *_foreCircle;
    struct CGRect _circlesSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *foreCircle; // @synthesize foreCircle=_foreCircle;
@property(retain, nonatomic) CAShapeLayer *backCircle; // @synthesize backCircle=_backCircle;
@property(nonatomic) struct CGRect circlesSize; // @synthesize circlesSize=_circlesSize;
@property(nonatomic) float progress; // @synthesize progress=_progress;
- (void)resetProgressView;
- (void)stopAnimation;
- (void)startAnimation;
- (void)drawBackCircle:(_Bool)arg1;
- (void)addForeCircleWidthSize:(double)arg1 lineWidth:(double)arg2;
- (void)addBackCircleWithSize:(double)arg1 lineWidth:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

