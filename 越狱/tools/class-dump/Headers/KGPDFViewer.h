//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "iAppPDFViewDelegate-Protocol.h"

@class AVAudioPlayer, NSString, UIButton, UIDocumentInteractionController, UILabel, UIView, iAppPDFView;

@interface KGPDFViewer : UIViewController <iAppPDFViewDelegate, AVAudioPlayerDelegate>
{
    _Bool _isLocalFile;
    NSString *_filePath;
    CDUnknownBlockType _savePDFBlock;
    CDUnknownBlockType _closePDFBlock;
    UIView *_navigationView;
    UILabel *_pageLabel;
    UIButton *_signButton;
    UIView *_handwritingToolView;
    UIView *_annotationToolView;
    iAppPDFView *_pdfView;
    AVAudioPlayer *_audioPlayer;
    unsigned long long _currentPageIndex;
    UIDocumentInteractionController *_shareController;
    UIButton *_lastPageButton;
    UIButton *_nextPageButton;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *nextPageButton; // @synthesize nextPageButton=_nextPageButton;
@property(nonatomic) __weak UIButton *lastPageButton; // @synthesize lastPageButton=_lastPageButton;
@property(retain, nonatomic) UIDocumentInteractionController *shareController; // @synthesize shareController=_shareController;
@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) AVAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak iAppPDFView *pdfView; // @synthesize pdfView=_pdfView;
@property(nonatomic) __weak UIView *annotationToolView; // @synthesize annotationToolView=_annotationToolView;
@property(nonatomic) __weak UIView *handwritingToolView; // @synthesize handwritingToolView=_handwritingToolView;
@property(nonatomic) __weak UIButton *signButton; // @synthesize signButton=_signButton;
@property(nonatomic) __weak UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(nonatomic) __weak UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(copy, nonatomic) CDUnknownBlockType closePDFBlock; // @synthesize closePDFBlock=_closePDFBlock;
@property(copy, nonatomic) CDUnknownBlockType savePDFBlock; // @synthesize savePDFBlock=_savePDFBlock;
@property(nonatomic) _Bool isLocalFile; // @synthesize isLocalFile=_isLocalFile;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)iAppPDFView:(id)arg1 didCancelInputPasswordWithButtonType:(long long)arg2;
- (_Bool)iAppPDFView:(id)arg1 didClickedAnnotationWithInfo:(id)arg2;
- (void)iAppPDFView:(id)arg1 didSelectedText:(id)arg2 withStartPoint:(struct CGPoint)arg3 endPoint:(struct CGPoint)arg4;
- (_Bool)iAppPDFView:(id)arg1 shouldSelectingTextAndThisPlaceHasAnnote:(_Bool)arg2;
- (void)iAppPDFView:(id)arg1 pageDidMoveWithInfo:(id)arg2;
- (void)iAppPDFView:(id)arg1 annotationDidFinish:(_Bool)arg2 annotationType:(long long)arg3;
- (void)iAppPDFView:(id)arg1 pageIndexDidChange:(unsigned long long)arg2;
- (void)showShareControllerWithFilePath:(id)arg1 inView:(id)arg2;
- (void)handwritingToolViewButtonClicked:(id)arg1;
- (void)annotationToolViewButtonClicked:(id)arg1;
- (void)navigationViewButtonClicked:(id)arg1;
- (void)testFunction;
- (void)showAnnotationToolView:(_Bool)arg1;
- (id)buttonWithTitle:(id)arg1 image:(id)arg2 tag:(long long)arg3 size:(struct CGSize)arg4 viewType:(long long)arg5;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

