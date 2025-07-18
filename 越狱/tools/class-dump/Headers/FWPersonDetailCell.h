//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FWPersonItem, UIButton, UILabel, UIView;
@protocol FWPersonDetailCellDelegate;

@interface FWPersonDetailCell : UITableViewCell
{
    _Bool _hiddenLine;
    id <FWPersonDetailCellDelegate> _delegate;
    FWPersonItem *_personiItem;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
    UIButton *_icon1View;
    UIButton *_icon2View;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UIButton *icon2View; // @synthesize icon2View=_icon2View;
@property(nonatomic) __weak UIButton *icon1View; // @synthesize icon1View=_icon1View;
@property(nonatomic) __weak UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FWPersonItem *personiItem; // @synthesize personiItem=_personiItem;
@property(nonatomic, getter=isHiddenLine) _Bool hiddenLine; // @synthesize hiddenLine=_hiddenLine;
@property(nonatomic) __weak id <FWPersonDetailCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (void)btn1Click:(id)arg1;
- (void)btn2Click:(id)arg1;
- (void)awakeFromNib;

@end

