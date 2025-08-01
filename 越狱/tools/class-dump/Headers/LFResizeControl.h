//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIPanGestureRecognizer;
@protocol lf_resizeConrolDelegate;

@interface LFResizeControl : UIView
{
    id <lf_resizeConrolDelegate> _delegate;
    UIPanGestureRecognizer *_gestureRecognizer;
    struct CGPoint _translation;
    struct CGPoint _startPoint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) struct CGPoint translation; // @synthesize translation=_translation;
@property(nonatomic) __weak id <lf_resizeConrolDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handlePan:(id)arg1;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (id)initWithFrame:(struct CGRect)arg1;

@end

