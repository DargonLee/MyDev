//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_LOGGMMFloatStatistics;

@interface GMSx_LOGGMMNavigationSession_LocationQualityStats : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int backwardsSharpTurnCount; // @dynamic backwardsSharpTurnCount;
@property(nonatomic) int failsafesCount; // @dynamic failsafesCount;
@property(nonatomic) _Bool hasBackwardsSharpTurnCount; // @dynamic hasBackwardsSharpTurnCount;
@property(nonatomic) _Bool hasFailsafesCount; // @dynamic hasFailsafesCount;
@property(nonatomic) _Bool hasJumpedAcrossSegmentsCount; // @dynamic hasJumpedAcrossSegmentsCount;
@property(nonatomic) _Bool hasLnObservationProbability; // @dynamic hasLnObservationProbability;
@property(nonatomic) _Bool hasOffRouteReroutes; // @dynamic hasOffRouteReroutes;
@property(nonatomic) _Bool hasOnRouteConfidenceStats; // @dynamic hasOnRouteConfidenceStats;
@property(nonatomic) _Bool hasOnToOffRoadTransitionCount; // @dynamic hasOnToOffRoadTransitionCount;
@property(nonatomic) _Bool hasRouteSnappingPerformanceStatsMs; // @dynamic hasRouteSnappingPerformanceStatsMs;
@property(nonatomic) _Bool hasTileDataVersion; // @dynamic hasTileDataVersion;
@property(nonatomic) _Bool hasTotalProcessedLocationCount; // @dynamic hasTotalProcessedLocationCount;
@property(nonatomic) _Bool hasTotalUnsnappedLocationCount; // @dynamic hasTotalUnsnappedLocationCount;
@property(nonatomic) int jumpedAcrossSegmentsCount; // @dynamic jumpedAcrossSegmentsCount;
@property(retain, nonatomic) GMSx_LOGGMMFloatStatistics *lnObservationProbability; // @dynamic lnObservationProbability;
@property(nonatomic) int offRouteReroutes; // @dynamic offRouteReroutes;
@property(retain, nonatomic) GMSx_LOGGMMFloatStatistics *onRouteConfidenceStats; // @dynamic onRouteConfidenceStats;
@property(nonatomic) int onToOffRoadTransitionCount; // @dynamic onToOffRoadTransitionCount;
@property(retain, nonatomic) GMSx_LOGGMMFloatStatistics *routeSnappingPerformanceStatsMs; // @dynamic routeSnappingPerformanceStatsMs;
@property(nonatomic) long long tileDataVersion; // @dynamic tileDataVersion;
@property(nonatomic) int totalProcessedLocationCount; // @dynamic totalProcessedLocationCount;
@property(nonatomic) int totalUnsnappedLocationCount; // @dynamic totalUnsnappedLocationCount;

@end

