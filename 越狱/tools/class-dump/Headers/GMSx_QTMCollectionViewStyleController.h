//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_QTMCollectionView, NSMutableArray, NSMutableDictionary, NSMutableSet, UIColor;
@protocol QTMCollectionViewStyleDelegate;

@interface GMSx_QTMCollectionViewStyleController : NSObject
{
    _Bool _shouldInvalidateLayout;
    _Bool _usesDarkTheme;
    _Bool _allowsItemInlay;
    _Bool _allowsMultipleItemInlays;
    _Bool _inlaysItemWhenEditing;
    _Bool _insetsContentViewsToSafeArea;
    _Bool _shouldAnimateCellsOnAppearance;
    _Bool _willAnimateCellsOnAppearance;
    GMSx_QTMCollectionView *_collectionView;
    id <QTMCollectionViewStyleDelegate> _delegate;
    unsigned long long _sectionItemStyle;
    unsigned long long _sectionHeaderStyle;
    unsigned long long _sectionFooterStyle;
    unsigned long long _accessoryType;
    unsigned long long _headerAccessoryType;
    unsigned long long _footerAccessoryType;
    unsigned long long _cellDividerStyle;
    unsigned long long _cellDividerStyleInsets;
    UIColor *_collectionViewBackgroundColor;
    unsigned long long _cellStyle;
    unsigned long long _cellLayoutType;
    long long _gridColumnCount;
    double _gridPadding;
    double _animateCellsOnAppearancePadding;
    double _animateCellsOnAppearanceDuration;
    UIColor *_innerBackgroundColor;
    NSMutableArray *_highlightedInnerGradientColors;
    UIColor *_borderColor;
    double _borderRadius;
    double _borderWidth;
    UIColor *_shadowColor;
    double _shadowWidth;
    UIColor *_cellDividerColor;
    double _cellDividerHeight;
    unsigned long long _inkTouchStyle;
    NSMutableDictionary *_cellBackgroundCaches;
    NSMutableSet *_inlaidIndexPathSet;
    struct CGSize _shadowOffset;
    struct UIEdgeInsets _accessoryInsets;
    struct UIEdgeInsets _cellDividerInsets;
}

