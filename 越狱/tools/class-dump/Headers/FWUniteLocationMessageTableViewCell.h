//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FWUniteMessageTableViewCell.h"

@class UIImageView, UILabel;

@interface FWUniteLocationMessageTableViewCell : FWUniteMessageTableViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIImageView *_typeImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *typeImageView; // @synthesize typeImageView=_typeImageView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setAutoLayout;
- (void)setDataModel:(id)arg1 userId:(id)arg2 sentTime:(long long)arg3;
- (void)shouldHideDividingLine:(_Bool)arg1;
- (void)shouldHideAvatarView:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tapMessage:(id)arg1;
- (void)initialize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

