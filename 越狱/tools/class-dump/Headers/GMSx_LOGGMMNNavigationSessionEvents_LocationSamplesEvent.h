//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSMutableArray;

@interface GMSx_LOGGMMNNavigationSessionEvents_LocationSamplesEvent : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *differentialLocationSamplesArray; // @dynamic differentialLocationSamplesArray;
@property(readonly, nonatomic) unsigned long long differentialLocationSamplesArray_Count; // @dynamic differentialLocationSamplesArray_Count;
@property(retain, nonatomic) NSMutableArray *locationSamplesArray; // @dynamic locationSamplesArray;
@property(readonly, nonatomic) unsigned long long locationSamplesArray_Count; // @dynamic locationSamplesArray_Count;

@end

