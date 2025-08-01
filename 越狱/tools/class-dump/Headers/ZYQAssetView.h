//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ZYQTapAssetViewDelegate-Protocol.h"

@class NSString, UIImageView, ZYQAsset, ZYQTapAssetView, ZYQVideoTitleView;
@protocol ZYQAssetViewDelegate;

@interface ZYQAssetView : UIView <ZYQTapAssetViewDelegate>
{
    ZYQAsset *_asset;
    id <ZYQAssetViewDelegate> _delegate;
    UIImageView *_imageView;
    ZYQVideoTitleView *_videoTitle;
    ZYQTapAssetView *_tapAssetView;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) ZYQTapAssetView *tapAssetView; // @synthesize tapAssetView=_tapAssetView;
@property(retain, nonatomic) ZYQVideoTitleView *videoTitle; // @synthesize videoTitle=_videoTitle;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <ZYQAssetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ZYQAsset *asset; // @synthesize asset=_asset;
- (void)touchSelect:(_Bool)arg1;
- (_Bool)shouldTap:(_Bool)arg1;
- (void)bind:(id)arg1 selectionFilter:(id)arg2 isSeleced:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

