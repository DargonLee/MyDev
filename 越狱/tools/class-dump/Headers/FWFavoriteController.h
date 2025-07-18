//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FWFavoriteDetailViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FWChatViewController, NSMutableArray, NSString, UIButton, UILabel, UISearchBar, UITableView, UITextField, UIView;

@interface FWFavoriteController : UIViewController <UITableViewDelegate, UITableViewDataSource, FWFavoriteDetailViewDelegate, UISearchBarDelegate>
{
    _Bool _isFromMineVc;
    int _pageNumber;
    FWChatViewController *_chatVc;
    NSString *_targetId;
    unsigned long long _type;
    NSString *_converTitle;
    CDUnknownBlockType _sendMsgBlock;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    UISearchBar *_searchBar;
    UITextField *_searchTextFiled;
    UIButton *_selBtn;
    NSString *_className;
    UIView *_noView;
    UILabel *_noLabel;
    NSString *_tipName;
    UIView *_headView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(copy, nonatomic) NSString *tipName; // @synthesize tipName=_tipName;
@property(nonatomic) __weak UILabel *noLabel; // @synthesize noLabel=_noLabel;
@property(nonatomic) __weak UIView *noView; // @synthesize noView=_noView;
@property(copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(nonatomic) int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) UIButton *selBtn; // @synthesize selBtn=_selBtn;
@property(retain, nonatomic) UITextField *searchTextFiled; // @synthesize searchTextFiled=_searchTextFiled;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType sendMsgBlock; // @synthesize sendMsgBlock=_sendMsgBlock;
@property(copy, nonatomic) NSString *converTitle; // @synthesize converTitle=_converTitle;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *targetId; // @synthesize targetId=_targetId;
@property(nonatomic) _Bool isFromMineVc; // @synthesize isFromMineVc=_isFromMineVc;
@property(retain, nonatomic) FWChatViewController *chatVc; // @synthesize chatVc=_chatVc;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)pushToDetailWithFavoriteModel:(id)arg1;
- (void)snedMessageWithFavoriteModel:(id)arg1;
- (void)favoriteDetailView:(id)arg1 cellDidClikWithFavoriteModel:(id)arg2 type:(long long)arg3;
- (void)showFavoriteDetailViewWithFavoriteModel:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setupTableRefreshFooter;
- (void)loadData;
- (void)getTextFiledSubViewInView:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)updateSearchResultsForSearchController:(id)arg1;
- (void)setupNoDataView;
- (void)typeBtnDidClick:(id)arg1;
- (void)setupHeadView;
- (void)setupTableView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

