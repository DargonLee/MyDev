//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSString, UICollectionView, UICollectionViewLayout;
@protocol LFEditCollectionViewDelegate;

@interface LFEditCollectionView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSArray *_dataSources;
    UICollectionViewLayout *_collectionViewLayout;
    id <LFEditCollectionViewDelegate> _delegate;
    UICollectionView *_collectionView;
    CDUnknownBlockType _dequeueReusableCellBlock;
    CDUnknownBlockType _cellConfigureBlock;
    CDUnknownBlockType _didSelectItemAtIndexPathBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didSelectItemAtIndexPathBlock; // @synthesize didSelectItemAtIndexPathBlock=_didSelectItemAtIndexPathBlock;
@property(copy, nonatomic) CDUnknownBlockType cellConfigureBlock; // @synthesize cellConfigureBlock=_cellConfigureBlock;
@property(copy, nonatomic) CDUnknownBlockType dequeueReusableCellBlock; // @synthesize dequeueReusableCellBlock=_dequeueReusableCellBlock;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <LFEditCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) NSArray *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) struct UIEdgeInsets sectionInset;
@property(nonatomic) struct CGSize footerReferenceSize;
@property(nonatomic) struct CGSize headerReferenceSize;
@property(nonatomic) long long scrollDirection;
@property(nonatomic) struct CGSize estimatedItemSize;
@property(nonatomic) struct CGSize itemSize;
@property(nonatomic) double minimumInteritemSpacing;
@property(nonatomic) double minimumLineSpacing;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (void)invalidateLayout;
- (id)indexPathsForVisibleItems;
- (id)visibleCells;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reloadData;
- (id)cellForItemAtIndexPath:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
@property(nonatomic, getter=isPrefetchingEnabled) _Bool prefetchingEnabled;
@property(nonatomic) _Bool showsHorizontalScrollIndicator;
@property(nonatomic) _Bool showsVerticalScrollIndicator;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(nonatomic) struct CGSize contentSize;
@property(nonatomic) struct CGPoint contentOffset;
@property(nonatomic) _Bool bounces;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)callbackCellIdentifier:(CDUnknownBlockType)arg1 configureCell:(CDUnknownBlockType)arg2 didSelectItemAtIndexPath:(CDUnknownBlockType)arg3;
- (void)UI_init;
- (void)customInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

