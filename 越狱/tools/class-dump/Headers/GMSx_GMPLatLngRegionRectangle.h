//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GSPointProto, NSMutableArray;

@interface GMSx_GMPLatLngRegionRectangle : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GSPointProto *center; // @dynamic center;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) _Bool hasHi; // @dynamic hasHi;
@property(nonatomic) _Bool hasLo; // @dynamic hasLo;
@property(nonatomic) _Bool hasMaxZoom; // @dynamic hasMaxZoom;
@property(nonatomic) _Bool hasMinZoom; // @dynamic hasMinZoom;
@property(nonatomic) _Bool hasZoom; // @dynamic hasZoom;
@property(retain, nonatomic) GMSx_GSPointProto *hi; // @dynamic hi;
@property(retain, nonatomic) GMSx_GSPointProto *lo; // @dynamic lo;
@property(nonatomic) unsigned int maxZoom; // @dynamic maxZoom;
@property(nonatomic) unsigned int minZoom; // @dynamic minZoom;
@property(retain, nonatomic) NSMutableArray *visibleLocationArray; // @dynamic visibleLocationArray;
@property(readonly, nonatomic) unsigned long long visibleLocationArray_Count; // @dynamic visibleLocationArray_Count;
@property(nonatomic) unsigned int zoom; // @dynamic zoom;

@end

