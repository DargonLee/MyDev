//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCOREConfigProtocol-Protocol.h"

@class NSString;

@interface JPUSHConfigEntity : NSObject <JCOREConfigProtocol>
{
    _Bool isProduction;
    NSString *appKey;
    NSString *channel;
    NSString *advertisingId;
    CDUnknownBlockType completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler;
@property(nonatomic) _Bool isProduction; // @synthesize isProduction;
@property(copy, nonatomic) NSString *advertisingId; // @synthesize advertisingId;
@property(copy, nonatomic) NSString *channel; // @synthesize channel;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

