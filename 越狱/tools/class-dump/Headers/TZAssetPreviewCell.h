//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class TZAssetModel;

@interface TZAssetPreviewCell : UICollectionViewCell
{
    TZAssetModel *_model;
    CDUnknownBlockType _singleTapGestureBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType singleTapGestureBlock; // @synthesize singleTapGestureBlock=_singleTapGestureBlock;
@property(retain, nonatomic) TZAssetModel *model; // @synthesize model=_model;
- (void)dealloc;
- (void)photoPreviewCollectionViewDidScroll;
- (void)configSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

