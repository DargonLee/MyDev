//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MBProgressHUD, MPMoviePlayerViewController, MWGridViewController, NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, UIActivityIndicatorView, UIActivityViewController, UIBarButtonItem, UIColor, UIImage, UIScrollView, UIToolbar;
@protocol MWPhotoBrowserDelegate;

@interface MWPhotoBrowser : UIViewController <UIScrollViewDelegate, UIActionSheetDelegate>
{
    unsigned long long _photoCount;
    NSMutableArray *_photos;
    NSMutableArray *_thumbPhotos;
    NSArray *_fixedPhotosArray;
    UIScrollView *_pagingScrollView;
    NSMutableSet *_visiblePages;
    NSMutableSet *_recycledPages;
    unsigned long long _currentPageIndex;
    unsigned long long _previousPageIndex;
    struct CGRect _previousLayoutBounds;
    unsigned long long _pageIndexBeforeRotation;
    UIToolbar *_toolbar;
    NSTimer *_controlVisibilityTimer;
    UIBarButtonItem *_previousButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_actionButton;
    UIBarButtonItem *_doneButton;
    MBProgressHUD *_progressHUD;
    MWGridViewController *_gridController;
    UIBarButtonItem *_gridPreviousLeftNavItem;
    UIBarButtonItem *_gridPreviousRightNavItem;
    _Bool _previousNavBarHidden;
    _Bool _previousNavBarTranslucent;
    long long _previousNavBarStyle;
    long long _previousStatusBarStyle;
    UIColor *_previousNavBarTintColor;
    UIColor *_previousNavBarBarTintColor;
    UIBarButtonItem *_previousViewControllerBackButton;
    UIImage *_previousNavigationBarBackgroundImageDefault;
    UIImage *_previousNavigationBarBackgroundImageLandscapePhone;
    MPMoviePlayerViewController *_currentVideoPlayerViewController;
    unsigned long long _currentVideoIndex;
    UIActivityIndicatorView *_currentVideoLoadingIndicator;
    _Bool _hasBelongedToViewController;
    _Bool _isVCBasedStatusBarAppearance;
    _Bool _statusBarShouldBeHidden;
    _Bool _displayActionButton;
    _Bool _leaveStatusBarAlone;
    _Bool _performingLayout;
    _Bool _rotating;
    _Bool _viewIsActive;
    _Bool _didSavePreviousStateOfNavBar;
    _Bool _skipNextPagingScrollViewPositioning;
    _Bool _viewHasAppearedInitially;
    struct CGPoint _currentGridContentOffset;
    _Bool _zoomPhotosToFill;
    _Bool _displayNavArrows;
    _Bool _displaySelectionButtons;
    _Bool _alwaysShowControls;
    _Bool _enableGrid;
    _Bool _enableSwipeToDismiss;
    _Bool _startOnGrid;
    _Bool _autoPlayOnAppear;
    id <MWPhotoBrowserDelegate> _delegate;
    unsigned long long _delayToHideElements;
    NSString *_customImageSelectedIconName;
    NSString *_customImageSelectedSmallIconName;
    UIActivityViewController *_activityViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(retain, nonatomic) NSString *customImageSelectedSmallIconName; // @synthesize customImageSelectedSmallIconName=_customImageSelectedSmallIconName;
@property(retain, nonatomic) NSString *customImageSelectedIconName; // @synthesize customImageSelectedIconName=_customImageSelectedIconName;
@property(nonatomic) unsigned long long delayToHideElements; // @synthesize delayToHideElements=_delayToHideElements;
@property(nonatomic) _Bool autoPlayOnAppear; // @synthesize autoPlayOnAppear=_autoPlayOnAppear;
@property(nonatomic) _Bool startOnGrid; // @synthesize startOnGrid=_startOnGrid;
@property(nonatomic) _Bool enableSwipeToDismiss; // @synthesize enableSwipeToDismiss=_enableSwipeToDismiss;
@property(nonatomic) _Bool enableGrid; // @synthesize enableGrid=_enableGrid;
@property(nonatomic) _Bool alwaysShowControls; // @synthesize alwaysShowControls=_alwaysShowControls;
@property(nonatomic) _Bool displaySelectionButtons; // @synthesize displaySelectionButtons=_displaySelectionButtons;
@property(nonatomic) _Bool displayActionButton; // @synthesize displayActionButton=_displayActionButton;
@property(nonatomic) _Bool displayNavArrows; // @synthesize displayNavArrows=_displayNavArrows;
@property(nonatomic) _Bool zoomPhotosToFill; // @synthesize zoomPhotosToFill=_zoomPhotosToFill;
@property(nonatomic) __weak id <MWPhotoBrowserDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showProgressHUDCompleteMessage:(id)arg1;
- (void)hideProgressHUD:(_Bool)arg1;
- (void)showProgressHUDWithMessage:(id)arg1;
- (id)progressHUD;
- (void)actionButtonPressed:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (void)setCurrentPhotoIndex:(unsigned long long)arg1;
- (void)toggleControls;
- (void)showControls;
- (void)hideControls;
- (_Bool)areControlsHidden;
- (void)hideControlsAfterDelay;
- (void)cancelControlHiding;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)setControlsHidden:(_Bool)arg1 animated:(_Bool)arg2 permanent:(_Bool)arg3;
- (void)hideGrid;
- (void)showGrid:(_Bool)arg1;
- (void)showGridAnimated;
- (void)positionVideoLoadingIndicator;
- (void)setVideoLoadingIndicatorVisible:(_Bool)arg1 atPageIndex:(unsigned long long)arg2;
- (void)clearCurrentVideo;
- (void)videoFinishedCallback:(id)arg1;
- (void)_playVideo:(id)arg1 atPhotoIndex:(unsigned long long)arg2;
- (void)playVideoAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForPlayButton:(id)arg1;
- (void)playButtonTapped:(id)arg1;
- (void)selectedButtonTapped:(id)arg1;
- (void)showNextPhotoAnimated:(_Bool)arg1;
- (void)showPreviousPhotoAnimated:(_Bool)arg1;
- (void)gotoNextPage;
- (void)gotoPreviousPage;
- (void)jumpToPageAtIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)updateNavigation;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)frameForPlayButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)frameForSelectedButton:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)frameForCaptionView:(id)arg1 atIndex:(unsigned long long)arg2;
- (struct CGRect)frameForToolbarAtOrientation:(long long)arg1;
- (struct CGPoint)contentOffsetForPageAtIndex:(unsigned long long)arg1;
- (struct CGSize)contentSizeForPagingScrollView;
- (struct CGRect)frameForPageAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForPagingScrollView;
- (void)didStartViewingPageAtIndex:(unsigned long long)arg1;
- (id)dequeueRecycledPage;
- (void)configurePage:(id)arg1 forIndex:(unsigned long long)arg2;
- (id)pageDisplayingPhoto:(id)arg1;
- (id)pageDisplayedAtIndex:(unsigned long long)arg1;
- (_Bool)isDisplayingPageForIndex:(unsigned long long)arg1;
- (void)updateVisiblePageStates;
- (void)tilePages;
- (void)handleMWPhotoLoadingDidEndNotification:(id)arg1;
- (void)loadAdjacentPhotosIfNecessary:(id)arg1;
- (id)imageForPhoto:(id)arg1;
- (void)setPhotoSelected:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)photoIsSelectedAtIndex:(unsigned long long)arg1;
- (id)captionViewForPhotoAtIndex:(unsigned long long)arg1;
- (id)thumbPhotoAtIndex:(unsigned long long)arg1;
- (id)photoAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfPhotos;
- (void)reloadData;
@property(readonly, nonatomic) unsigned long long currentIndex;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)layoutVisiblePages;
- (void)viewWillLayoutSubviews;
- (void)restorePreviousNavBarAppearance:(_Bool)arg1;
- (void)storePreviousNavBarAppearance;
- (void)setNavBarAppearance:(_Bool)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)presentingViewControllerPrefersStatusBarHidden;
- (void)viewDidUnload;
- (void)performLayout;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)releaseAllUnderlyingPhotos:(_Bool)arg1;
- (void)dealloc;
- (void)_initialisation;
- (id)initWithCoder:(id)arg1;
- (id)initWithPhotos:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

