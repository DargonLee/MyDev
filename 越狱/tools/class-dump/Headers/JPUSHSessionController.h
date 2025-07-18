//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface JPUSHSessionController : NSObject
{
    int _proofTimeInterval;
    _Bool _isSetup;
    _Bool _isLogin;
    _Bool _isConnected;
    NSMutableArray *_timeoutCallbacks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *timeoutCallbacks; // @synthesize timeoutCallbacks=_timeoutCallbacks;
@property(readonly, nonatomic) int proofTimeInterval; // @synthesize proofTimeInterval=_proofTimeInterval;
@property(readonly, nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(readonly, nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
- (void)fireHeartBeat;
- (void)addTimeoutCallback:(CDUnknownBlockType)arg1;
- (void)onAckTimeoutForRequest:(id)arg1;
- (void)onAckOrRespReceived:(id)arg1;
- (void)receiveDidLogin:(id)arg1;
- (void)receiveRegisterFailed:(id)arg1;
- (void)receiveDidRegister:(id)arg1;
- (void)receiveTcpDisconnect:(id)arg1;
- (void)receiveTcpConnected:(id)arg1;
- (void)receiveTcpConnecting:(id)arg1;
- (void)onLoginRespond:(id)arg1;
- (void)onRegisterRespond:(id)arg1;
- (id)findSendingRequest:(unsigned short)arg1;
- (id)findBlockedRequest:(unsigned short)arg1;
- (void)dequeueRequest:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)manualClose;
- (void)setup;
- (unsigned long long)getRId:(unsigned long long)arg1;
@property(readonly, nonatomic) id addressController;
@property(readonly, nonatomic) unsigned int sessionID;
@property(readonly, nonatomic) unsigned long long rId;
- (void)netWorkChange;
- (void)dealloc;
- (id)init;

@end

