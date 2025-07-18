//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCORENetworkDataDelegate-Protocol.h"

@class JCORENetwork, NSArray, NSString, NSTimer;

@interface JCOREUdpSis : NSObject <JCORENetworkDataDelegate>
{
    JCORENetwork *_udpSocket;
    NSArray *_sendingSisReportData;
    unsigned int _port;
    NSTimer *_sisRequestTimer;
    CDUnknownBlockType _sisCompletion;
    NSString *_host;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) CDUnknownBlockType sisCompletion; // @synthesize sisCompletion=_sisCompletion;
@property(nonatomic) __weak NSTimer *sisRequestTimer; // @synthesize sisRequestTimer=_sisRequestTimer;
- (void)socket:(id)arg1 unsentData:(id)arg2;
- (void)socket:(id)arg1 noRecvData:(id)arg2;
- (void)socket:(id)arg1 sentData:(id)arg2;
- (void)socket:(id)arg1 recvData:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)unsentData:(id)arg1 socket:(id)arg2;
- (void)parse:(id)arg1 ip:(id)arg2 port:(unsigned short)arg3;
- (id)didReceivedSisData:(id)arg1;
- (id)assemble:(id)arg1 magic:(BOOL)arg2 key:(unsigned int)arg3;
- (id)requestData;
- (id)sisRequestInfo;
- (void)reset;
- (void)resetUdpSocket;
- (void)callbackSisCompletion:(id)arg1;
- (void)dealloc;
- (void)stopSisRequestTimer;
- (void)sisRequestTimeOut;
- (void)startSisRequestTimer:(double)arg1;
- (void)sendSisRequest:(id)arg1 port:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

