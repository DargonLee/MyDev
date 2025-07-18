//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FWMenuItem, UIImageView, UILabel, UIView;

@interface FWMenuCell : UITableViewCell
{
    FWMenuItem *_menuItem;
    UIView *_separator;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_midLabel;
    UIImageView *_rightImageView;
    UIView *_redPointView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *redPointView; // @synthesize redPointView=_redPointView;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *midLabel; // @synthesize midLabel=_midLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) FWMenuItem *menuItem; // @synthesize menuItem=_menuItem;
- (void)p_addMasonry;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

