//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSString;

@interface GMSx_GMTTETransitRadarV2Station : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRecommendedRequeryIntervalSeconds; // @dynamic hasRecommendedRequeryIntervalSeconds;
@property(nonatomic) _Bool hasSummaryText; // @dynamic hasSummaryText;
@property(nonatomic) _Bool hasTestResponsePayload; // @dynamic hasTestResponsePayload;
@property(nonatomic) int recommendedRequeryIntervalSeconds; // @dynamic recommendedRequeryIntervalSeconds;
@property(copy, nonatomic) NSString *summaryText; // @dynamic summaryText;
@property(copy, nonatomic) NSString *testResponsePayload; // @dynamic testResponsePayload;

@end

