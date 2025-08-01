//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JCORENetwork, NSData, NSError;

@protocol JCOREConnectManagerDelegate <NSObject>
- (void)socket:(JCORENetwork *)arg1 sentData:(NSData *)arg2;
- (void)socket:(JCORENetwork *)arg1 recvData:(NSData *)arg2 handler:(void (^)(_Bool))arg3;

@optional
- (void)socket:(JCORENetwork *)arg1 connectStateChanged:(unsigned long long)arg2;
- (void)socket:(JCORENetwork *)arg1 unsentData:(NSData *)arg2;
- (void)socket:(JCORENetwork *)arg1 noRecvData:(NSError *)arg2;
- (void)sendQueueEmpty:(JCORENetwork *)arg1;
@end

