//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, UIButton, UIImageView, UILabel;

@interface LFTipsGuideView : UIView
{
    CDUnknownBlockType _didShowTips;
    CDUnknownBlockType _completion;
    UIView *_parentView;
    UIButton *_okBtn;
    UIImageView *_btnMaskView;
    UIImageView *_arrowView;
    UILabel *_tipsLabel;
    UIView *_topMaskView;
    UIView *_bottomMaskView;
    UIView *_leftMaskView;
    UIView *_rightMaskView;
    long long _index;
    long long _count;
    NSArray *_rectsArr;
    NSArray *_tipsArr;
    NSString *_tipsStr;
    struct CGRect _maskRect;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tipsStr; // @synthesize tipsStr=_tipsStr;
@property(retain, nonatomic) NSArray *tipsArr; // @synthesize tipsArr=_tipsArr;
@property(retain, nonatomic) NSArray *rectsArr; // @synthesize rectsArr=_rectsArr;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) UIView *rightMaskView; // @synthesize rightMaskView=_rightMaskView;
@property(retain, nonatomic) UIView *leftMaskView; // @synthesize leftMaskView=_leftMaskView;
@property(retain, nonatomic) UIView *bottomMaskView; // @synthesize bottomMaskView=_bottomMaskView;
@property(retain, nonatomic) UIView *topMaskView; // @synthesize topMaskView=_topMaskView;
@property(nonatomic) struct CGRect maskRect; // @synthesize maskRect=_maskRect;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIImageView *btnMaskView; // @synthesize btnMaskView=_btnMaskView;
@property(retain, nonatomic) UIButton *okBtn; // @synthesize okBtn=_okBtn;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType didShowTips; // @synthesize didShowTips=_didShowTips;
- (void)next;
- (void)dismiss;
- (void)show;
- (void)showInView:(id)arg1 maskRects:(id)arg2 withTips:(id)arg3;
- (void)showInView:(id)arg1 maskViews:(id)arg2 withTips:(id)arg3;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

