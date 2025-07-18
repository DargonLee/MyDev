//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSAnalyticsCounter, GMSAnalyticsTimer;
@protocol GMSAnalyticsLogger;

@interface GMSAnalytics : NSObject
{
    GMSAnalyticsTimer *_frameTimer;
    GMSAnalyticsTimer *_tilePrepTimer;
    GMSAnalyticsTimer *_tileUnpackTimer;
    GMSAnalyticsCounter *_diskCacheResetChangedLegalCountry;
    GMSAnalyticsCounter *_diskCacheResetChangedLocale;
    GMSAnalyticsCounter *_tilesFetchedFromCacheNeedUpdateDataVersion;
    GMSAnalyticsCounter *_tilesFetchedFromCacheNeedUpdateTileEdition;
    GMSAnalyticsCounter *_tilesFetchedFromCacheNeedUpdatePertileExpired;
    GMSAnalyticsCounter *_tilesFetchedFromCacheNeedUpdateExperimentIDs;
    GMSAnalyticsCounter *_tilesFetchedFromCacheNeedUpdateLegalCountry;
    GMSAnalyticsCounter *_tilesFetchedFromDiskCache;
    GMSAnalyticsCounter *_tilesFetchedFromDiskCacheNoUpdateRequired;
    GMSAnalyticsCounter *_tilesFetchedFromMemoryCache;
    GMSAnalyticsCounter *_tilesFetchedFromMemoryCacheNoUpdateRequired;
    GMSAnalyticsCounter *_tilesFetchedFromGmmServer;
    GMSAnalyticsCounter *_tilesFetchedFromGmmServerSize;
    GMSAnalyticsCounter *_tilesFetchedFromGmmServerUnchanged;
    GMSAnalyticsCounter *_tilesFetchedFromGmmServerUnchangedSize;
    GMSAnalyticsCounter *_tilesFetchedFromPaint;
    GMSAnalyticsCounter *_tilesFetchedFromPaintSize;
    GMSAnalyticsCounter *_tilesFetchedFromPaintUnchanged;
    GMSAnalyticsCounter *_tilesFetchedFromPaintUnchangedSize;
    GMSAnalyticsCounter *_roadGraphLoadTileStatus;
    GMSAnalyticsCounter *_navigationLocationPipelineResults;
    GMSAnalyticsCounter *_transitDirectionsRequestCustomizedRouteOptionsCounter;
    id <GMSAnalyticsLogger> _analyticsLogger;
}

@property(readonly, nonatomic) id <GMSAnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) GMSAnalyticsCounter *transitDirectionsRequestCustomizedRouteOptionsCounter; // @synthesize transitDirectionsRequestCustomizedRouteOptionsCounter=_transitDirectionsRequestCustomizedRouteOptionsCounter;
@property(readonly, nonatomic) GMSAnalyticsCounter *navigationLocationPipelineResults; // @synthesize navigationLocationPipelineResults=_navigationLocationPipelineResults;
@property(readonly, nonatomic) GMSAnalyticsCounter *roadGraphLoadTileStatus; // @synthesize roadGraphLoadTileStatus=_roadGraphLoadTileStatus;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromPaintUnchangedSize; // @synthesize tilesFetchedFromPaintUnchangedSize=_tilesFetchedFromPaintUnchangedSize;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromPaintUnchanged; // @synthesize tilesFetchedFromPaintUnchanged=_tilesFetchedFromPaintUnchanged;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromPaintSize; // @synthesize tilesFetchedFromPaintSize=_tilesFetchedFromPaintSize;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromPaint; // @synthesize tilesFetchedFromPaint=_tilesFetchedFromPaint;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromGmmServerUnchangedSize; // @synthesize tilesFetchedFromGmmServerUnchangedSize=_tilesFetchedFromGmmServerUnchangedSize;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromGmmServerUnchanged; // @synthesize tilesFetchedFromGmmServerUnchanged=_tilesFetchedFromGmmServerUnchanged;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromGmmServerSize; // @synthesize tilesFetchedFromGmmServerSize=_tilesFetchedFromGmmServerSize;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromGmmServer; // @synthesize tilesFetchedFromGmmServer=_tilesFetchedFromGmmServer;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromMemoryCacheNoUpdateRequired; // @synthesize tilesFetchedFromMemoryCacheNoUpdateRequired=_tilesFetchedFromMemoryCacheNoUpdateRequired;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromMemoryCache; // @synthesize tilesFetchedFromMemoryCache=_tilesFetchedFromMemoryCache;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromDiskCacheNoUpdateRequired; // @synthesize tilesFetchedFromDiskCacheNoUpdateRequired=_tilesFetchedFromDiskCacheNoUpdateRequired;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromDiskCache; // @synthesize tilesFetchedFromDiskCache=_tilesFetchedFromDiskCache;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromCacheNeedUpdateLegalCountry; // @synthesize tilesFetchedFromCacheNeedUpdateLegalCountry=_tilesFetchedFromCacheNeedUpdateLegalCountry;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromCacheNeedUpdateExperimentIDs; // @synthesize tilesFetchedFromCacheNeedUpdateExperimentIDs=_tilesFetchedFromCacheNeedUpdateExperimentIDs;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromCacheNeedUpdatePertileExpired; // @synthesize tilesFetchedFromCacheNeedUpdatePertileExpired=_tilesFetchedFromCacheNeedUpdatePertileExpired;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromCacheNeedUpdateTileEdition; // @synthesize tilesFetchedFromCacheNeedUpdateTileEdition=_tilesFetchedFromCacheNeedUpdateTileEdition;
@property(readonly, nonatomic) GMSAnalyticsCounter *tilesFetchedFromCacheNeedUpdateDataVersion; // @synthesize tilesFetchedFromCacheNeedUpdateDataVersion=_tilesFetchedFromCacheNeedUpdateDataVersion;
@property(readonly, nonatomic) GMSAnalyticsCounter *diskCacheResetChangedLocale; // @synthesize diskCacheResetChangedLocale=_diskCacheResetChangedLocale;
@property(readonly, nonatomic) GMSAnalyticsCounter *diskCacheResetChangedLegalCountry; // @synthesize diskCacheResetChangedLegalCountry=_diskCacheResetChangedLegalCountry;
@property(readonly, nonatomic) GMSAnalyticsTimer *tileUnpackTimer; // @synthesize tileUnpackTimer=_tileUnpackTimer;
@property(readonly, nonatomic) GMSAnalyticsTimer *tilePrepTimer; // @synthesize tilePrepTimer=_tilePrepTimer;
@property(readonly, nonatomic) GMSAnalyticsTimer *frameTimer; // @synthesize frameTimer=_frameTimer;
- (void).cxx_destruct;
- (void)logNetworkFetchElapsedTime:(long long)arg1 tileType:(id)arg2;
- (id)initWithAnalyticsLogger:(id)arg1;

@end

