//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface ZYQAsset : NSObject
{
    UIImage *_cacheThumbnail;
    UIImage *_cacheFullScreenImage;
    id _originAsset;
    CDUnknownBlockType _getThumbnail;
    CDUnknownBlockType _getFullScreenImage;
    CDUnknownBlockType _getOriginImage;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType getOriginImage; // @synthesize getOriginImage=_getOriginImage;
@property(copy, nonatomic) CDUnknownBlockType getFullScreenImage; // @synthesize getFullScreenImage=_getFullScreenImage;
@property(copy, nonatomic) CDUnknownBlockType getThumbnail; // @synthesize getThumbnail=_getThumbnail;
@property(retain, nonatomic) id originAsset; // @synthesize originAsset=_originAsset;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) double duration;
- (void)setGetOriginImage:(CDUnknownBlockType)arg1 fromNetwokProgressHandler:(CDUnknownBlockType)arg2;
- (void)setGetFullScreenImage:(CDUnknownBlockType)arg1 fromNetwokProgressHandler:(CDUnknownBlockType)arg2;

@end

