//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FWViewController.h"

#import "FWContactSelectViewControllerDelegate-Protocol.h"
#import "FWSearchViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FWSearchHelper, NSDictionary, NSMutableArray, NSString, RCConversation, SPAlertController, UISearchBar, UISearchController, UITableView;

@interface FWTransportViewController : FWViewController <UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, UISearchBarDelegate, FWContactSelectViewControllerDelegate, FWSearchViewControllerDelegate>
{
    NSMutableArray *_dataSourceArray;
    NSMutableArray *_tempDataSource;
    UITableView *_tableView;
    UISearchBar *_mySearchBar;
    RCConversation *_tempConversation;
    UISearchBar *_searchBar;
    _Bool _isTransportFile;
    CDUnknownBlockType _callBack;
    CDUnknownBlockType _replyCallBack;
    long long _transMode;
    long long _transitionType;
    NSDictionary *_transportFileDict;
    NSString *_contentMsg;
    UISearchController *_searchController;
    FWSearchHelper *_searchHelper;
    SPAlertController *_alertController;
    NSString *_replyString;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *replyString; // @synthesize replyString=_replyString;
@property(nonatomic) __weak SPAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) FWSearchHelper *searchHelper; // @synthesize searchHelper=_searchHelper;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(copy, nonatomic) NSString *contentMsg; // @synthesize contentMsg=_contentMsg;
@property(nonatomic) _Bool isTransportFile; // @synthesize isTransportFile=_isTransportFile;
@property(retain, nonatomic) NSDictionary *transportFileDict; // @synthesize transportFileDict=_transportFileDict;
@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;
@property(nonatomic) long long transMode; // @synthesize transMode=_transMode;
@property(copy, nonatomic) CDUnknownBlockType replyCallBack; // @synthesize replyCallBack=_replyCallBack;
@property(copy, nonatomic) CDUnknownBlockType callBack; // @synthesize callBack=_callBack;
- (void)getConversationListFromRemoteFinish;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)minMemberToDiscussion:(id)arg1;
- (void)addMemberToDiscussion:(id)arg1;
- (void)onMultiSelectGroupCance;
- (void)changeDiscussionCreaterResult:(id)arg1;
- (void)onMultiSelectGroupReturn:(id)arg1 mode:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)scrollViewDidScroll:(id)arg1;
- (void)confirmAction;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertWithTransport;
- (void)customAlert;
- (void)didSelectModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)leftBarButtonDown:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

