//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"

@class KGBrushCanvas, NSString, UIImageView;

@interface iAppPDFSignatureView : UIView <UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate>
{
    long long _mode;
    unsigned long long _touchPosition;
    CDUnknownBlockType _areaDidEndMoveBlock;
    CDUnknownBlockType _dismissCompletionBlock;
    UIView *_containerView;
    UIView *_areaView;
    UIView *_areaMenuView;
    UIImageView *_sealImageView;
    UIView *_signatureView;
    UIView *_brushBelowView;
    KGBrushCanvas *_brushCanvasView;
    struct CGSize _viewSize;
    struct CGPoint _boxBeginPoint;
    struct CGRect _areaBeginFrame;
    struct CGRect _boxBeginConstant;
}

@property(retain, nonatomic) KGBrushCanvas *brushCanvasView; // @synthesize brushCanvasView=_brushCanvasView;
@property(retain, nonatomic) UIView *brushBelowView; // @synthesize brushBelowView=_brushBelowView;
@property(retain, nonatomic) UIView *signatureView; // @synthesize signatureView=_signatureView;
@property(retain, nonatomic) UIImageView *sealImageView; // @synthesize sealImageView=_sealImageView;
@property(retain, nonatomic) UIView *areaMenuView; // @synthesize areaMenuView=_areaMenuView;
@property(retain, nonatomic) UIView *areaView; // @synthesize areaView=_areaView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletionBlock; // @synthesize dismissCompletionBlock=_dismissCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType areaDidEndMoveBlock; // @synthesize areaDidEndMoveBlock=_areaDidEndMoveBlock;
@property(nonatomic) struct CGRect boxBeginConstant; // @synthesize boxBeginConstant=_boxBeginConstant;
@property(nonatomic) struct CGPoint boxBeginPoint; // @synthesize boxBeginPoint=_boxBeginPoint;
@property(nonatomic) struct CGRect areaBeginFrame; // @synthesize areaBeginFrame=_areaBeginFrame;
@property(nonatomic) unsigned long long touchPosition; // @synthesize touchPosition=_touchPosition;
@property(nonatomic) struct CGSize viewSize; // @synthesize viewSize=_viewSize;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleTapGestureRecognizerEvent:(id)arg1;
- (void)handlePanGestureRecognizerEvent:(id)arg1;
- (void)handleDragMoving:(id)arg1 event:(id)arg2;
- (void)buttonClicked:(id)arg1;
- (void)showAreaMenuPopoverViewController;
- (void)showLog:(id)arg1;
- (id)brushValueInfoFromDocument;
- (long long)tagWithIndex:(long long)arg1;
- (struct CGRect)boxWithPoint:(struct CGPoint)arg1 constant:(struct CGRect)arg2;
- (unsigned long long)touchPositionWithPoint:(struct CGPoint)arg1 constant:(struct CGRect)arg2;
- (void)setBrushCanvasViewPropetyValue;
- (id)buttonWithIndex:(long long)arg1 title:(id)arg2 image:(id)arg3;
- (void)subviewOfBrushBelowView;
- (void)subviewOfNaviView:(id)arg1;
- (void)subviewOfSignatureView;
- (void)showAreaMenuView;
- (void)viewInitialization;
- (void)dataInitialization;
- (void)setAreaImage:(id)arg1;
- (void)setAreaBox:(struct CGRect)arg1;
- (void)setBrushCanvasBackgroundColor:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)areaDidEndMoveWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSeparatorLine:(_Bool)arg1;
- (void)setHandwritingBoxSize:(struct CGSize)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (id)initWithSize:(struct CGSize)arg1 mode:(long long)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

