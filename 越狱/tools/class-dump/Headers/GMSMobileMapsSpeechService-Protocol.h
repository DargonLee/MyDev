//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GMSx_GMMSynthesizeTextRequest;
@protocol GMSNetworkFetcherRequest;

@protocol GMSMobileMapsSpeechService <NSObject>
- (id <GMSNetworkFetcherRequest>)RPCToSynthesizeTextWithRequest:(GMSx_GMMSynthesizeTextRequest *)arg1 handler:(void (^)(GMSx_GMMSynthesizeTextResponse *, NSError *))arg2;
- (void)synthesizeTextWithRequest:(GMSx_GMMSynthesizeTextRequest *)arg1 handler:(void (^)(GMSx_GMMSynthesizeTextResponse *, NSError *))arg2;
@end

