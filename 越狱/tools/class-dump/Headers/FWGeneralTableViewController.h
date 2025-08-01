//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FWTableViewController.h"

#import "UIActionSheetDelegate-Protocol.h"

@class FWGeneralHelper, NSMutableArray, NSString;

@interface FWGeneralTableViewController : FWTableViewController <UIActionSheetDelegate>
{
    NSMutableArray *_data;
    FWGeneralHelper *_helper;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWGeneralHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
- (void)presentActionSheetWithTitle:(id)arg1 handerTitle:(id)arg2 Handele:(CDUnknownBlockType)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

