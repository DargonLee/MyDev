//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface ZYQAssetsGroup : NSObject
{
    UIImage *_cacheThumbnail;
    id _originAssetGroup;
    id _originFetchResult;
    NSString *_groupName;
    CDUnknownBlockType _getThumbnail;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType getThumbnail; // @synthesize getThumbnail=_getThumbnail;
@property(retain, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) id originFetchResult; // @synthesize originFetchResult=_originFetchResult;
@property(retain, nonatomic) id originAssetGroup; // @synthesize originAssetGroup=_originAssetGroup;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long count;

@end

