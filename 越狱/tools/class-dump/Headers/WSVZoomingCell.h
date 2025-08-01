//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView;

@interface WSVZoomingCell : UICollectionViewCell
{
    int _pageNumber;
    UIImageView *_pdfBGImageView;
    UIImageView *_overlayImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *overlayImageView; // @synthesize overlayImageView=_overlayImageView;
@property(retain, nonatomic) UIImageView *pdfBGImageView; // @synthesize pdfBGImageView=_pdfBGImageView;
@property(nonatomic) int pageNumber; // @synthesize pageNumber=_pageNumber;
- (void)resetState;
- (void)reloadOverlayImg:(id)arg1;
- (void)releaseBackgroundImage;
- (void)reloadBGImg:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

