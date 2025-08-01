//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString, NSTimer, UIImageView;
@protocol FWCaptureBtnViewDelegate;

@interface FWCaptureBtnView : UIView <CAAnimationDelegate>
{
    float _duration;
    NSTimer *_durationTimer;
    UIView *_LongPressView;
    UIView *_insideView;
    UIView *_commitView;
    UIView *_cancelView;
    UIView *_editView;
    CAShapeLayer *_arcLayer;
    id <FWCaptureBtnViewDelegate> _delegate;
    UIImageView *_commitImageView;
    UIImageView *_cancelImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *cancelImageView; // @synthesize cancelImageView=_cancelImageView;
@property(retain, nonatomic) UIImageView *commitImageView; // @synthesize commitImageView=_commitImageView;
@property(nonatomic) __weak id <FWCaptureBtnViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CAShapeLayer *arcLayer; // @synthesize arcLayer=_arcLayer;
@property(retain, nonatomic) UIView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) UIView *cancelView; // @synthesize cancelView=_cancelView;
@property(retain, nonatomic) UIView *commitView; // @synthesize commitView=_commitView;
@property(retain, nonatomic) UIView *insideView; // @synthesize insideView=_insideView;
@property(retain, nonatomic) UIView *LongPressView; // @synthesize LongPressView=_LongPressView;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSTimer *durationTimer; // @synthesize durationTimer=_durationTimer;
- (void)computeDuration:(id)arg1;
- (void)drawLineAnimation:(id)arg1;
- (id)createImageWithColor:(id)arg1;
- (void)editAction;
- (void)cancelAction;
- (void)commitAction;
- (void)landScapeFit;
- (void)showCheckedView:(id)arg1;
- (void)longpressAction:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)handleDeviceOrientationDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

