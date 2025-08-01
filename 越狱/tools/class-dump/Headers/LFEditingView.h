//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LFScrollView.h"

#import "LFClippingViewDelegate-Protocol.h"
#import "LFEditingProtocol-Protocol.h"
#import "LFGridViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class LFClippingView, LFGridView, NSDictionary, NSString, UIImage, UILabel, UIView;
@protocol LFEditingViewDelegate, LFPhotoEditDelegate;

@interface LFEditingView : LFScrollView <UIScrollViewDelegate, LFClippingViewDelegate, LFGridViewDelegate, LFEditingProtocol>
{
    _Bool _clipping;
    _Bool _fixedAspectRatio;
    UIImage *_image;
    id <LFEditingViewDelegate> _clippingDelegate;
    unsigned long long _defaultAspectRatioIndex;
    LFClippingView *_clippingView;
    LFGridView *_gridView;
    UIView *_clipZoomView;
    UILabel *_imagePixel;
    double _editToolbarDefaultHeight;
    CDUnknownBlockType _maskViewBlock;
    unsigned long long _editedOperation;
    double _defaultMaximumZoomScale;
    long long _onceDefaultAspectRatioIndex;
    unsigned long long _old_aspectRatio;
    struct CGSize _clippingMinSize;
    struct CGSize _referenceSize;
    struct CGSize _imageSize;
    struct CGRect _clippingMaxRect;
    struct CGRect _clippingRect;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long old_aspectRatio; // @synthesize old_aspectRatio=_old_aspectRatio;
@property(nonatomic) long long onceDefaultAspectRatioIndex; // @synthesize onceDefaultAspectRatioIndex=_onceDefaultAspectRatioIndex;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) double defaultMaximumZoomScale; // @synthesize defaultMaximumZoomScale=_defaultMaximumZoomScale;
@property(nonatomic) unsigned long long editedOperation; // @synthesize editedOperation=_editedOperation;
@property(copy, nonatomic) CDUnknownBlockType maskViewBlock; // @synthesize maskViewBlock=_maskViewBlock;
@property(nonatomic) double editToolbarDefaultHeight; // @synthesize editToolbarDefaultHeight=_editToolbarDefaultHeight;
@property(nonatomic) struct CGSize referenceSize; // @synthesize referenceSize=_referenceSize;
@property(nonatomic) __weak UILabel *imagePixel; // @synthesize imagePixel=_imagePixel;
@property(nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property(nonatomic) __weak UIView *clipZoomView; // @synthesize clipZoomView=_clipZoomView;
@property(nonatomic) __weak LFGridView *gridView; // @synthesize gridView=_gridView;
@property(nonatomic) __weak LFClippingView *clippingView; // @synthesize clippingView=_clippingView;
@property(nonatomic) _Bool fixedAspectRatio; // @synthesize fixedAspectRatio=_fixedAspectRatio;
@property(nonatomic) unsigned long long defaultAspectRatioIndex; // @synthesize defaultAspectRatioIndex=_defaultAspectRatioIndex;
@property(nonatomic, getter=isClipping) _Bool clipping; // @synthesize clipping=_clipping;
@property(nonatomic) struct CGRect clippingMaxRect; // @synthesize clippingMaxRect=_clippingMaxRect;
@property(nonatomic) struct CGSize clippingMinSize; // @synthesize clippingMinSize=_clippingMinSize;
@property(nonatomic) __weak id <LFEditingViewDelegate> clippingDelegate; // @synthesize clippingDelegate=_clippingDelegate;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSDictionary *photoEditData;
- (void)updateImagePixelText;
- (void)fixedLongImage;
- (void)setSubViewData;
- (void)resetContentSize;
- (void)refreshImageZoomViewCenter;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;
- (_Bool)touchesShouldBegin:(id)arg1 withEvent:(id)arg2 inContentView:(id)arg3;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)lf_gridViewDidAspectRatio:(id)arg1;
- (void)lf_gridViewDidEndResizing:(id)arg1;
- (void)lf_gridViewDidResizing:(id)arg1;
- (void)lf_gridViewDidBeginResizing:(id)arg1;
- (void)lf_clippingViewDidEndDecelerating:(id)arg1;
- (void)lf_clippingViewWillBeginDragging:(id)arg1;
- (void)lf_clippingViewDidEndZooming:(id)arg1;
- (void)lf_clippingViewDidZoom:(id)arg1;
- (CDUnknownBlockType)lf_clippingViewWillBeginZooming:(id)arg1;
- (void)createEditImage:(CDUnknownBlockType)arg1;
- (void)supplementHandle;
- (unsigned long long)aspectRatioIndex;
- (id)aspectRatioDescs;
- (void)setAspectRatioIndex:(unsigned long long)arg1;
- (void)rotate;
- (_Bool)canReset;
- (void)reset;
- (void)cancel;
- (void)cancelClipping:(_Bool)arg1;
- (void)setClipping:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setImage:(id)arg1 durations:(id)arg2;
- (struct CGRect)refer_clippingRect;
- (struct UIEdgeInsets)refer_clippingInsets;
- (void)dealloc;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool drawCanUndo;
@property(nonatomic) _Bool drawEnable;
@property(nonatomic) __weak id <LFPhotoEditDelegate> editDelegate;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isDrawing;
@property(readonly, nonatomic) _Bool isSplashing;
@property(nonatomic) double screenScale;
@property(readonly, nonatomic) _Bool splashCanUndo;
@property(nonatomic) _Bool splashEnable;
@property(nonatomic) unsigned long long splashStateType;
@property(readonly, nonatomic) _Bool stickerEnable;
@property(nonatomic) double stickerMaxScale;
@property(nonatomic) double stickerMinScale;
@property(readonly) Class superclass;

@end

