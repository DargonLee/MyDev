//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSTileDataCache-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface GMSStubTileDataCache : NSObject <GMSTileDataCache>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSMutableDictionary *_properties;
}

- (void).cxx_destruct;
- (_Bool)waitForQueueWithTimeout:(double)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (void)runWhenStarted:(CDUnknownBlockType)arg1;
- (void)deleteTileDataCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deleteTileCoordsSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)deleteTileWithCoords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkTileCoordsSet:(id)arg1 predicate:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)cancelReservationForClient:(id)arg1;
- (void)reserveTileCoordsSet:(id)arg1 forClient:(id)arg2;
- (void)setReservationsAreInitialized;
- (void)touchTileForTileCoords:(id)arg1;
- (void)updateTileCoords:(id)arg1 validationTime:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadTileForTileCoords:(id)arg1 dataVersion:(int)arg2 supportsVersionID:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)storeTileCoords:(id)arg1 validationTime:(long long)arg2 perTileEpoch:(int)arg3 serverPerTileEpoch:(int)arg4 dataVersion:(int)arg5 versionID:(id)arg6 data:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)storeCacheableTileDatas:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setExpirationPeriodMS:(long long)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

