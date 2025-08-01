//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTDDuration, GMSx_GMTTDRenderableComponent, GMSx_GMTTDTransitStopProto, NSMutableArray, NSString;

@interface GMSx_GMTTDTransitVehicleDetails : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMTTDTransitStopProto *arrivalStop; // @dynamic arrivalStop;
@property(nonatomic) _Bool cancelled; // @dynamic cancelled;
@property(copy, nonatomic) NSString *dataSourceDescription; // @dynamic dataSourceDescription;
@property(retain, nonatomic) GMSx_GMTTDTransitStopProto *departureStop; // @dynamic departureStop;
@property(retain, nonatomic) GMSx_GMTTDDuration *duration; // @dynamic duration;
@property(copy, nonatomic) NSString *filteredDeparturesToken; // @dynamic filteredDeparturesToken;
@property(nonatomic) long long firstStationDepartureTimestampSeconds; // @dynamic firstStationDepartureTimestampSeconds;
@property(nonatomic) _Bool hasArrivalStop; // @dynamic hasArrivalStop;
@property(nonatomic) _Bool hasCancelled; // @dynamic hasCancelled;
@property(nonatomic) _Bool hasDataSourceDescription; // @dynamic hasDataSourceDescription;
@property(nonatomic) _Bool hasDepartureStop; // @dynamic hasDepartureStop;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasFilteredDeparturesToken; // @dynamic hasFilteredDeparturesToken;
@property(nonatomic) _Bool hasFirstStationDepartureTimestampSeconds; // @dynamic hasFirstStationDepartureTimestampSeconds;
@property(nonatomic) _Bool hasIncludeExactTimes; // @dynamic hasIncludeExactTimes;
@property(nonatomic) _Bool hasLeadingPolylineIndex; // @dynamic hasLeadingPolylineIndex;
@property(nonatomic) _Bool hasLineColor; // @dynamic hasLineColor;
@property(nonatomic) _Bool hasMustPhone; // @dynamic hasMustPhone;
@property(nonatomic) _Bool hasNumTransitStops; // @dynamic hasNumTransitStops;
@property(nonatomic) _Bool hasTransitTripToken; // @dynamic hasTransitTripToken;
@property(nonatomic) _Bool hasVehicleToken; // @dynamic hasVehicleToken;
@property(nonatomic) _Bool hasVehicleType; // @dynamic hasVehicleType;
@property(nonatomic) _Bool hasVehicleTypeIcon; // @dynamic hasVehicleTypeIcon;
@property(nonatomic) _Bool hasWheelchairAccessibility; // @dynamic hasWheelchairAccessibility;
@property(nonatomic) _Bool includeExactTimes; // @dynamic includeExactTimes;
@property(retain, nonatomic) NSMutableArray *intermediateStopArray; // @dynamic intermediateStopArray;
@property(readonly, nonatomic) unsigned long long intermediateStopArray_Count; // @dynamic intermediateStopArray_Count;
@property(nonatomic) int leadingPolylineIndex; // @dynamic leadingPolylineIndex;
@property(copy, nonatomic) NSString *lineColor; // @dynamic lineColor;
@property(nonatomic) _Bool mustPhone; // @dynamic mustPhone;
@property(nonatomic) int numTransitStops; // @dynamic numTransitStops;
@property(copy, nonatomic) NSString *transitTripToken; // @dynamic transitTripToken;
@property(copy, nonatomic) NSString *vehicleToken; // @dynamic vehicleToken;
@property(nonatomic) int vehicleType; // @dynamic vehicleType;
@property(retain, nonatomic) GMSx_GMTTDRenderableComponent *vehicleTypeIcon; // @dynamic vehicleTypeIcon;
@property(nonatomic) int wheelchairAccessibility; // @dynamic wheelchairAccessibility;

@end

