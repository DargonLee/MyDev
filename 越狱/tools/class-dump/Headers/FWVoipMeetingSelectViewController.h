//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FWContactSelectViewController.h"

@class UIButton, UILabel, UIView;

@interface FWVoipMeetingSelectViewController : FWContactSelectViewController
{
    CDUnknownBlockType _callback;
    UIView *_bottomView;
    UILabel *_chosenLabel;
    UIButton *_confirmButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *chosenLabel; // @synthesize chosenLabel=_chosenLabel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void)setupUI;
- (void)btnClick:(id)arg1;
- (void)changeSelectPersonCount:(int)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)changeSelectPersonCount;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)refresh;
- (void)backAction:(id)arg1;
- (void)selectAllPerson;
- (void)viewDidLoad;

@end

