//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError;
@protocol JCORESocketDataProtocol;

@protocol JCORENetworkDelegate <NSObject>
- (void)unsentData:(id <JCORESocketDataProtocol>)arg1;
- (void)noRecvData:(NSError *)arg1;
- (void)connectStateChanged:(id)arg1;
- (void)sendQueueEmpty;
- (void)sentData:(id <JCORESocketDataProtocol>)arg1;
- (void)recvData:(NSData *)arg1;
@end

