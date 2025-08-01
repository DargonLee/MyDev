//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImageView;

@interface QYSBluetoothSealImageView : UIScrollView <UIScrollViewDelegate>
{
    UIImageView *_imageView;
    CDUnknownBlockType _singleClick;
    CDUnknownBlockType _doubleClick;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType doubleClick; // @synthesize doubleClick=_doubleClick;
@property(copy, nonatomic) CDUnknownBlockType singleClick; // @synthesize singleClick=_singleClick;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void)scrollGestureAction:(id)arg1;
- (void)layoutSubviews;
- (void)scaleImage;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setOriginalImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

