//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FDKeyedHeightCache : NSObject
{
    NSMutableDictionary *_mutableHeightsByKeyForPortrait;
    NSMutableDictionary *_mutableHeightsByKeyForLandscape;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *mutableHeightsByKeyForLandscape; // @synthesize mutableHeightsByKeyForLandscape=_mutableHeightsByKeyForLandscape;
@property(retain, nonatomic) NSMutableDictionary *mutableHeightsByKeyForPortrait; // @synthesize mutableHeightsByKeyForPortrait=_mutableHeightsByKeyForPortrait;
- (void)invalidateAllHeightCache;
- (void)invalidateHeightForKey:(id)arg1;
- (double)heightForKey:(id)arg1;
- (void)cacheHeight:(double)arg1 byKey:(id)arg2;
- (_Bool)existsHeightForKey:(id)arg1;
- (id)mutableHeightsByKeyForCurrentOrientation;
- (id)init;

@end

