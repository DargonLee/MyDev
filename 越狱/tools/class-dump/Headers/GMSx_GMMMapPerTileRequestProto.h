//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMMapTilePaintDescriptionProto, GMSx_GMMMapTileRequestHeader, NSMutableArray;

@interface GMSx_GMMMapPerTileRequestProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *expandableRegionArray; // @dynamic expandableRegionArray;
@property(readonly, nonatomic) unsigned long long expandableRegionArray_Count; // @dynamic expandableRegionArray_Count;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasPaintDescription; // @dynamic hasPaintDescription;
@property(nonatomic) _Bool hasTileType; // @dynamic hasTileType;
@property(retain, nonatomic) GMSx_GMMMapTileRequestHeader *header; // @dynamic header;
@property(retain, nonatomic) GMSx_GMMMapTilePaintDescriptionProto *paintDescription; // @dynamic paintDescription;
@property(nonatomic) int tileType; // @dynamic tileType;

@end

