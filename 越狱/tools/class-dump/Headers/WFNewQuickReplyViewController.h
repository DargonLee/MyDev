//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITextViewDelegate-Protocol.h"

@class NSDictionary, NSString, UILabel, UITextView;

@interface WFNewQuickReplyViewController : UIViewController <UITextViewDelegate>
{
    int _mode;
    NSDictionary *_dictionary;
    UILabel *_placeholder;
    UITextView *_textView;
    UILabel *_infoLabel;
    UILabel *_label;
    UILabel *_numlabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *numlabel; // @synthesize numlabel=_numlabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UILabel *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(nonatomic) int mode; // @synthesize mode=_mode;
- (void)didReceiveMemoryWarning;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)rightBarButtonDown:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithMode:(int)arg1 dictionary:(id)arg2;
- (id)initWithMode:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

