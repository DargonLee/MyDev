//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class KGAlertView, UIButton;

@interface KGAlertViewController : UIViewController
{
    UIButton *_coverView;
    KGAlertView *_alertView;
}

@property(retain, nonatomic) KGAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIButton *coverView; // @synthesize coverView=_coverView;
- (void).cxx_destruct;
- (void)handleTouchBackgroundEvent;
- (struct CGSize)alertViewSize;
- (void)fitAlertViewSize;
- (_Bool)isPortrait;
- (void)dismissAlertViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)addAlertView;
- (void)addTouchBackgroundView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

