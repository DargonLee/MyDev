//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, QYSBluetoothSealBatteryView, UIImageView, UILabel;

@interface QYSBluetoothSealInfoHeaderView : UIView
{
    UIView *_whiteContainer;
    UIImageView *_iconImageView;
    UIView *_rightContainer;
    UILabel *_nameLabel;
    UILabel *_countLabel;
    QYSBluetoothSealBatteryView *_batteryView;
    NSLayoutConstraint *_nameHeight;
    NSLayoutConstraint *_countHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *countHeight; // @synthesize countHeight=_countHeight;
@property(retain, nonatomic) NSLayoutConstraint *nameHeight; // @synthesize nameHeight=_nameHeight;
@property(retain, nonatomic) QYSBluetoothSealBatteryView *batteryView; // @synthesize batteryView=_batteryView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *rightContainer; // @synthesize rightContainer=_rightContainer;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *whiteContainer; // @synthesize whiteContainer=_whiteContainer;
- (void)setCurrentPower:(unsigned long long)arg1 type:(id)arg2;
- (void)setRemainingCount:(unsigned long long)arg1;
- (void)setSealTitleName:(id)arg1;
- (void)initSubviews;
- (id)init;

@end

