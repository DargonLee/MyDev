//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol WSOnlyWriteStateBottomBarDelegate;

@interface WSOnlyWriteStateBottomBar : UIView
{
    id <WSOnlyWriteStateBottomBarDelegate> _delegate;
    UIButton *_writeButton;
    UIButton *_pictureButton;
    UIButton *_takePhotoButton;
    UIButton *_deletePageButton;
    UIButton *_addPageButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *addPageButton; // @synthesize addPageButton=_addPageButton;
@property(retain, nonatomic) UIButton *deletePageButton; // @synthesize deletePageButton=_deletePageButton;
@property(retain, nonatomic) UIButton *takePhotoButton; // @synthesize takePhotoButton=_takePhotoButton;
@property(retain, nonatomic) UIButton *pictureButton; // @synthesize pictureButton=_pictureButton;
@property(retain, nonatomic) UIButton *writeButton; // @synthesize writeButton=_writeButton;
@property(nonatomic) __weak id <WSOnlyWriteStateBottomBarDelegate> delegate; // @synthesize delegate=_delegate;
- (void)verticalCenterButtonTitleAndImageWithButton:(id)arg1;
- (id)customButton:(id)arg1 withImage:(id)arg2 withTitle:(id)arg3;
- (void)takePhotoButtonAction;
- (void)enterPhotoPhotoLibraryButtonAction;
- (void)addPageButtonAction;
- (void)deletePageButtonAction;
- (void)writeButtonAction;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

