//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ReaderBottomToolBarDelegate-Protocol.h"
#import "ReaderThickAndColorPanelViewDelegate-Protocol.h"
#import "ReaderWriteStateBottomViewDelegate-Protocol.h"
#import "WSVerticalPDFViewDelegate-Protocol.h"

@class NSString, ReaderBottomToolBar, ReaderThickAndColorPanelView, ReaderWriteStateBottomView, UILabel, WSVerticalPDFView;

@interface WSVCutomView : UIView <WSVerticalPDFViewDelegate, ReaderBottomToolBarDelegate, ReaderWriteStateBottomViewDelegate, ReaderThickAndColorPanelViewDelegate>
{
    UILabel *_mPageNumberView;
    WSVerticalPDFView *_mRootPdfView;
    ReaderBottomToolBar *_mReaderBottomToolBar;
    ReaderWriteStateBottomView *_mWriteStateToolbar;
    ReaderThickAndColorPanelView *_mThickColorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ReaderThickAndColorPanelView *mThickColorView; // @synthesize mThickColorView=_mThickColorView;
@property(retain, nonatomic) ReaderWriteStateBottomView *mWriteStateToolbar; // @synthesize mWriteStateToolbar=_mWriteStateToolbar;
@property(retain, nonatomic) ReaderBottomToolBar *mReaderBottomToolBar; // @synthesize mReaderBottomToolBar=_mReaderBottomToolBar;
@property(retain, nonatomic) WSVerticalPDFView *mRootPdfView; // @synthesize mRootPdfView=_mRootPdfView;
@property(retain, nonatomic) UILabel *mPageNumberView; // @synthesize mPageNumberView=_mPageNumberView;
- (void)saveButtonClickAction;
- (void)insertPictureButtonClickAction;
- (void)handWriteButtonClickAction;
- (void)goBackClickAction;
- (void)dateButtonClickAction;
- (void)colorPanelCollectionViewDidSelect:(long long)arg1;
- (void)thickSliderValueChanged:(long long)arg1;
- (id)viewController;
- (void)clearButtonClickAction;
- (void)writeButtonClickAction;
- (void)eraserButtonClickAction;
- (void)confirmButtonClickAction;
- (void)moreButtonClickAction:(id)arg1;
- (void)choosePictureClickAction;
- (void)noteButtonClickAction;
- (void)textButtonClickAction;
- (void)signButtonClickAction;
- (void)onHandWriteAt:(int)arg1;
- (void)onPageIndexChanged:(int)arg1;
- (id)setNumberLabelAttributedTextWithPage:(int)arg1;
- (void)initFPSLabel;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 filePath:(id)arg2 password:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

