//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAGradientLayer, NSArray, NSNumber, UIColor, UIFont;
@protocol MJNIndexViewDataSource;

@interface MJNIndexView : UIControl
{
    _Bool _getSelectedItemsAfterPanGestureIsFinished;
    _Bool _darkening;
    _Bool _fading;
    _Bool _curtainStays;
    _Bool _curtainMoves;
    _Bool _curtainMargins;
    _Bool _ergonomicHeight;
    _Bool _animate;
    _Bool _curtain;
    _Bool _dot;
    int _rangeOfDeflection;
    int _times;
    UIColor *_fontColor;
    id <MJNIndexViewDataSource> _dataSource;
    UIFont *_font;
    UIFont *_selectedItemFont;
    UIColor *_selectedItemFontColor;
    long long _itemsAligment;
    double _rightMargin;
    double _upperMargin;
    double _lowerMargin;
    double _maxItemDeflection;
    UIColor *_curtainColor;
    double _curtainFade;
    double _minimumGapBetweenItems;
    double _maxValueForErgonomicHeight;
    NSArray *_indexItems;
    NSArray *_itemsAtrributes;
    NSNumber *_section;
    double _itemsOffset;
    double _maxWidth;
    CAGradientLayer *_gradientLayer;
    double _curtainFadeFactor;
    struct CGPoint _firstItemOrigin;
    struct CGSize _indexSize;
}

- (void).cxx_destruct;
@property(nonatomic) int times; // @synthesize times=_times;
@property(nonatomic) _Bool dot; // @synthesize dot=_dot;
@property(nonatomic) double curtainFadeFactor; // @synthesize curtainFadeFactor=_curtainFadeFactor;
@property(nonatomic) _Bool curtain; // @synthesize curtain=_curtain;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) _Bool animate; // @synthesize animate=_animate;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) struct CGSize indexSize; // @synthesize indexSize=_indexSize;
@property(nonatomic) struct CGPoint firstItemOrigin; // @synthesize firstItemOrigin=_firstItemOrigin;
@property(nonatomic) double itemsOffset; // @synthesize itemsOffset=_itemsOffset;
@property(retain, nonatomic) NSNumber *section; // @synthesize section=_section;
@property(retain, nonatomic) NSArray *itemsAtrributes; // @synthesize itemsAtrributes=_itemsAtrributes;
@property(retain, nonatomic) NSArray *indexItems; // @synthesize indexItems=_indexItems;
@property(nonatomic) double maxValueForErgonomicHeight; // @synthesize maxValueForErgonomicHeight=_maxValueForErgonomicHeight;
@property _Bool ergonomicHeight; // @synthesize ergonomicHeight=_ergonomicHeight;
@property(nonatomic) double minimumGapBetweenItems; // @synthesize minimumGapBetweenItems=_minimumGapBetweenItems;
@property(nonatomic) _Bool curtainMargins; // @synthesize curtainMargins=_curtainMargins;
@property(nonatomic) _Bool curtainMoves; // @synthesize curtainMoves=_curtainMoves;
@property(nonatomic) _Bool curtainStays; // @synthesize curtainStays=_curtainStays;
@property(nonatomic) double curtainFade; // @synthesize curtainFade=_curtainFade;
@property(retain, nonatomic) UIColor *curtainColor; // @synthesize curtainColor=_curtainColor;
@property(nonatomic) int rangeOfDeflection; // @synthesize rangeOfDeflection=_rangeOfDeflection;
@property(nonatomic) double maxItemDeflection; // @synthesize maxItemDeflection=_maxItemDeflection;
@property(nonatomic) double lowerMargin; // @synthesize lowerMargin=_lowerMargin;
@property(nonatomic) double upperMargin; // @synthesize upperMargin=_upperMargin;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) long long itemsAligment; // @synthesize itemsAligment=_itemsAligment;
@property(retain, nonatomic) UIColor *selectedItemFontColor; // @synthesize selectedItemFontColor=_selectedItemFontColor;
@property(nonatomic) _Bool fading; // @synthesize fading=_fading;
@property(nonatomic) _Bool darkening; // @synthesize darkening=_darkening;
@property(retain, nonatomic) UIFont *selectedItemFont; // @synthesize selectedItemFont=_selectedItemFont;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool getSelectedItemsAfterPanGestureIsFinished; // @synthesize getSelectedItemsAfterPanGestureIsFinished=_getSelectedItemsAfterPanGestureIsFinished;
@property(nonatomic) __weak id <MJNIndexViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTestRectangleAtPoint:(struct CGPoint)arg1 withSize:(struct CGSize)arg2 red:(double)arg3 green:(double)arg4 blue:(double)arg5 alpha:(double)arg6;
- (void)drawLabel:(id)arg1 withFont:(id)arg2 forSize:(struct CGSize)arg3 atPoint:(struct CGPoint)arg4 withAlignment:(long long)arg5 lineBreakMode:(long long)arg6 color:(id)arg7;
- (void)showCurtain;
- (void)hideCurtain;
- (void)addCurtain;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawIndex;
- (id)darkerColor:(id)arg1 by:(float)arg2;
- (void)positionForIndexItemsWhilePanLocation:(struct CGPoint)arg1;
- (void)resetPosition;
- (void)initialiseAllAttributes;
- (_Bool)checkForUpperCase;
- (_Bool)checkForLowerCase;
- (void)getAllItemsSize;
- (void)refreshIndexItems;
- (void)didMoveToSuperview;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *fontColor; // @synthesize fontColor=_fontColor;

@end

