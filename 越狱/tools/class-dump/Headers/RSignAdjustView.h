//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RFollowRotateViewProtocol-Protocol.h"
#import "RSignAdjustSaveOrDeleteViewProtocol-Protocol.h"

@class NSObject, NSString, RAdjustViewModel, RFittableFontLabel, RSignAdjustSaveOrDeleteView, RSignAdjustSizeView, UIColor;
@protocol RSignAdjustViewProtocol;

@interface RSignAdjustView : UIView <RFollowRotateViewProtocol, RSignAdjustSaveOrDeleteViewProtocol>
{
    _Bool _selected;
    _Bool _isScaling;
    _Bool _isTop;
    int _pageNumber;
    int _dateType;
    long long _ownerUid;
    RFittableFontLabel *_fittableFontLabel;
    UIColor *_insertTextColor;
    double _signWHScale;
    RSignAdjustSizeView *_adjustSizeView;
    id <RSignAdjustViewProtocol> _eventDelegate;
    unsigned long long _insertType;
    double _itemWH;
    double _scaleSize;
    RAdjustViewModel *_viewModel;
    RSignAdjustView *_currentDateView;
    NSObject *_data;
    RSignAdjustSaveOrDeleteView *_saveOrDeleteView;
    struct CGSize _cellSize;
    struct CGRect _oldFrame;
}

+ (struct CGRect)redFrameWithAdjustViewFrame:(struct CGRect)arg1;
+ (struct CGRect)adjustViewFrameWithRedFrame:(struct CGRect)arg1;
+ (id)viewWithEventDelegate:(id)arg1 signWHScale:(double)arg2 insertType:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isTop; // @synthesize isTop=_isTop;
@property(retain, nonatomic) RSignAdjustSaveOrDeleteView *saveOrDeleteView; // @synthesize saveOrDeleteView=_saveOrDeleteView;
@property(nonatomic) int dateType; // @synthesize dateType=_dateType;
@property(retain, nonatomic) NSObject *data; // @synthesize data=_data;
@property(retain, nonatomic) RSignAdjustView *currentDateView; // @synthesize currentDateView=_currentDateView;
@property(retain, nonatomic) RAdjustViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) double scaleSize; // @synthesize scaleSize=_scaleSize;
@property(nonatomic) _Bool isScaling; // @synthesize isScaling=_isScaling;
@property(nonatomic) int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) struct CGRect oldFrame; // @synthesize oldFrame=_oldFrame;
@property(nonatomic) double itemWH; // @synthesize itemWH=_itemWH;
@property(nonatomic) unsigned long long insertType; // @synthesize insertType=_insertType;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak id <RSignAdjustViewProtocol> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) RSignAdjustSizeView *adjustSizeView; // @synthesize adjustSizeView=_adjustSizeView;
@property(nonatomic) double signWHScale; // @synthesize signWHScale=_signWHScale;
@property(retain, nonatomic) UIColor *insertTextColor; // @synthesize insertTextColor=_insertTextColor;
@property(retain, nonatomic) RFittableFontLabel *fittableFontLabel; // @synthesize fittableFontLabel=_fittableFontLabel;
@property(nonatomic) long long ownerUid; // @synthesize ownerUid=_ownerUid;
- (id)sizeArray;
- (id)frameArray;
- (id)originalFrameArray;
- (id)transformArray;
- (id)new4PointArray;
- (struct CGPoint)newBottomRight;
- (struct CGPoint)newBottomLeft;
- (struct CGPoint)newTopRight;
- (struct CGPoint)newTopLeft;
- (struct CGPoint)newPointInView:(struct CGPoint)arg1;
- (struct CGPoint)pointRelativeToCenter:(struct CGPoint)arg1;
- (struct CGPoint)centerOffset:(struct CGPoint)arg1;
- (struct CGRect)originalFrame;
- (void)updateRSignAdjustSaveOrDeleteViewAddBtnLabel;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(readonly, copy, nonatomic) NSString *currentText;
- (void)updateFittableLabelText:(id)arg1 color:(id)arg2 textAlignment:(long long)arg3;
- (void)setResizeView:(id)arg1;
- (void)setHandWriteArr:(id)arg1 itemWH:(double)arg2;
- (void)setImage:(id)arg1;
- (void)clearTimeData;
- (id)timeImage;
- (struct CGRect)timeFrameInPDFView;
- (_Bool)haveTimeStamp;
- (double)getRadianDegreeFromTransform:(struct CGAffineTransform)arg1;
- (void)layoutSubviews;
- (id)getDrawManagerWithFilePath:(id)arg1 passWord:(id)arg2;
- (struct CGRect)newMiddleViewFrameWithScale:(double)arg1 widthUntis:(double)arg2 pdfHWScale:(double)arg3;
- (struct CGSize)getOtherPagePdfViewSize:(id)arg1;
- (struct CGSize)getCurrentPagePdfViewSize:(id)arg1;
- (void)updateAdjustViewModel;
- (void)layoutSubviewsManual;
- (void)showDeleteEditMenu:(_Bool)arg1;
- (id)textName;
- (id)textColor;
- (id)textFont;
- (id)getTextPointDictInAdjustView;
- (struct CGPoint)templetCenterInadjustViewScale;
- (void)adjustAnchPoint;
- (struct CGRect)frameWithDateFrame:(struct CGRect)arg1;
- (struct CGRect)frameWithTempletFrame:(struct CGRect)arg1;
- (struct CGRect)getTempletFrameWithAdjustFrame:(struct CGRect)arg1;
- (struct CGRect)getTempletFrameInAdjustView;
- (struct CGRect)templetFrameInPDFView;
- (void)select;
- (void)unSelect;
- (void)endMove;
- (void)beginMove;
- (void)touchBegin;
- (void)becomeActivate;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addDate;
- (void)rotateView;
- (void)deleteSign;
- (void)editText;
- (void)updateEditTime;
- (void)endRotate;
- (void)rotate:(double)arg1;
- (struct CGRect)restrictFrame:(struct CGRect)arg1 inRect:(struct CGSize)arg2 withOldFrame:(struct CGRect)arg3;
- (void)moveDistance:(struct CGSize)arg1 source:(long long)arg2;
- (void)judgePostion:(double)arg1:(double)arg2;
- (void)moveTo:(struct CGPoint)arg1 fromPoint:(struct CGPoint)arg2 source:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

