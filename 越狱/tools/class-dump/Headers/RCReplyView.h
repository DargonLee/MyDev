//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel, UITextView;

@interface RCReplyView : UIView
{
    UITextView *_content;
    CDUnknownBlockType _keyboardHideCompletion;
    CDUnknownBlockType _callBackText;
    CDUnknownBlockType _dismiss;
    UIView *_cover;
    UIView *_replyBg;
    UIView *_contentBg;
    NSString *_tempString;
    UILabel *_titleLab;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) NSString *tempString; // @synthesize tempString=_tempString;
@property(retain, nonatomic) UIView *contentBg; // @synthesize contentBg=_contentBg;
@property(retain, nonatomic) UIView *replyBg; // @synthesize replyBg=_replyBg;
@property(retain, nonatomic) UIView *cover; // @synthesize cover=_cover;
@property(copy, nonatomic) CDUnknownBlockType dismiss; // @synthesize dismiss=_dismiss;
@property(copy, nonatomic) CDUnknownBlockType callBackText; // @synthesize callBackText=_callBackText;
@property(copy, nonatomic) CDUnknownBlockType keyboardHideCompletion; // @synthesize keyboardHideCompletion=_keyboardHideCompletion;
@property(retain, nonatomic) UITextView *content; // @synthesize content=_content;
- (void)dealloc;
- (void)shakeAnimationForView:(id)arg1;
- (void)setTitle;
- (void)commitClicked;
- (void)goBack;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)emSetTitleLabelTitle:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

