//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSAnalytics, GMSForegroundDispatchQueue, GMSLRUCache, GMSServerResourceManager, GMSTileCoordsGenerator, GMSTileCoordsTombstoneTracker, GMSTileRequestCoordinator, NSMutableDictionary, NSMutableSet;
@protocol GMSEntityResources, GMSRenderTileConsumer, GMSTileService;

@interface GMSRenderTileProvider : NSObject
{
    _Bool _contributesLabels;
    GMSTileCoordsGenerator *_tileCoordsGenerator;
    reffed_ptr_799bd618 _defaultLabelSource;
    _Bool _extractIndoorMetadataForLabels;
    _Bool _buildingsEnabled;
    int _mapStyle;
    GMSLRUCache *_tileCache;
    reffed_ptr_57016b98 _provider_state;
    id <GMSEntityResources> _entityResources;
    GMSServerResourceManager *_resourceManager;
    NSMutableDictionary *_coordsNeeded;
    NSMutableSet *_prefetchCoordsNeeded;
    NSMutableSet *_activeCoords;
    NSMutableSet *_coordsPendingStyleEpoch;
    GMSTileCoordsTombstoneTracker *_coordTombstones;
    _Bool _lastRequestWasNavigation;
    _Bool _networkGone;
    _Bool _blockNetworkFetchesPendingStyleTables;
    GMSForegroundDispatchQueue *_renderForegroundDispatchQueue;
    _Bool _labelSourceUnlimited;
    _Bool _tileFallbackForDeadCoords;
    _Bool _indoorFilteringEnabled;
    _Bool _blockNetworkFetches;
    int _tileFallbackLowerLimit;
    id <GMSTileService> _tileService;
    GMSTileRequestCoordinator *_requestCoordinator;
    id <GMSRenderTileConsumer> _consumer;
    unsigned long long _labelSourceDifferentiator;
    GMSAnalytics *_analytics;
}

