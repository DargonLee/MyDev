//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JRBaseCollectionViewCell.h"

#import "LFEditCollectionViewDelegate-Protocol.h"

@class LFEditCollectionView, NSIndexPath, NSString;
@protocol JRCollectionViewDelegate;

@interface JRCollectionViewCell : JRBaseCollectionViewCell <LFEditCollectionViewDelegate>
{
    id <JRCollectionViewDelegate> _delegate;
    LFEditCollectionView *_collectionView;
    NSIndexPath *_longPressIndexPath;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *longPressIndexPath; // @synthesize longPressIndexPath=_longPressIndexPath;
@property(retain, nonatomic) LFEditCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <JRCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)_longpress:(id)arg1;
- (void)_showDisplayView:(id)arg1;
- (void)_removeDisplayView;
- (void)_initSubView;
- (void)setCellData:(id)arg1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

