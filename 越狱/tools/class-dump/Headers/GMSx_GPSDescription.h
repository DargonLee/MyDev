//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_LocalizedTextProto, NSMutableArray;

@interface GMSx_GPSDescription : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *addressLineArray; // @dynamic addressLineArray;
@property(readonly, nonatomic) unsigned long long addressLineArray_Count; // @dynamic addressLineArray_Count;
@property(retain, nonatomic) GMSx_LocalizedTextProto *derivedTitle; // @dynamic derivedTitle;
@property(retain, nonatomic) GMSx_LocalizedTextProto *explicitTitle; // @dynamic explicitTitle;
@property(nonatomic) _Bool hasDerivedTitle; // @dynamic hasDerivedTitle;
@property(nonatomic) _Bool hasExplicitTitle; // @dynamic hasExplicitTitle;
@property(nonatomic) _Bool hasPlaceName; // @dynamic hasPlaceName;
@property(nonatomic) _Bool hasThumbnailLabel; // @dynamic hasThumbnailLabel;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTypeSubtitle; // @dynamic hasTypeSubtitle;
@property(retain, nonatomic) GMSx_LocalizedTextProto *placeName; // @dynamic placeName;
@property(retain, nonatomic) GMSx_LocalizedTextProto *thumbnailLabel; // @dynamic thumbnailLabel;
@property(retain, nonatomic) GMSx_LocalizedTextProto *title; // @dynamic title;
@property(retain, nonatomic) GMSx_LocalizedTextProto *typeSubtitle; // @dynamic typeSubtitle;

@end

