//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class NSMutableArray, NSString;

@interface GMSx_GMTTDDirections_TripGroup : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeadline; // @dynamic hasHeadline;
@property(nonatomic) _Bool hasSubheadline; // @dynamic hasSubheadline;
@property(nonatomic) _Bool hasVed; // @dynamic hasVed;
@property(copy, nonatomic) NSString *headline; // @dynamic headline;
@property(copy, nonatomic) NSString *subheadline; // @dynamic subheadline;
@property(retain, nonatomic) NSMutableArray *tripReferenceArray; // @dynamic tripReferenceArray;
@property(readonly, nonatomic) unsigned long long tripReferenceArray_Count; // @dynamic tripReferenceArray_Count;
@property(copy, nonatomic) NSString *ved; // @dynamic ved;

@end

