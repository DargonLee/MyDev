//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GMSx_GMMDTactileDirectionsRequestProto;
@protocol GMSNetworkFetcherRequest;

@protocol GMSMobileMapsDirectionsService <NSObject>
- (id <GMSNetworkFetcherRequest>)RPCToGetDirectionsWithRequest:(GMSx_GMMDTactileDirectionsRequestProto *)arg1 handler:(void (^)(GMSx_GMMDTactileDirectionsResponseProto *, NSError *))arg2;
- (void)getDirectionsWithRequest:(GMSx_GMMDTactileDirectionsRequestProto *)arg1 handler:(void (^)(GMSx_GMMDTactileDirectionsResponseProto *, NSError *))arg2;
@end

