//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol RSignAdjustSaveOrDeleteViewProtocol;

@interface RSignAdjustSaveOrDeleteView : UIView
{
    UIButton *_editButton;
    UIButton *_deleteButton;
    UIButton *_rotateButton;
    UIButton *_addDateButton;
    id <RSignAdjustSaveOrDeleteViewProtocol> _SOrDDelegate;
    unsigned long long _insertType;
}

+ (id)viewWithSOrDDelegate:(id)arg1 insertType:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long insertType; // @synthesize insertType=_insertType;
@property(nonatomic) __weak id <RSignAdjustSaveOrDeleteViewProtocol> SOrDDelegate; // @synthesize SOrDDelegate=_SOrDDelegate;
@property(retain, nonatomic) UIButton *addDateButton; // @synthesize addDateButton=_addDateButton;
@property(retain, nonatomic) UIButton *rotateButton; // @synthesize rotateButton=_rotateButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
- (_Bool)shouldPutonAddDateButton;
- (void)updateAddBtnLabel;
- (void)date;
- (void)rotate;
- (void)delete;
- (void)edit;
- (struct CGRect)getHotSpotRect;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)rightCornerRadii:(id)arg1;
- (void)leftCornerRadii:(id)arg1;
- (double)getWidthWithText:(id)arg1;
- (void)layoutSubviews;

@end

