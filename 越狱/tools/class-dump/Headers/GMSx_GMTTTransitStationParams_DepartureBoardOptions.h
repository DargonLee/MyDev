//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPBEnumArray;

@interface GMSx_GMTTTransitStationParams_DepartureBoardOptions : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GPBEnumArray *allowedDisplayTypeArray; // @dynamic allowedDisplayTypeArray;
@property(readonly, nonatomic) unsigned long long allowedDisplayTypeArray_Count; // @dynamic allowedDisplayTypeArray_Count;
@property(nonatomic) _Bool hasIncludeDepartureBoardMetadata; // @dynamic hasIncludeDepartureBoardMetadata;
@property(nonatomic) _Bool hasNumDepartures; // @dynamic hasNumDepartures;
@property(nonatomic) _Bool hasNumDeparturesPerDepartureList; // @dynamic hasNumDeparturesPerDepartureList;
@property(nonatomic) _Bool includeDepartureBoardMetadata; // @dynamic includeDepartureBoardMetadata;
@property(nonatomic) int numDepartures; // @dynamic numDepartures;
@property(nonatomic) int numDeparturesPerDepartureList; // @dynamic numDeparturesPerDepartureList;

@end