+ (id)overlayImageTileProviderWithTileService:(id)arg1 tileCoordsGenerator:(id)arg2 requestCoordinator:(id)arg3 resourceManager:(id)arg4 priority:(unsigned int)arg5 overdrawProtected:(_Bool)arg6;
+ (id)imageTileProviderWithTileService:(id)arg1 tileCoordsGenerator:(id)arg2 requestCoordinator:(id)arg3 resourceManager:(id)arg4;
+ (id)hybridRoadsVectorTileProviderWithTileService:(id)arg1 styleTableService:(id)arg2 tileCoordsGenerator:(id)arg3 requestCoordinator:(id)arg4 resourceManager:(id)arg5 contributesLabels:(_Bool)arg6 useLabelsOnly:(_Bool)arg7;
+ (id)overlayVectorTileProviderWithTileService:(id)arg1 styleTableService:(id)arg2 tileCoordsGenerator:(id)arg3 requestCoordinator:(id)arg4 resourceManager:(id)arg5 contributesLabels:(_Bool)arg6;
+ (id)vectorTileProviderWithTileService:(id)arg1 styleTableService:(id)arg2 tileCoordsGenerator:(id)arg3 requestCoordinator:(id)arg4 resourceManager:(id)arg5 contributesLabels:(_Bool)arg6;
@property(nonatomic) _Bool blockNetworkFetches; // @synthesize blockNetworkFetches=_blockNetworkFetches;
@property(retain, nonatomic) GMSAnalytics *analytics; // @synthesize analytics=_analytics;
@property(nonatomic) unsigned long long labelSourceDifferentiator; // @synthesize labelSourceDifferentiator=_labelSourceDifferentiator;
@property(nonatomic) _Bool extractIndoorMetadataForLabels; // @synthesize extractIndoorMetadataForLabels=_extractIndoorMetadataForLabels;
@property(nonatomic) _Bool indoorFilteringEnabled; // @synthesize indoorFilteringEnabled=_indoorFilteringEnabled;
@property(nonatomic) int tileFallbackLowerLimit; // @synthesize tileFallbackLowerLimit=_tileFallbackLowerLimit;
@property(nonatomic) _Bool tileFallbackForDeadCoords; // @synthesize tileFallbackForDeadCoords=_tileFallbackForDeadCoords;
@property(nonatomic, getter=isLabelSourceUnlimited) _Bool labelSourceUnlimited; // @synthesize labelSourceUnlimited=_labelSourceUnlimited;
@property(nonatomic, getter=isBuildingsEnabled) _Bool buildingsEnabled; // @synthesize buildingsEnabled=_buildingsEnabled;
@property(readonly, nonatomic) __weak id <GMSRenderTileConsumer> consumer; // @synthesize consumer=_consumer;
@property(readonly, nonatomic) _Bool contributesLabels; // @synthesize contributesLabels=_contributesLabels;
@property(readonly, nonatomic) GMSTileRequestCoordinator *requestCoordinator; // @synthesize requestCoordinator=_requestCoordinator;
@property(readonly, nonatomic) GMSTileCoordsGenerator *tileCoordsGenerator; // @synthesize tileCoordsGenerator=_tileCoordsGenerator;
@property(readonly, nonatomic) id <GMSTileService> tileService; // @synthesize tileService=_tileService;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)tileService:(id)arg1 prefetchCoords:(id)arg2 status:(int)arg3 tile:(id)arg4 diffTiles:(id)arg5;
- (void)tileService:(id)arg1 didRequestCoords:(id)arg2 status:(int)arg3 tile:(id)arg4 diffTiles:(id)arg5;
- (void)tileService:(id)arg1 didRequestCachedCoords:(id)arg2 status:(int)arg3 tile:(id)arg4 diffTiles:(id)arg5;
- (void)tileServicePerTileEpochsWereUpdated:(id)arg1;
- (void)tileServiceCachesWereInvalidated:(id)arg1;
- (void)buildRenderTileFromModelTile:(id)arg1 diffTiles:(id)arg2 tileCoords:(id)arg3 tileService:(id)arg4 isNavigation:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
- (void)addTileToRenderTileCache:(id)arg1 diffTiles:(id)arg2 forCoords:(id)arg3 fromTileService:(id)arg4 wasPrefetch:(_Bool)arg5 willRefresh:(_Bool)arg6;
- (void)cachePreppedRenderTile:(id)arg1 tileInfo:(struct TilePreppingInfo)arg2;
- (void)buildEntitiesForTile:(id)arg1 tileInfo:(struct TilePreppingInfo)arg2;
- (void)prepareEntitiesForTile:(id)arg1 tileInfo:(struct TilePreppingInfo)arg2;
- (void)prepareRenderTile:(id)arg1 tileInfo:(struct TilePreppingInfo)arg2 tilePrepTimer:(id)arg3;
- (void)handleUnavailableTile:(struct TilePreppingInfo)arg1 removeFromTileService:(_Bool)arg2;
- (void)removeNeededTrackingForTile:(struct TilePreppingInfo)arg1 markDead:(_Bool)arg2;
- (id)findOrRequestParentForCoords:(id)arg1 fallbackCoords:(id *)arg2;
- (void)requestTile:(id)arg1 skipCacheCheck:(_Bool)arg2;
- (reffed_ptr_799bd618)labelSourceForTileService:(id)arg1 unlimited:(_Bool)arg2 differentiator:(unsigned long long)arg3;
- (void)removeTilesFromTileCacheKeepingVisibleTiles:(_Bool)arg1;
- (_Bool)renderTileStillUsable:(id)arg1;
- (_Bool)hasTileBecomeStale:(id)arg1;
- (id)cachedTileForCoords:(id)arg1 dataVersionMismatch:(_Bool *)arg2 perTileExpired:(_Bool *)arg3 isStale:(_Bool *)arg4;
- (void)didReceiveMemoryWarning:(id)arg1;
- (reffed_ptr_799bd618)labelSourceForTileCoords:(id)arg1;
- (_Bool)scrubTileParamsForTileService:(id)arg1;
- (id)tileServiceForRenderTile:(id)arg1;
- (id)tileServiceForTileCoords:(id)arg1;
- (void)clearTombstonesAndSetNetworkAvailable:(_Bool)arg1;
- (void)clearTombstones;
- (void)setBlockNetworkFetchesPendingStyleTables:(_Bool)arg1;
- (_Bool)blockNetworkFetchesPendingStyleTables;
- (void)collectLabelSources:(struct LabelSourceSet *)arg1;
- (id)description;
- (void)networkWasFound;
- (void)networkWasLost;
- (void)prefetchTiles:(id)arg1;
- (id)allTiles;
- (id)activeTiles;
- (id)bestTileForCoords:(id)arg1 startingAtZoom:(int)arg2;
- (id)tilesForCamera:(const reffed_ptr_329922e5 *)arg1 isNavigation:(_Bool)arg2 missingTileCoordinates:(id)arg3;
- (void)didGenerateTileCoordsWithGenerator:(id)arg1;
- (void)willDestroyRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)didCreateRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1 entityResources:(id)arg2;
- (void)unbind;
- (void)bindConsumer:(id)arg1;
- (void)configureTileCacheWithUIScale:(double)arg1;
@property int mapStyle;
@property(readonly, nonatomic) reffed_ptr_799bd618 defaultLabelSource;
@property(readonly, nonatomic) reffed_ptr_57016b98 providerState;
- (id)initWithName:(id)arg1 tileService:(id)arg2 tileCoordsGenerator:(id)arg3 requestCoordinator:(id)arg4 resourceManager:(id)arg5 contributesLabels:(_Bool)arg6;

@end

