//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMPhotoConnectivity, NSMutableArray, NSString;

@interface GMSx_GMMTactilePhotoResponseProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMPhotoConnectivity *connectivity; // @dynamic connectivity;
@property(copy, nonatomic) NSString *continuationToken; // @dynamic continuationToken;
@property(nonatomic) _Bool hasConnectivity; // @dynamic hasConnectivity;
@property(nonatomic) _Bool hasContinuationToken; // @dynamic hasContinuationToken;
@property(nonatomic) _Bool hasIsLastPage; // @dynamic hasIsLastPage;
@property(nonatomic) _Bool hasTotalPhotos; // @dynamic hasTotalPhotos;
@property(nonatomic) _Bool isLastPage; // @dynamic isLastPage;
@property(retain, nonatomic) NSMutableArray *photoArray; // @dynamic photoArray;
@property(readonly, nonatomic) unsigned long long photoArray_Count; // @dynamic photoArray_Count;
@property(nonatomic) int totalPhotos; // @dynamic totalPhotos;

@end

