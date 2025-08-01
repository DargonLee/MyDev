//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JRPickColorViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class JRPickColorView, LFText, NSString, UIColor, UITextView;
@protocol LFTextBarDelegate;

@interface LFTextBar : UIView <UITextViewDelegate, JRPickColorViewDelegate>
{
    LFText *_showText;
    UIColor *_oKButtonTitleColorNormal;
    UIColor *_cancelButtonTitleColorNormal;
    NSString *_oKButtonTitle;
    NSString *_cancelButtonTitle;
    unsigned long long _maxLimitCount;
    double _customTopbarHeight;
    double _naviHeight;
    id <LFTextBarDelegate> _delegate;
    UIView *_topbar;
    UITextView *_lf_textView;
    JRPickColorView *_lf_colorSlider;
    UIView *_lf_keyboardBar;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *lf_keyboardBar; // @synthesize lf_keyboardBar=_lf_keyboardBar;
@property(nonatomic) __weak JRPickColorView *lf_colorSlider; // @synthesize lf_colorSlider=_lf_colorSlider;
@property(nonatomic) __weak UITextView *lf_textView; // @synthesize lf_textView=_lf_textView;
@property(nonatomic) __weak UIView *topbar; // @synthesize topbar=_topbar;
@property(nonatomic) __weak id <LFTextBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double naviHeight; // @synthesize naviHeight=_naviHeight;
@property(nonatomic) double customTopbarHeight; // @synthesize customTopbarHeight=_customTopbarHeight;
@property(nonatomic) unsigned long long maxLimitCount; // @synthesize maxLimitCount=_maxLimitCount;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(copy, nonatomic) NSString *oKButtonTitle; // @synthesize oKButtonTitle=_oKButtonTitle;
@property(retain, nonatomic) UIColor *cancelButtonTitleColorNormal; // @synthesize cancelButtonTitleColorNormal=_cancelButtonTitleColorNormal;
@property(retain, nonatomic) UIColor *oKButtonTitleColorNormal; // @synthesize oKButtonTitleColorNormal=_oKButtonTitleColorNormal;
@property(copy, nonatomic) LFText *showText; // @synthesize showText=_showText;
- (void)JRPickColorView:(id)arg1 didSelectColor:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)finishButtonClick;
- (void)cancelButtonClick;
- (void)fontBG_buttonClick:(id)arg1;
- (void)font_buttonClick:(id)arg1;
- (void)alignment_buttonClick:(id)arg1;
- (void)setTextSliderColorAtIndex:(unsigned long long)arg1;
- (void)setTextSliderColor:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)configKeyBoardBar;
- (void)configTextView;
- (void)configCustomNaviBar;
- (void)addKeyBoardNotify;
- (void)dealloc;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1 layout:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

