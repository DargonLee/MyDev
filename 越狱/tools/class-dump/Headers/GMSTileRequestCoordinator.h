//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GMSTileRequestCoordinator : NSObject
{
    unsigned long long _max;
    NSMutableArray *_pendingRequests;
    NSMutableArray *_inFlightRequests;
}

- (void).cxx_destruct;
- (void)requestFinished:(id)arg1;
- (void)startRequestsIfNeeded;
- (id)description;
- (void)dropRequest:(id)arg1;
- (id)requestTileCoords:(id)arg1 tileService:(id)arg2 target:(id)arg3 selector:(SEL)arg4 scrubTileParams:(_Bool)arg5;
- (id)initWithRequestMax:(unsigned long long)arg1;

@end

