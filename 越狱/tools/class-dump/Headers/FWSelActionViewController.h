//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableArray;

@interface FWSelActionViewController : UITableViewController
{
    NSArray *_dataSources;
    long long _selRow;
    CDUnknownBlockType _selActionDidSelectRow;
    NSMutableArray *_selRows;
    long long _curselRow;
}

- (void).cxx_destruct;
@property(nonatomic) long long curselRow; // @synthesize curselRow=_curselRow;
@property(retain, nonatomic) NSMutableArray *selRows; // @synthesize selRows=_selRows;
@property(copy, nonatomic) CDUnknownBlockType selActionDidSelectRow; // @synthesize selActionDidSelectRow=_selActionDidSelectRow;
@property(nonatomic) long long selRow; // @synthesize selRow=_selRow;
@property(retain, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableView;
- (void)setupSelRows;
- (void)viewDidLoad;

@end

