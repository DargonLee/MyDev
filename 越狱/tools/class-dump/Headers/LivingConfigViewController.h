//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UITextField;

@interface LivingConfigViewController : UIViewController <UITextFieldDelegate>
{
    UITextField *_numTextField;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextField *numTextField; // @synthesize numTextField=_numTextField;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)isByOrderAction:(id)arg1;
- (void)liveYawAction:(id)arg1;
- (void)liveHeadDownAction:(id)arg1;
- (void)liveHeadUpAction:(id)arg1;
- (void)liveHeadLeftAction:(id)arg1;
- (void)liveHeadRightAction:(id)arg1;
- (void)liveMouthAction:(id)arg1;
- (void)liveEyeAction:(id)arg1;
- (void)closeAction;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

