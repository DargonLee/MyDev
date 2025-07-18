//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NSTimer, UIButton, UILabel, UITextField;

@interface SmsAlertView : UIView
{
    CDUnknownBlockType _alerResult;
    CDUnknownBlockType _reacquireCode;
    UIView *_alertView;
    UILabel *_messageLabel;
    UITextField *_textField;
    UIButton *_confirmButton;
    UIButton *_cancelButton;
    UIButton *_reacquireButton;
    UILabel *_titleLabel;
    NSString *_message;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *reacquireButton; // @synthesize reacquireButton=_reacquireButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(copy, nonatomic) CDUnknownBlockType reacquireCode; // @synthesize reacquireCode=_reacquireCode;
@property(copy, nonatomic) CDUnknownBlockType alerResult; // @synthesize alerResult=_alerResult;
- (void)reacquireAction:(id)arg1;
- (void)confirmAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)creatShowAnimation;
- (void)showSmsAlertView;
- (void)doTimerAction;
- (void)startTimer:(int)arg1;
- (void)setButtonEnable:(_Bool)arg1;
- (void)setButtonTitle:(id)arg1;
- (void)setupSplitLineView;
- (void)setupRequireButton;
- (void)setupCancelButton;
- (void)setupConfirmButton;
- (void)setupInputView;
- (void)setupMessageView;
- (void)setupTitleView;
- (void)setupAlertView;
- (void)initSubViews;
- (id)initWithMessage:(id)arg1;

@end

