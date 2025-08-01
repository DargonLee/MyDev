//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIColor, UILabel;

@interface FWCallOperationView : UIView
{
    _Bool _enabled;
    _Bool _selected;
    UIColor *_textColor;
    NSString *_title;
    NSString *_imageName;
    NSString *_selectImageName;
    UIButton *_button;
    UILabel *_titleLabel;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *selectImageName; // @synthesize selectImageName=_selectImageName;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
- (void)buildUI;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (id)initWithImage:(id)arg1 title:(id)arg2;

@end

