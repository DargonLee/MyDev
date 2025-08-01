//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class RSealTempletModel, RSignTempletImageView, UIImageView;
@protocol RSealTempletCollectionCellProtocol;

@interface RSealTempletCollectionCell : UICollectionViewCell
{
    _Bool _isShowSeal;
    _Bool _isSingleState;
    _Bool _isSelectedPic;
    int _type;
    RSealTempletModel *_data;
    id <RSealTempletCollectionCellProtocol> _eventDelegate;
    RSignTempletImageView *_signImageView;
    UIImageView *_unselectedView;
    UIImageView *_selectedView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UIImageView *unselectedView; // @synthesize unselectedView=_unselectedView;
@property(retain, nonatomic) RSignTempletImageView *signImageView; // @synthesize signImageView=_signImageView;
@property(nonatomic) _Bool isSelectedPic; // @synthesize isSelectedPic=_isSelectedPic;
@property(nonatomic) _Bool isSingleState; // @synthesize isSingleState=_isSingleState;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool isShowSeal; // @synthesize isShowSeal=_isShowSeal;
@property(nonatomic) __weak id <RSealTempletCollectionCellProtocol> eventDelegate; // @synthesize eventDelegate=_eventDelegate;
@property(retain, nonatomic) RSealTempletModel *data; // @synthesize data=_data;
- (void)turnOffGesture;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

