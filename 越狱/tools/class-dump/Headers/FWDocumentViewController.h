//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FWIMKit/FWBaseViewController.h>

#import "KWOfficeApiDelegate-Protocol.h"
#import "QLPreviewControllerDataSource-Protocol.h"
#import "QLPreviewControllerDelegate-Protocol.h"
#import "QLPreviewItem-Protocol.h"
#import "iAppOfficeDelegate-Protocol.h"

@class FWerrorView, NSString, NSTimer, NSURL, UIButton, UIDocumentInteractionController, UIImageView, UILabel, UIProgressView;

@interface FWDocumentViewController : FWBaseViewController <QLPreviewControllerDelegate, QLPreviewControllerDataSource, QLPreviewItem, iAppOfficeDelegate, KWOfficeApiDelegate>
{
    long long barStyle;
    _Bool _fileChanged;
    _Bool _wpsReadOnly;
    _Bool _useQuickLookForImage;
    _Bool _isLocalFile;
    _Bool _isFromFileSign;
    _Bool _ignoreCache;
    NSString *_urlString;
    NSString *_fileName;
    NSString *_signTpye;
    NSString *_uploadUrl;
    unsigned long long _fileEditType;
    NSString *_localFilePath;
    CDUnknownBlockType _signCallBack;
    NSString *_fullPath;
    NSString *_fileType;
    UIImageView *_iconImgView;
    UILabel *_nameLab;
    UIButton *_openFileBtn;
    UIProgressView *_progressView;
    UIButton *_shareFileBtn;
    UILabel *_speedLabel;
    NSTimer *_timer;
    long long _completeFile;
    long long _lastSecondCompleteFile;
    UIDocumentInteractionController *_docInteractionController;
    FWerrorView *_errorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FWerrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIDocumentInteractionController *docInteractionController; // @synthesize docInteractionController=_docInteractionController;
@property(nonatomic) long long lastSecondCompleteFile; // @synthesize lastSecondCompleteFile=_lastSecondCompleteFile;
@property(nonatomic) long long completeFile; // @synthesize completeFile=_completeFile;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *speedLabel; // @synthesize speedLabel=_speedLabel;
@property(retain, nonatomic) UIButton *shareFileBtn; // @synthesize shareFileBtn=_shareFileBtn;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIButton *openFileBtn; // @synthesize openFileBtn=_openFileBtn;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(retain, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(copy, nonatomic) CDUnknownBlockType signCallBack; // @synthesize signCallBack=_signCallBack;
@property(copy, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(nonatomic) _Bool ignoreCache; // @synthesize ignoreCache=_ignoreCache;
@property(nonatomic) unsigned long long fileEditType; // @synthesize fileEditType=_fileEditType;
@property(nonatomic) _Bool isFromFileSign; // @synthesize isFromFileSign=_isFromFileSign;
@property(nonatomic) _Bool isLocalFile; // @synthesize isLocalFile=_isLocalFile;
@property(nonatomic) _Bool useQuickLookForImage; // @synthesize useQuickLookForImage=_useQuickLookForImage;
@property(retain, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
@property(retain, nonatomic) NSString *signTpye; // @synthesize signTpye=_signTpye;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)decompressionFile:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)invalidTimer;
- (void)countTime;
- (void)handleErrorWith:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)openDocumentWithWafa;
- (void)completionHandler:(id)arg1;
- (void)downloadFile;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
@property(readonly, nonatomic) NSURL *previewItemURL;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)presentDocumentsViewController;
- (void)openFile:(id)arg1;
- (void)shareFile:(id)arg1;
- (void)openFileWithOther;
- (void)back;
- (void)viewWillLayoutSubviews;
- (void)createUI;
- (void)KWOfficeApiDidCloseWithError:(id)arg1;
- (void)KWOfficeApiDidAbort;
- (void)KWOfficeApiDidFinished;
- (void)KWOfficeApiDidReceiveData:(id)arg1;
- (void)officeDidCloseWithError:(id)arg1;
- (void)officeDidAbort;
- (void)officeDidFinished;
- (void)officeDidReceivedData:(id)arg1;
- (void)YozoOfficeDidFinish:(id)arg1;
- (void)openFileWithYozoOffice;
- (void)openFileWithWPS;
- (void)openFileWithiAppOffice;
- (void)openFileWithiAppPDF;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setupDocumentControllerWithURL:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly) Class superclass;

@end

