//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JRCollectionViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class JRCollectionViewTitleModel, NSArray, NSIndexPath, NSString, UICollectionView, UIColor, UIImage;

@interface JRStickerDisplayView : UIView <JRCollectionViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _stopAnimation;
    CDUnknownBlockType _didSelectBlock;
    NSIndexPath *_selectIndexPath;
    NSArray *_titles;
    NSArray *_contents;
    JRCollectionViewTitleModel *_selectTitleMoel;
    UICollectionView *_collectionView;
    UICollectionView *_titleCollectionView;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UICollectionView *titleCollectionView; // @synthesize titleCollectionView=_titleCollectionView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool stopAnimation; // @synthesize stopAnimation=_stopAnimation;
@property(retain, nonatomic) JRCollectionViewTitleModel *selectTitleMoel; // @synthesize selectTitleMoel=_selectTitleMoel;
@property(readonly, nonatomic) NSArray *contents; // @synthesize contents=_contents;
@property(readonly, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath=_selectIndexPath;
@property(copy, nonatomic) CDUnknownBlockType didSelectBlock; // @synthesize didSelectBlock=_didSelectBlock;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSelectData:(id)arg1 thumbnailImage:(id)arg2 index:(long long)arg3;
- (void)_customLayoutSubviews;
- (void)_changeTitleAnimotionProgress:(double)arg1;
- (void)_changeTitle:(id)arg1;
- (void)_initSubViews;
@property(retain, nonatomic) id cacheData;
- (void)setTitles:(id)arg1 contents:(id)arg2;
@property(retain, nonatomic) UIImage *failureImage;
@property(retain, nonatomic) UIImage *normalImage;
@property(nonatomic) double itemMargin;
@property(nonatomic) struct CGSize itemSize;
@property(retain, nonatomic) UIColor *normalTitleColor;
@property(retain, nonatomic) UIColor *selectTitleColor;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

