//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FWFavoriteModel, UIImageView, UILabel, UIView;

@interface FWFavoriteViewCell : UITableViewCell
{
    FWFavoriteModel *_favoriteModel;
    UILabel *_fromeLabel;
    UILabel *_timeLabel;
    UIView *_bgView;
    UILabel *_titleLabel;
    UIView *_imageBgView;
    UIImageView *_iconView;
    UILabel *_descLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UIView *imageBgView; // @synthesize imageBgView=_imageBgView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *fromeLabel; // @synthesize fromeLabel=_fromeLabel;
@property(retain, nonatomic) FWFavoriteModel *favoriteModel; // @synthesize favoriteModel=_favoriteModel;
- (id)getPushContent:(id)arg1 content:(id)arg2;
- (id)setupOldVersionTitleWithShareType:(id)arg1;
- (_Bool)isoldTypeWithShareType:(id)arg1;
- (void)layoutsubView;
- (void)layoutSubviews;
- (void)setHiddenImage:(_Bool)arg1 hiddenTitle:(_Bool)arg2 hiddenDesc:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

