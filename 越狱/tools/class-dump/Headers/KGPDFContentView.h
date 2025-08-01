//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImageView, UIScrollView;
@protocol KGPDFContentViewDelegate;

@interface KGPDFContentView : UIView <UIScrollViewDelegate>
{
    long long _pageIndex;
    UIScrollView *_scrollView;
    id <KGPDFContentViewDelegate> _delegate;
    long long _interfaceOrientation;
    struct KGPDFDocument *_document;
    unsigned long long _pageCount;
    long long _pageRotation;
    UIImageView *_pageImageView;
    UIImageView *_pageTileImageView;
    struct CGPoint _didEndZoomOffset;
    struct CGRect _pageBounds;
}

@property(retain, nonatomic) UIImageView *pageTileImageView; // @synthesize pageTileImageView=_pageTileImageView;
@property(retain, nonatomic) UIImageView *pageImageView; // @synthesize pageImageView=_pageImageView;
@property(nonatomic) struct CGPoint didEndZoomOffset; // @synthesize didEndZoomOffset=_didEndZoomOffset;
@property(nonatomic) long long pageRotation; // @synthesize pageRotation=_pageRotation;
@property(nonatomic) unsigned long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) struct KGPDFDocument *document; // @synthesize document=_document;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) __weak id <KGPDFContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGRect pageBounds; // @synthesize pageBounds=_pageBounds;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)loadDelegateWithMovedInfoForLoadTile:(_Bool)arg1;
- (struct CGRect)pageTileRectWithBoundsSize:(struct CGSize)arg1;
- (id)movedInfoWithSize:(struct CGSize)arg1 offset:(struct CGPoint)arg2 scale:(double)arg3 loadTile:(_Bool)arg4;
- (void)updatePageImageViewConstraintWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)refreshView;
- (long long)statusBarOrientation;
- (struct CGSize)fitSizeFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2 scale:(double)arg3;
- (void)loadPDFTile;
- (void)loadPDFPage;
- (struct CGPoint)touchPDFPointFromTouchPoint:(struct CGPoint)arg1 inversion:(_Bool)arg2 scaleSize:(struct CGSize *)arg3 distanceSize:(struct CGSize *)arg4;
- (void)movePageWithZoomScale:(double)arg1 offset:(struct CGPoint)arg2 isLoadTile:(_Bool)arg3;
- (void)resetZoomWithAnimated:(_Bool)arg1;
- (void)reloadPage;
- (struct CGPoint)pageImageOffset;
- (struct CGSize)pageImageSize;
- (id)initWithFrame:(struct CGRect)arg1 document:(struct KGPDFDocument *)arg2 pageIndex:(unsigned long long)arg3;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

