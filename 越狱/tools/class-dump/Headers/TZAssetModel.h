//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHAsset, UIImage;

@interface TZAssetModel : NSObject
{
    _Bool _isSelected;
    _Bool _needOscillatoryAnimation;
    PHAsset *_asset;
    unsigned long long _type;
    NSString *_timeLength;
    UIImage *_cachedImage;
}

+ (id)modelWithAsset:(id)arg1 type:(unsigned long long)arg2 timeLength:(id)arg3;
+ (id)modelWithAsset:(id)arg1 type:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImage *cachedImage; // @synthesize cachedImage=_cachedImage;
@property(copy, nonatomic) NSString *timeLength; // @synthesize timeLength=_timeLength;
@property(nonatomic) _Bool needOscillatoryAnimation; // @synthesize needOscillatoryAnimation=_needOscillatoryAnimation;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;

@end

