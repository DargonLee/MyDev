//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "IReadLifeCycleListener-Protocol.h"
#import "ROverlayViewProtocol-Protocol.h"
#import "RSignAdjustViewProtocol-Protocol.h"
#import "ReadDeviceOrientationWillChangeProtocol-Protocol.h"
#import "ReadTurnPageProtocol-Protocol.h"
#import "ReaderTextViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class LLCollectionView, LLPDFViewARC, LLScrollView, NSArray, NSMutableArray, NSString, ROverlayView, RSignAdjustView, RZoomScaleView, ReaderTextView, UIImageView, UIView, WSDrawManager, WSHandWriteInsertView, WSReaderManager, WSReaderViewController;
@protocol LLCollectionCellDelegate;

@interface LLCollectionCell : UICollectionViewCell <UIScrollViewDelegate, UIGestureRecognizerDelegate, ReadTurnPageProtocol, RSignAdjustViewProtocol, ReaderTextViewDelegate, ROverlayViewProtocol, ReadDeviceOrientationWillChangeProtocol, IReadLifeCycleListener>
{
    _Bool _isRotate;
    _Bool _isMoreWriteState;
    int _page;
    int _fromPage;
    int _indexPath;
    int _pdfIndex;
    LLPDFViewARC *_pdfView;
    LLScrollView *_scrollView;
    ROverlayView *_overlayView;
    LLCollectionView *_collectionView;
    NSArray *_pageAdjustViewArray;
    WSHandWriteInsertView *_insertView;
    WSDrawManager *_drawManager;
    WSReaderViewController *_reader;
    long long _state;
    double _minZoomScale;
    long long _orientation;
    RSignAdjustView *_selectedAdjustView;
    id <LLCollectionCellDelegate> _delegate;
    UIImageView *_thumbView;
    UIView *_middleView;
    LLPDFViewARC *_prePDFView;
    RZoomScaleView *_zoomScaleView;
    double _scale;
    double _maxZoomScale;
    NSArray *_pageDataModelArray;
    NSMutableArray *_photoModelArray;
    RSignAdjustView *_textAjustView;
    RSignAdjustView *_writeAjustView;
    ReaderTextView *_textView;
    WSReaderManager *_shareM;
    struct CGSize _willChangeToSize;
    struct CGSize _PDFSize;
    struct CGPoint _insertPoint;
    struct CGRect _adjustSignViewPDFViewScale;
}

