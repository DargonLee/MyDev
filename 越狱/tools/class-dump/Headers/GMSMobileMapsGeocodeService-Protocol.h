//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GMMTactileGeocodeRequestProto, GMMTactileLocationDetailsRequestProto, GMMTactileRevealRequestProto, GMSx_GMMReverseGeocodeRequestProto;
@protocol GMSNetworkFetcherRequest;

@protocol GMSMobileMapsGeocodeService <NSObject>
- (id <GMSNetworkFetcherRequest>)RPCToRevealWithRequest:(GMMTactileRevealRequestProto *)arg1 handler:(void (^)(GMMTactileRevealResponseProto *, NSError *))arg2;
- (void)revealWithRequest:(GMMTactileRevealRequestProto *)arg1 handler:(void (^)(GMMTactileRevealResponseProto *, NSError *))arg2;
- (id <GMSNetworkFetcherRequest>)RPCToGetLocationDetailsWithRequest:(GMMTactileLocationDetailsRequestProto *)arg1 handler:(void (^)(GMMTactileLocationDetailsResponseProto *, NSError *))arg2;
- (void)getLocationDetailsWithRequest:(GMMTactileLocationDetailsRequestProto *)arg1 handler:(void (^)(GMMTactileLocationDetailsResponseProto *, NSError *))arg2;
- (id <GMSNetworkFetcherRequest>)RPCToReverseGeocodeWithRequest:(GMSx_GMMReverseGeocodeRequestProto *)arg1 handler:(void (^)(GMSx_GMMReverseGeocodeResponseProto *, NSError *))arg2;
- (void)reverseGeocodeWithRequest:(GMSx_GMMReverseGeocodeRequestProto *)arg1 handler:(void (^)(GMSx_GMMReverseGeocodeResponseProto *, NSError *))arg2;
- (id <GMSNetworkFetcherRequest>)RPCToGeocodeWithRequest:(GMMTactileGeocodeRequestProto *)arg1 handler:(void (^)(GMMTactileGeocodeResponseProto *, NSError *))arg2;
- (void)geocodeWithRequest:(GMMTactileGeocodeRequestProto *)arg1 handler:(void (^)(GMMTactileGeocodeResponseProto *, NSError *))arg2;
@end

