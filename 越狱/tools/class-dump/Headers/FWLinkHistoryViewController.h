//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, RCConversation, UITableView, UIView;

@interface FWLinkHistoryViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _loadFinish;
    int _pageNumber;
    unsigned long long _conversationType;
    NSString *_targetId;
    RCConversation *_conversation;
    UIView *_blankView;
    UITableView *_tableView;
    NSMutableArray *_linkArray;
    NSMutableArray *_linkSectionData;
    NSMutableArray *_messageIdArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *messageIdArray; // @synthesize messageIdArray=_messageIdArray;
@property(nonatomic) _Bool loadFinish; // @synthesize loadFinish=_loadFinish;
@property(nonatomic) int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) NSMutableArray *linkSectionData; // @synthesize linkSectionData=_linkSectionData;
@property(retain, nonatomic) NSMutableArray *linkArray; // @synthesize linkArray=_linkArray;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *blankView; // @synthesize blankView=_blankView;
@property(retain, nonatomic) RCConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(nonatomic) unsigned long long conversationType; // @synthesize conversationType=_conversationType;
- (void)setupBlankUI;
- (void)setupUI;
- (double)getHeightWithText:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)dataProcessing;
- (void)loadData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

