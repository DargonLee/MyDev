//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;
@protocol HKFloatBallDelegate;

@interface HKFloatBall : UIView
{
    id <HKFloatBallDelegate> _delegate;
    UIImageView *_iconImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak id <HKFloatBallDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tap:(id)arg1;
- (void)endTouch:(struct CGPoint)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

