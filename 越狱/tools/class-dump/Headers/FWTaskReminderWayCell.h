//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FWTaskRemind, UILabel, UIView;

@interface FWTaskReminderWayCell : UITableViewCell
{
    FWTaskRemind *_remind;
    UILabel *_descLabel;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) FWTaskRemind *remind; // @synthesize remind=_remind;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

