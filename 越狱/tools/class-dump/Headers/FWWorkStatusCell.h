//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FWWorkStatus, UIImageView, UILabel, UIView;

@interface FWWorkStatusCell : UITableViewCell
{
    FWWorkStatus *_workStatus;
    UILabel *_statusLabel;
    UIImageView *_iconView;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) FWWorkStatus *workStatus; // @synthesize workStatus=_workStatus;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

