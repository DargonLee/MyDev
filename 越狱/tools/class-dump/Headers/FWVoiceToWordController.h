//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FWViewController.h"

#import "RCEmojiViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class FWEmojiBoardView, NSString, UIButton, UITextView, UIView, VoiceImageView;
@protocol FWVoiceToWordControllerDelegate;

@interface FWVoiceToWordController : FWViewController <RCEmojiViewDelegate, UITextViewDelegate>
{
    NSString *_voiceText;
    id <FWVoiceToWordControllerDelegate> _delegate;
    UITextView *_textView;
    UIView *_toolBar;
    FWEmojiBoardView *_emojiBoardView;
    UIButton *_emojiButton;
    UIButton *_voiceButton;
    VoiceImageView *_voiceImageVI;
}

- (void).cxx_destruct;
@property(retain, nonatomic) VoiceImageView *voiceImageVI; // @synthesize voiceImageVI=_voiceImageVI;
@property(retain, nonatomic) UIButton *voiceButton; // @synthesize voiceButton=_voiceButton;
@property(retain, nonatomic) UIButton *emojiButton; // @synthesize emojiButton=_emojiButton;
@property(retain, nonatomic) FWEmojiBoardView *emojiBoardView; // @synthesize emojiBoardView=_emojiBoardView;
@property(retain, nonatomic) UIView *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak id <FWVoiceToWordControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *voiceText; // @synthesize voiceText=_voiceText;
- (void)didSendButtonEvent:(id)arg1 sendButton:(id)arg2;
- (void)didTouchEmojiView:(id)arg1 touchedEmoji:(id)arg2;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)closeAction;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)voiceToWorddidReceiveKeyboardWillHideNotification:(id)arg1;
- (void)voiceToWorddidReceiveKeyboardWillShowNotification:(id)arg1;
- (void)didTouchVoiceDown:(id)arg1;
- (void)didTouchEmojiDown:(id)arg1;
- (void)initNotification;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

