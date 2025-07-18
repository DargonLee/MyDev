//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSMutableArray, UIImageView, UILabel, UIStackView, UIView;

@interface SPInterfaceHeaderScrollView : UIScrollView
{
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_imageView;
    UIStackView *_textFieldView;
    NSMutableArray *_textFields;
    CDUnknownBlockType _headerViewSfeAreaDidChangBlock;
    struct CGSize _imageLimitSize;
    struct UIEdgeInsets _contentEdgeInsets;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType headerViewSfeAreaDidChangBlock; // @synthesize headerViewSfeAreaDidChangBlock=_headerViewSfeAreaDidChangBlock;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) NSMutableArray *textFields; // @synthesize textFields=_textFields;
@property(nonatomic) __weak UIStackView *textFieldView; // @synthesize textFieldView=_textFieldView;
@property(nonatomic) struct CGSize imageLimitSize; // @synthesize imageLimitSize=_imageLimitSize;
@property(nonatomic) __weak UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (void)updateConstraints;
- (void)safeAreaInsetsDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)addTextField:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