+ (void)applyDividerPathToContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 isCard:(_Bool)arg3 dividerHeight:(double)arg4 dividerInsets:(struct UIEdgeInsets)arg5;
+ (void)applyBorderPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 isTop:(_Bool)arg3 isBottom:(_Bool)arg4 isCard:(_Bool)arg5 borderRadius:(double)arg6;
+ (void)applyBackgroundPathToContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2 isTop:(_Bool)arg3 isBottom:(_Bool)arg4 isCard:(_Bool)arg5 borderRadius:(double)arg6;
+ (id)resizableImage:(id)arg1;
+ (double)minPixelOffset;
+ (id)dividerLineWithStyleController:(id)arg1 cellBounds:(struct CGRect)arg2 sectionOrdinalPosition:(unsigned long long)arg3 atIndexPath:(id)arg4 elementKind:(unsigned long long)arg5;
+ (id)cellBackgroundImageWithStyleController:(id)arg1 sectionOrdinalPosition:(unsigned long long)arg2 atIndexPath:(id)arg3 elementKind:(unsigned long long)arg4;
+ (id)cellBackgroundCache;
+ (unsigned long long)backgroundCacheKeyForCardStyle:(_Bool)arg1 isGroupedStyle:(_Bool)arg2 isTop:(_Bool)arg3 isBottom:(_Bool)arg4 isHighlighted:(_Bool)arg5;
@property(retain, nonatomic) NSMutableSet *inlaidIndexPathSet; // @synthesize inlaidIndexPathSet=_inlaidIndexPathSet;
@property(readonly, nonatomic) NSMutableDictionary *cellBackgroundCaches; // @synthesize cellBackgroundCaches=_cellBackgroundCaches;
@property(nonatomic) unsigned long long inkTouchStyle; // @synthesize inkTouchStyle=_inkTouchStyle;
@property(nonatomic) double cellDividerHeight; // @synthesize cellDividerHeight=_cellDividerHeight;
@property(retain, nonatomic) UIColor *cellDividerColor; // @synthesize cellDividerColor=_cellDividerColor;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowWidth; // @synthesize shadowWidth=_shadowWidth;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double borderRadius; // @synthesize borderRadius=_borderRadius;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) NSMutableArray *highlightedInnerGradientColors; // @synthesize highlightedInnerGradientColors=_highlightedInnerGradientColors;
@property(retain, nonatomic) UIColor *innerBackgroundColor; // @synthesize innerBackgroundColor=_innerBackgroundColor;
@property(readonly, nonatomic) double animateCellsOnAppearanceDuration; // @synthesize animateCellsOnAppearanceDuration=_animateCellsOnAppearanceDuration;
@property(readonly, nonatomic) double animateCellsOnAppearancePadding; // @synthesize animateCellsOnAppearancePadding=_animateCellsOnAppearancePadding;
@property(readonly, nonatomic) _Bool willAnimateCellsOnAppearance; // @synthesize willAnimateCellsOnAppearance=_willAnimateCellsOnAppearance;
@property(nonatomic) _Bool shouldAnimateCellsOnAppearance; // @synthesize shouldAnimateCellsOnAppearance=_shouldAnimateCellsOnAppearance;
@property(nonatomic) _Bool insetsContentViewsToSafeArea; // @synthesize insetsContentViewsToSafeArea=_insetsContentViewsToSafeArea;
@property(nonatomic) _Bool inlaysItemWhenEditing; // @synthesize inlaysItemWhenEditing=_inlaysItemWhenEditing;
@property(nonatomic) _Bool allowsMultipleItemInlays; // @synthesize allowsMultipleItemInlays=_allowsMultipleItemInlays;
@property(nonatomic) _Bool allowsItemInlay; // @synthesize allowsItemInlay=_allowsItemInlay;
@property(nonatomic) double gridPadding; // @synthesize gridPadding=_gridPadding;
@property(nonatomic) long long gridColumnCount; // @synthesize gridColumnCount=_gridColumnCount;
@property(nonatomic) unsigned long long cellLayoutType; // @synthesize cellLayoutType=_cellLayoutType;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) struct UIEdgeInsets cellDividerInsets; // @synthesize cellDividerInsets=_cellDividerInsets;
@property(retain, nonatomic) UIColor *collectionViewBackgroundColor; // @synthesize collectionViewBackgroundColor=_collectionViewBackgroundColor;
@property(nonatomic) unsigned long long cellDividerStyleInsets; // @synthesize cellDividerStyleInsets=_cellDividerStyleInsets;
@property(nonatomic) unsigned long long cellDividerStyle; // @synthesize cellDividerStyle=_cellDividerStyle;
@property(nonatomic) struct UIEdgeInsets accessoryInsets; // @synthesize accessoryInsets=_accessoryInsets;
@property(nonatomic) unsigned long long footerAccessoryType; // @synthesize footerAccessoryType=_footerAccessoryType;
@property(nonatomic) unsigned long long headerAccessoryType; // @synthesize headerAccessoryType=_headerAccessoryType;
@property(nonatomic) unsigned long long accessoryType; // @synthesize accessoryType=_accessoryType;
@property(nonatomic) unsigned long long sectionFooterStyle; // @synthesize sectionFooterStyle=_sectionFooterStyle;
@property(nonatomic) unsigned long long sectionHeaderStyle; // @synthesize sectionHeaderStyle=_sectionHeaderStyle;
@property(nonatomic) unsigned long long sectionItemStyle; // @synthesize sectionItemStyle=_sectionItemStyle;
@property(nonatomic) _Bool usesDarkTheme; // @synthesize usesDarkTheme=_usesDarkTheme;
@property(nonatomic) __weak id <QTMCollectionViewStyleDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak GMSx_QTMCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) _Bool shouldInvalidateLayout; // @synthesize shouldInvalidateLayout=_shouldInvalidateLayout;
- (void).cxx_destruct;
- (_Bool)allowDividerAtIndexPath:(id)arg1 sectionOrdinalPosition:(unsigned long long)arg2 elementKind:(unsigned long long)arg3;
- (_Bool)drawShadowForCellWithIsCardStye:(_Bool)arg1 isGroupStyle:(_Bool)arg2 isHighlighted:(_Bool)arg3;
- (_Bool)shouldInvalidateLayoutForStyleChange;
- (void)invalidateLayoutForStyleChange;
- (void)updateLayoutAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)innerBackgroundColorAtIndexPath:(id)arg1 isSectionHeader:(_Bool)arg2 isSectionFooter:(_Bool)arg3;
- (void)updateAnimated:(_Bool)arg1;
- (void)resetIndexPathsForInlaidItems;
- (void)removeInlayFromAllItemsAnimated:(_Bool)arg1;
- (void)applyInlayToAllItemsAnimated:(_Bool)arg1;
- (void)removeInlayFromItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)applyInlayToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (_Bool)isItemInlaidAtIndexPath:(id)arg1;
- (id)indexPathsForInlaidItems;
- (void)setCellStyle:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)cellDividerStyleAtSectionIndex:(long long)arg1;
- (_Bool)shouldShowGridBackgroundAtSection:(long long)arg1;
- (_Bool)isCellDividerVisibleAtSectionIndex:(long long)arg1;
- (_Bool)isGroupedStyleAtSectionIndex:(long long)arg1;
- (_Bool)isCardStyleAtSectionIndex:(long long)arg1;
- (struct UIEdgeInsets)footerAccessoryInsetsAtSection:(unsigned long long)arg1;
- (struct UIEdgeInsets)headerAccessoryInsetsAtSection:(unsigned long long)arg1;
- (struct UIEdgeInsets)accessoryInsetsAtIndexPath:(id)arg1;
- (struct UIEdgeInsets)safeAreaAdjustedInsetsForInsets:(struct UIEdgeInsets)arg1;
- (unsigned long long)footerAccessoryTypeAtSection:(long long)arg1;
- (unsigned long long)headerAccessoryTypeAtSection:(long long)arg1;
- (unsigned long long)accessoryTypeAtIndexPath:(id)arg1;
- (unsigned long long)sectionItemStyleAtIndexPath:(id)arg1;
- (unsigned long long)sectionFooterStyleAtSection:(long long)arg1;
- (unsigned long long)sectionHeaderStyleAtSection:(long long)arg1;
- (struct UIEdgeInsets)cellDividerInsetsAtSectionIndex:(long long)arg1;
- (struct UIEdgeInsets)edgeInsetsForCellDividerStyleInsets:(unsigned long long)arg1;
- (unsigned long long)cellDividerStyleInsetsWithDelegateOverrideForSection:(long long)arg1;
- (double)cellWidthAtSectionIndex:(long long)arg1;
- (struct UIEdgeInsets)insetsAtSectionIndex:(long long)arg1;
- (struct UIEdgeInsets)backgroundImageViewOutsetsForCellWithAttribute:(id)arg1;
- (struct UIEdgeInsets)contentViewInsetsForCellWithAttribute:(id)arg1;
- (void)clearBackgroundCaches;
- (void)clearCaches;
- (void)beginCellAppearanceAnimation;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCollectionView:(id)arg1;

@end

