//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIImage, UIImageView, UIScrollView;
@protocol CreateSealDelegate;

@interface RCreateSealController : UIViewController <UIScrollViewDelegate>
{
    int _type;
    CDUnknownBlockType _confirmBlock;
    id <CreateSealDelegate> _delegate;
    UIScrollView *_scrollView;
    UIImageView *_imageView;
    UIImage *_originalImage;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id <CreateSealDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
- (id)getCurrentFormatTime2;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)doneBtnClick;
- (id)createImage;
- (void)cancelBtnClick;
- (void)centerContent;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)userInterface;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

