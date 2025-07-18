//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FWContactSelectViewControllerDelegate-Protocol.h"
#import "FWNumberKeyboardDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UISearchControllerDelegate-Protocol.h"
#import "UISearchResultsUpdating-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class FWDialTextField, FWNumberKeyboard, NSMutableArray, NSString, UIButton, UISearchController, UITableView, UIView;

@interface FWCallRecordsViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchControllerDelegate, UISearchResultsUpdating, FWContactSelectViewControllerDelegate, FWNumberKeyboardDelegate, UIScrollViewDelegate, UITextFieldDelegate>
{
    _Bool _isPresent;
    _Bool _fromJSApi;
    _Bool _dialDisable;
    _Bool _reOpen;
    UITableView *_tableView;
    UISearchController *_searchController;
    UIView *_whiteView;
    NSMutableArray *_callConversations;
    UIButton *_contactBtn;
    UIButton *_dialBtn;
    UIButton *_meetingBtn;
    long long _callType;
    UIView *_dialHeaderView;
    FWDialTextField *_dialTextField;
    UITableView *_dialTableView;
    NSMutableArray *_dialResults;
    NSMutableArray *_contacts;
    NSMutableArray *_results;
    FWNumberKeyboard *_numberKeyboard;
    UIView *_dialView;
    long long _barStyle;
    UIView *_dock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *dock; // @synthesize dock=_dock;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(retain, nonatomic) UIView *dialView; // @synthesize dialView=_dialView;
@property(nonatomic) _Bool reOpen; // @synthesize reOpen=_reOpen;
@property(retain, nonatomic) FWNumberKeyboard *numberKeyboard; // @synthesize numberKeyboard=_numberKeyboard;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
@property(retain, nonatomic) NSMutableArray *dialResults; // @synthesize dialResults=_dialResults;
@property(retain, nonatomic) UITableView *dialTableView; // @synthesize dialTableView=_dialTableView;
@property(retain, nonatomic) FWDialTextField *dialTextField; // @synthesize dialTextField=_dialTextField;
@property(retain, nonatomic) UIView *dialHeaderView; // @synthesize dialHeaderView=_dialHeaderView;
@property(nonatomic) long long callType; // @synthesize callType=_callType;
@property(retain, nonatomic) UIButton *meetingBtn; // @synthesize meetingBtn=_meetingBtn;
@property(retain, nonatomic) UIButton *dialBtn; // @synthesize dialBtn=_dialBtn;
@property(retain, nonatomic) UIButton *contactBtn; // @synthesize contactBtn=_contactBtn;
@property(retain, nonatomic) NSMutableArray *callConversations; // @synthesize callConversations=_callConversations;
@property(retain, nonatomic) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(retain, nonatomic) UISearchController *searchController; // @synthesize searchController=_searchController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool dialDisable; // @synthesize dialDisable=_dialDisable;
@property(nonatomic) _Bool fromJSApi; // @synthesize fromJSApi=_fromJSApi;
@property(nonatomic) _Bool isPresent; // @synthesize isPresent=_isPresent;
- (void)setupUI;
- (void)meetingAction;
- (void)contactAction;
- (void)dialViewAction:(id)arg1;
- (void)dialAction:(id)arg1;
- (void)btnClick:(id)arg1;
- (void)updateDialResultsForDialTextField;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)dialTableViewHide;
- (void)dialTableViewShow;
- (void)numberKeyboardHide;
- (void)numberKeyboardShow;
- (void)numberKeyboardShouldHide:(id)arg1;
- (void)numberKeyboardShouldDeleteBackward:(id)arg1;
- (void)numberKeyboardShouldPaste:(id)arg1;
- (void)numberKeyboard:(id)arg1 shouldInsertText:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onMultiSelectGroupReturn:(id)arg1 mode:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)willDismissSearchController:(id)arg1;
- (void)didPresentSearchController:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (void)fwVoIPManageChatTypePointWith:(id)arg1 isInternal:(_Bool)arg2 phoneNum:(id)arg3 userName:(id)arg4;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)fwPhoneContactsTableViewCell:(id)arg1 dataSource:(id)arg2 cellForRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)convertLJPerson:(id)arg1;
- (void)reloadContactsWith:(id)arg1;
- (void)viewApperChangStatusStyle;
- (void)viewWillDisappearChangStatusStyle;
- (void)userInfoDidLoad:(id)arg1;
- (void)dealloc;
- (void)dismissViewController;
- (void)loadData;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

