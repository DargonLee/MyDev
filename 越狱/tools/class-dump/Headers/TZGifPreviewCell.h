//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TZAssetPreviewCell.h"

@class TZPhotoPreviewView;

@interface TZGifPreviewCell : TZAssetPreviewCell
{
    TZPhotoPreviewView *_previewView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TZPhotoPreviewView *previewView; // @synthesize previewView=_previewView;
- (void)signleTapAction;
- (void)layoutSubviews;
- (void)setModel:(id)arg1;
- (void)configPreviewView;
- (void)configSubviews;

@end

