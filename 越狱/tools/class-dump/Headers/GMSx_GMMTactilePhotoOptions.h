//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMGEOMSize, GMSx_GMMPhotoClientCapabilities, GMSx_GMMPhotoFilterOptions, GMSx_GMMTactilePhotoMetadataOptionsProto;

@interface GMSx_GMMTactilePhotoOptions : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMPhotoClientCapabilities *clientCapabilities; // @dynamic clientCapabilities;
@property(nonatomic) _Bool hasClientCapabilities; // @dynamic hasClientCapabilities;
@property(nonatomic) _Bool hasIncludeSphericalInPhotoSet; // @dynamic hasIncludeSphericalInPhotoSet;
@property(nonatomic) _Bool hasMetadataOptions; // @dynamic hasMetadataOptions;
@property(nonatomic) _Bool hasPhotoFilterOptions; // @dynamic hasPhotoFilterOptions;
@property(nonatomic) _Bool hasThumbnailSize; // @dynamic hasThumbnailSize;
@property(nonatomic) _Bool includeSphericalInPhotoSet; // @dynamic includeSphericalInPhotoSet;
@property(retain, nonatomic) GMSx_GMMTactilePhotoMetadataOptionsProto *metadataOptions; // @dynamic metadataOptions;
@property(retain, nonatomic) GMSx_GMMPhotoFilterOptions *photoFilterOptions; // @dynamic photoFilterOptions;
@property(retain, nonatomic) GMSx_GMGEOMSize *thumbnailSize; // @dynamic thumbnailSize;

@end

