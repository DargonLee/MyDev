//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "ZXCaptureDelegate-Protocol.h"

@class AVCaptureSession, NSString, QRView, UIButton, UIImagePickerController, UILabel, UITextView, UIView, ZXCapture;
@protocol QRReaderViewControllerDelegate;

@interface QRReaderViewController : UIViewController <ZXCaptureDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, UIGestureRecognizerDelegate>
{
    QRView *_qrRectView;
    UIView *_coverView;
    UIButton *_importQRCodeImageBtn;
    UIButton *_importQRCodeImage;
    UIImagePickerController *_picker;
    UIView *_bottomItemsView;
    UIButton *_btnPhoto;
    UIButton *_btnFlash;
    UILabel *_photoLabel;
    UILabel *_flashlabel;
    _Bool _autoOPen;
    struct CGAffineTransform _captureSizeTransform;
    _Bool _isleftDefult;
    _Bool _isFirstApplyOrientation;
    id <QRReaderViewControllerDelegate> _delegate;
    ZXCapture *_capture;
    AVCaptureSession *_session;
    long long _barStyle;
    UITextView *_textView;
    UIButton *_copybutton;
    UIView *_barView;
    double _currentZoomFactor;
    UILabel *_labIntroudction;
    UILabel *_textLabel;
    UILabel *_textLabel1;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *textLabel1; // @synthesize textLabel1=_textLabel1;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) __weak UILabel *labIntroudction; // @synthesize labIntroudction=_labIntroudction;
@property(nonatomic) _Bool isFirstApplyOrientation; // @synthesize isFirstApplyOrientation=_isFirstApplyOrientation;
@property(nonatomic) double currentZoomFactor; // @synthesize currentZoomFactor=_currentZoomFactor;
@property(nonatomic) __weak UIView *barView; // @synthesize barView=_barView;
@property(nonatomic) __weak UIButton *copybutton; // @synthesize copybutton=_copybutton;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long barStyle; // @synthesize barStyle=_barStyle;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) ZXCapture *capture; // @synthesize capture=_capture;
@property(nonatomic) _Bool isleftDefult; // @synthesize isleftDefult=_isleftDefult;
@property(nonatomic) __weak id <QRReaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)lightSensitive;
- (void)turnTorchOn:(_Bool)arg1;
- (void)openOrCloseFlash:(id)arg1;
- (void)captureResult:(id)arg1;
- (void)captureResult:(id)arg1 result:(id)arg2;
- (void)removeCoverView;
- (id)addCoverViewWithNoResult;
- (void)decodeQRfromPhotoWithImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)barcodeFormatToString:(int)arg1;
- (void)applyRectOfInterest:(long long)arg1;
- (void)applyOrientation;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)openAlbum;
- (void)backClick:(id)arg1;
- (id)getLabelWithText:(id)arg1;
- (void)drawBottomItems;
- (void)configuredZXingReaderMaskView;
- (void)copyResult;
- (void)zoomChangePinchGestureClick:(id)arg1;
- (double)maxZoomFactor;
- (double)minZoomFactor;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)setupGesture;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

