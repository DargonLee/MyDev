//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMapMemoryCache;
@protocol OS_dispatch_queue;

@interface AMapSearchCacheManager : NSObject
{
    NSObject<OS_dispatch_queue> *_requestQueue;
    AMapMemoryCache *_regeoMemoryCache;
    AMapMemoryCache *_geoMemoryCache;
    AMapMemoryCache *_poiKeyWordMemoryCache;
    AMapMemoryCache *_aroundMemoryCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) AMapMemoryCache *aroundMemoryCache; // @synthesize aroundMemoryCache=_aroundMemoryCache;
@property(retain, nonatomic) AMapMemoryCache *poiKeyWordMemoryCache; // @synthesize poiKeyWordMemoryCache=_poiKeyWordMemoryCache;
@property(retain, nonatomic) AMapMemoryCache *geoMemoryCache; // @synthesize geoMemoryCache=_geoMemoryCache;
@property(retain, nonatomic) AMapMemoryCache *regeoMemoryCache; // @synthesize regeoMemoryCache=_regeoMemoryCache;
- (void)handleCacheRequesting:(id)arg1 response:(id)arg2 error:(id)arg3;
- (id)memoryCacheWithType:(unsigned long long)arg1;
- (void)removeRequestNodeForRequest:(id)arg1;
- (void)addRequestNode:(id)arg1 requestOnwer:(id)arg2 forKey:(id)arg3;
- (id)requestNodesForRequest:(id)arg1;
- (id)checkHitRequestingSearch:(id)arg1;
- (void)setObject:(id)arg1 forRequest:(id)arg2;
- (id)objectForRequest:(id)arg1;
- (void)updateRegeoMemoryCache;
- (id)init;

@end

