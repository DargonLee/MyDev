//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;

@interface FWChangeLanguageController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isShowchoiceNext;
    _Bool _isFromLoginVc;
    CDUnknownBlockType _refershLanguage;
    UITableView *_tableView;
    NSArray *_dateSource;
    long long _begainRow;
    long long _selRow;
    long long _barStyle;
}

- (void).cxx_destruct;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(nonatomic) long long selRow; // @synthesize selRow=_selRow;
@property(nonatomic) long long begainRow; // @synthesize begainRow=_begainRow;
@property(retain, nonatomic) NSArray *dateSource; // @synthesize dateSource=_dateSource;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isFromLoginVc; // @synthesize isFromLoginVc=_isFromLoginVc;
@property(nonatomic) _Bool isShowchoiceNext; // @synthesize isShowchoiceNext=_isShowchoiceNext;
@property(copy, nonatomic) CDUnknownBlockType refershLanguage; // @synthesize refershLanguage=_refershLanguage;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableView;
- (void)setupDateSourece;
- (void)hadelSelLanguageSucess;
- (void)navBarClick;
- (void)backitem;
- (void)setupNaVgation;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

