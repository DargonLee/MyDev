//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMNavigationChannelKey;

@interface GMSx_GMMPhotoConnectivityOptions : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIncludeTargetOrientation; // @dynamic hasIncludeTargetOrientation;
@property(nonatomic) _Bool hasNavigationChannel; // @dynamic hasNavigationChannel;
@property(nonatomic) _Bool includeTargetOrientation; // @dynamic includeTargetOrientation;
@property(retain, nonatomic) GMSx_GMMNavigationChannelKey *navigationChannel; // @dynamic navigationChannel;

@end

