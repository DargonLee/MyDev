//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, TZAssetModel, TZProgressView, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UIView;

@interface TZAssetCell : UICollectionViewCell
{
    _Bool _allowPickingGif;
    _Bool _allowPickingMultipleVideo;
    _Bool _showSelectBtn;
    _Bool _allowPreview;
    _Bool _useCachedImage;
    int _imageRequestID;
    int _bigImageRequestID;
    UIButton *_selectPhotoButton;
    UIButton *_cannotSelectLayerButton;
    TZAssetModel *_model;
    long long _index;
    CDUnknownBlockType _didSelectPhotoBlock;
    unsigned long long _type;
    NSString *_representedAssetIdentifier;
    UIImage *_photoSelImage;
    UIImage *_photoDefImage;
    CDUnknownBlockType _assetCellDidSetModelBlock;
    CDUnknownBlockType _assetCellDidLayoutSubviewsBlock;
    UIImageView *_imageView;
    UIImageView *_selectImageView;
    UILabel *_indexLabel;
    UIView *_bottomView;
    UILabel *_timeLength;
    UITapGestureRecognizer *_tapGesture;
    UIImageView *_videoImgView;
    TZProgressView *_progressView;
}

- (void).cxx_destruct;
@property(nonatomic) int bigImageRequestID; // @synthesize bigImageRequestID=_bigImageRequestID;
@property(retain, nonatomic) TZProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIImageView *videoImgView; // @synthesize videoImgView=_videoImgView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak UILabel *timeLength; // @synthesize timeLength=_timeLength;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(nonatomic) __weak UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) CDUnknownBlockType assetCellDidLayoutSubviewsBlock; // @synthesize assetCellDidLayoutSubviewsBlock=_assetCellDidLayoutSubviewsBlock;
@property(copy, nonatomic) CDUnknownBlockType assetCellDidSetModelBlock; // @synthesize assetCellDidSetModelBlock=_assetCellDidSetModelBlock;
@property(nonatomic) _Bool useCachedImage; // @synthesize useCachedImage=_useCachedImage;
@property(nonatomic) _Bool allowPreview; // @synthesize allowPreview=_allowPreview;
@property(nonatomic) _Bool showSelectBtn; // @synthesize showSelectBtn=_showSelectBtn;
@property(retain, nonatomic) UIImage *photoDefImage; // @synthesize photoDefImage=_photoDefImage;
@property(retain, nonatomic) UIImage *photoSelImage; // @synthesize photoSelImage=_photoSelImage;
@property(nonatomic) int imageRequestID; // @synthesize imageRequestID=_imageRequestID;
@property(copy, nonatomic) NSString *representedAssetIdentifier; // @synthesize representedAssetIdentifier=_representedAssetIdentifier;
@property(nonatomic) _Bool allowPickingMultipleVideo; // @synthesize allowPickingMultipleVideo=_allowPickingMultipleVideo;
@property(nonatomic) _Bool allowPickingGif; // @synthesize allowPickingGif=_allowPickingGif;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType didSelectPhotoBlock; // @synthesize didSelectPhotoBlock=_didSelectPhotoBlock;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) TZAssetModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UIButton *cannotSelectLayerButton; // @synthesize cannotSelectLayerButton=_cannotSelectLayerButton;
@property(nonatomic) __weak UIButton *selectPhotoButton; // @synthesize selectPhotoButton=_selectPhotoButton;
- (void)layoutSubviews;
- (void)cancelBigImageRequest;
- (void)requestBigImage;
- (void)hideProgressView;
- (void)didTapImageView;
- (void)selectPhotoButtonClick:(id)arg1;

@end

