//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPSImageSize, NSData;

@interface GMSx_GPSOverlay : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int bytesPerEntry; // @dynamic bytesPerEntry;
@property(nonatomic) _Bool hasBytesPerEntry; // @dynamic hasBytesPerEntry;
@property(nonatomic) _Bool hasMap; // @dynamic hasMap;
@property(nonatomic) _Bool hasSize; // @dynamic hasSize;
@property(copy, nonatomic) NSData *map; // @dynamic map;
@property(retain, nonatomic) GMSx_GPSImageSize *size; // @dynamic size;

@end

