//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPBInt32Array;

@interface GMSx_GMMMfeTileProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasTileIndexX; // @dynamic hasTileIndexX;
@property(nonatomic) _Bool hasTileIndexY; // @dynamic hasTileIndexY;
@property(nonatomic) _Bool hasZoomLevel; // @dynamic hasZoomLevel;
@property(retain, nonatomic) GMSx_GPBInt32Array *tileFlagsArray; // @dynamic tileFlagsArray;
@property(readonly, nonatomic) unsigned long long tileFlagsArray_Count; // @dynamic tileFlagsArray_Count;
@property(nonatomic) int tileIndexX; // @dynamic tileIndexX;
@property(nonatomic) int tileIndexY; // @dynamic tileIndexY;
@property(nonatomic) int zoomLevel; // @dynamic zoomLevel;

@end

