//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSTileServices.h"

@interface GMSVectorTileServices : GMSTileServices
{
    struct map<unsigned long long, id<GMSTileService>, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, id<GMSTileService>>>> _activeStyledTileServices;
    struct map<unsigned long long, int, std::__1::less<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, int>>> _activeStyledTileServiceCount;
    _Bool _allowsCellularAccess;
}

@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)configuredTileDataCacheForTileType:(id)arg1;
- (id)configuredTileServiceForTileType:(id)arg1 configuredTileDataCache:(id)arg2;
- (void)retireStyledTileServiceForStyle:(id)arg1;
- (id)styledTileServiceForTileType:(id)arg1 mapStyle:(id)arg2;
- (void)clearStaleStyleCache:(id)arg1;
- (void)clearStaleStyleCaches;
- (_Bool)shouldUsePersonalizedSmartMaps;
- (id)customTileServiceWithLayer:(id)arg1;
- (id)initWithConnection:(id)arg1 clientParameters:(id)arg2 cacheStorageDescriptor:(id)arg3 styleTableService:(id)arg4 timingClock:(id)arg5 offlineTileDataCache:(id)arg6 allowsCellularAccess:(_Bool)arg7;

@end