+ (id)getCapturePointArrayWithString:(id)arg1;
+ (id)parseLineData:(id)arg1 ownerUid:(long long)arg2 pdfIndex:(int)arg3 pageIndex:(int)arg4;
+ (id)parseWriteTempletData:(id)arg1;
+ (id)loadSignDataFromSwpPath:(id)arg1 pdfIndex:(int)arg2;
+ (void)loadSignDataFromSwpPath:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (id)cellForCollection:(id)arg1 indexPath:(id)arg2 drawManager:(id)arg3 reader:(id)arg4;
- (void).cxx_destruct;
@property(nonatomic) int pdfIndex; // @synthesize pdfIndex=_pdfIndex;
@property(nonatomic) int indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak WSReaderManager *shareM; // @synthesize shareM=_shareM;
@property(nonatomic) struct CGPoint insertPoint; // @synthesize insertPoint=_insertPoint;
@property(retain, nonatomic) ReaderTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) _Bool isMoreWriteState; // @synthesize isMoreWriteState=_isMoreWriteState;
@property(retain, nonatomic) RSignAdjustView *writeAjustView; // @synthesize writeAjustView=_writeAjustView;
@property(retain, nonatomic) RSignAdjustView *textAjustView; // @synthesize textAjustView=_textAjustView;
@property(retain, nonatomic) NSMutableArray *photoModelArray; // @synthesize photoModelArray=_photoModelArray;
@property(retain, nonatomic) NSArray *pageDataModelArray; // @synthesize pageDataModelArray=_pageDataModelArray;
@property(nonatomic) struct CGSize PDFSize; // @synthesize PDFSize=_PDFSize;
@property(nonatomic) struct CGRect adjustSignViewPDFViewScale; // @synthesize adjustSignViewPDFViewScale=_adjustSignViewPDFViewScale;
@property(nonatomic) double maxZoomScale; // @synthesize maxZoomScale=_maxZoomScale;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize willChangeToSize; // @synthesize willChangeToSize=_willChangeToSize;
@property(retain, nonatomic) RZoomScaleView *zoomScaleView; // @synthesize zoomScaleView=_zoomScaleView;
@property(nonatomic) __weak LLPDFViewARC *prePDFView; // @synthesize prePDFView=_prePDFView;
@property(nonatomic) __weak UIView *middleView; // @synthesize middleView=_middleView;
@property(retain, nonatomic) UIImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) __weak id <LLCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) RSignAdjustView *selectedAdjustView; // @synthesize selectedAdjustView=_selectedAdjustView;
@property(nonatomic) int fromPage; // @synthesize fromPage=_fromPage;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool isRotate; // @synthesize isRotate=_isRotate;
@property(nonatomic) double minZoomScale; // @synthesize minZoomScale=_minZoomScale;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak WSReaderViewController *reader; // @synthesize reader=_reader;
@property(nonatomic) __weak WSDrawManager *drawManager; // @synthesize drawManager=_drawManager;
@property(nonatomic) int page; // @synthesize page=_page;
@property(retain, nonatomic) WSHandWriteInsertView *insertView; // @synthesize insertView=_insertView;
@property(retain, nonatomic) NSArray *pageAdjustViewArray; // @synthesize pageAdjustViewArray=_pageAdjustViewArray;
@property(nonatomic) __weak LLCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) ROverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) LLScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) LLPDFViewARC *pdfView; // @synthesize pdfView=_pdfView;
- (void)initSignAdjustViewWith:(id)arg1 Page:(int)arg2 pdfIndex:(int)arg3;
- (void)initTextAdjustViewWith:(id)arg1 Page:(int)arg2 pdfIndex:(int)arg3;
- (void)initPhotoAdjustViewWith:(id)arg1 Page:(int)arg2 pdfIndex:(int)arg3;
- (void)reloadCellUIWithPage:(int)arg1 pdfIndex:(int)arg2;
- (id)fixOrientation:(id)arg1;
- (id)HEXString:(struct CGColor *)arg1;
- (int)readerPageIndex;
- (_Bool)haveUnsavedDataOnPage:(int)arg1;
- (struct CGRect)newMiddleViewFrameWithScale:(double)arg1 widthUntis:(double)arg2 pdfHWScale:(double)arg3;
- (void)configuerMinMaxScaleWithFatherSize:(struct CGSize)arg1 pageIndex:(int)arg2 drawManager:(id)arg3;
- (void)recreatePDFViewWithNewMiddleViewFrame:(struct CGRect)arg1;
- (void)loadPDF;
- (void)loadCurrentPageWriteData;
- (void)loadPDFAndWriteData;
- (void)resetPropertiesWithToPage:(int)arg1 fromPage:(int)arg2 reader:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)removePrePDFView;
- (void)refreshPDFThumbView;
- (void)middleViewFamilyFrameSetAndOrganizationWithState:(long long)arg1;
- (void)asettPageScroll:(_Bool)arg1;
- (void)gestureHandlerWithState:(long long)arg1;
- (void)zoomStepThreeMiddleViewFamilyContentRefreshWithNewMiddleViewFrame:(struct CGRect)arg1 pdfSize:(struct CGSize)arg2;
- (void)zoomStepTwoMiddleViewFamilyFrameSetAndOrganizationWithNewMiddleViewFrame:(struct CGRect)arg1;
- (struct CGRect)zoomStepOneConfigScrollViewPropertyWithScale:(double)arg1;
- (void)turnPageStepThreeMiddleViewFamilyContentRefreshWithNewMiddleViewFrame:(struct CGRect)arg1 pdfSize:(struct CGSize)arg2 state:(long long)arg3;
- (void)turnPageStepTwoMiddleViewFamilyFrameSetAndOrganizationWithNewMiddleViewFrame:(struct CGRect)arg1 pdfSize:(struct CGSize)arg2 withIndex:(int)arg3;
- (struct CGRect)turnPageStepOneConfigScrollViewPropertyWithPageIndex:(int)arg1 fromPageIndex:(int)arg2;
- (struct CGSize)getOtherPagePdfViewSize:(id)arg1;
- (struct CGSize)getCurrentPagePdfViewSize:(id)arg1;
- (void)cellChangeSizeStepThreeMiddleViewFamilyContentRefreshWithNewMiddleViewFrame:(struct CGRect)arg1 pdfSize:(struct CGSize)arg2;
- (void)cellChangeSizeStepTwoMiddleViewFamilyFrameSetAndOrganizationWithNewMiddleViewFrame:(struct CGRect)arg1 pdfSize:(struct CGSize)arg2 templetFrameScale:(id)arg3;
- (struct CGRect)cellChangeSizeStepOneConfigScrollViewPropertyWithSize:(struct CGSize)arg1 scale:(double)arg2 contentOffSetScale:(struct CGPoint)arg3;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleTwoFingerTap:(id)arg1;
- (void)onDeviceOrientationDidChangeCell:(id)arg1;
- (void)onDeviceOrientationWillChangeToSize:(struct CGSize)arg1;
- (void)onDeviceOrientationWillChangeTo:(long long)arg1 cell:(id)arg2;
- (void)resetAjustViewState;
- (void)endTurnPage;
- (void)beginTurnPage;
- (void)readDestroy;
- (void)readStarted;
- (void)clearImageDeep:(_Bool)arg1;
- (void)refreshContent;
- (void)clearTempletData;
- (id)getDrawManagerWithFilePath:(id)arg1 passWord:(id)arg2;
- (id)getSignTempletJSONData:(id)arg1;
- (id)dealWithWriteData:(id)arg1 pageNumber:(int)arg2 pdfIndex:(int)arg3;
- (void)addSortedUserData:(id)arg1 to:(id)arg2 user:(id)arg3 page:(id)arg4 type:(int)arg5;
- (id)archiveSignDataWithpPdfIndex:(int)arg1;
- (void)archiveSignDataComplete:(CDUnknownBlockType)arg1;
- (void)haveWrite:(_Bool)arg1;
- (void)editTextAjustView:(id)arg1;
- (void)deleteAjustView:(id)arg1;
- (void)endMoveAdjustView:(id)arg1;
- (void)beginMoveAdjustView:(id)arg1;
- (void)becomeSelected:(_Bool)arg1 withAdjustView:(id)arg2;
- (void)getDateFrame:(struct CGRect)arg1;
- (void)WSHandWriteViewClose;
- (void)readerTextViewDidEndEditing:(id)arg1;
- (void)readerTextViewDidBeginEditing:(id)arg1;
- (struct CGRect)convertOrignalInsertPoint:(struct CGRect)arg1;
- (struct CGRect)getAdjustViewCenterRect:(struct CGRect)arg1;
- (void)showWriteAdjustView:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)changeDatePattern;
- (void)showDateAdjustView:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)showTextAdjustView:(id)arg1 withFrame:(struct CGRect)arg2 color:(id)arg3 alignmentType:(long long)arg4;
- (void)setFittableLabelTextContents:(id)arg1 color:(id)arg2 textAlignment:(long long)arg3;
- (void)showInsertView:(id)arg1;
- (void)showTextView:(id)arg1;
- (void)insertTextToCenter:(id)arg1 color:(id)arg2 alignmentType:(long long)arg3;
- (void)insertCurrentDateWithFrame:(struct CGRect)arg1;
- (void)insertCurrentDate:(struct CGPoint)arg1;
- (void)insertHandWrite:(struct CGPoint)arg1;
- (void)insertText:(struct CGPoint)arg1;
- (void)insertPhoto:(id)arg1;
- (void)updateAdjustViewModelWithSubId:(id)arg1 text:(id)arg2 currentPage:(int)arg3 pdfIndex:(int)arg4;
- (void)deleteAdjustViewModel:(id)arg1 currentPage:(int)arg2 pdfIndex:(int)arg3;
- (void)deleteAdjustViewModelWithSubId:(id)arg1 currentPage:(int)arg2 pdfIndex:(int)arg3;
- (void)unSelectAllAdjustViewModelWithcurrentPage:(int)arg1 pdfIndex:(int)arg2;
- (void)privateSaveDataModelToArrayDict:(id)arg1 currentPage:(int)arg2 pdfIndex:(int)arg3;
- (void)insertSignTemplet:(id)arg1 location:(struct CGPoint)arg2;
- (void)commitInitState:(long long)arg1;
- (void)changeState:(long long)arg1;
- (void)deviceOrientationChangeWithPage:(int)arg1;
- (void)willDisplay:(int)arg1 fromPage:(int)arg2 reader:(id)arg3;
- (void)turnPageTo:(int)arg1 fromPage:(int)arg2 reader:(id)arg3;
- (void)commitUI;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

