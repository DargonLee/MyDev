//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor, UIView;

@interface wslSignColorPanelCell : UICollectionViewCell
{
    _Bool _isCurrentSelected;
    UIColor *_signColor;
    UIView *_colorView;
    UIView *_selectedWhiteView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *selectedWhiteView; // @synthesize selectedWhiteView=_selectedWhiteView;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(nonatomic) _Bool isCurrentSelected; // @synthesize isCurrentSelected=_isCurrentSelected;
@property(retain, nonatomic) UIColor *signColor; // @synthesize signColor=_signColor;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

