//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FWWorkStatus, NSLayoutConstraint, UIColor, UIImageView, UILabel;

@interface FWMIneStatusView : UIView
{
    _Bool _clearMargin;
    FWWorkStatus *_status;
    UIColor *_titcolor;
    UILabel *_statusLabel;
    UIImageView *_iconView;
    NSLayoutConstraint *_iconViewW;
    double _iconW;
}

- (void).cxx_destruct;
@property(nonatomic) double iconW; // @synthesize iconW=_iconW;
@property(nonatomic) __weak NSLayoutConstraint *iconViewW; // @synthesize iconViewW=_iconViewW;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UIColor *titcolor; // @synthesize titcolor=_titcolor;
@property(retain, nonatomic) FWWorkStatus *status; // @synthesize status=_status;
@property(nonatomic, getter=isClearMargin) _Bool clearMargin; // @synthesize clearMargin=_clearMargin;
- (void)awakeFromNib;

@end

