//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol OS_dispatch_semaphore;

@interface JCORETcpEventController : NSObject
{
    _Bool _isLogined;
    _Bool _isLoginPWDError;
    _Bool _isRegisterError;
    NSObject<OS_dispatch_semaphore> *_intervalLock;
    _Bool _isInMessage;
    _Bool _heartbeatLock;
    NSTimer *_heartbeatTimer;
    long long _inMessageTimerInterval;
    long long _incrementTime;
}

- (void).cxx_destruct;
@property(nonatomic) long long incrementTime; // @synthesize incrementTime=_incrementTime;
@property(nonatomic) long long inMessageTimerInterval; // @synthesize inMessageTimerInterval=_inMessageTimerInterval;
@property(nonatomic) __weak NSTimer *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(nonatomic) _Bool heartbeatLock; // @synthesize heartbeatLock=_heartbeatLock;
- (void)stopInMessage;
- (void)beginInMessageHeart;
- (void)handleCmdControl:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)receiveTcpResponse:(id)arg1;
- (void)receiveTcpDisconnect:(id)arg1;
- (void)receiveTcpConnected:(id)arg1;
- (void)onVoipTokenReportRespond:(id)arg1;
- (void)onDeviceTokenReportRespond:(id)arg1;
- (void)onIDFAReportRespond:(id)arg1;
- (void)onControlRespond:(id)arg1;
- (void)reConnect;
- (void)onLoginRespond:(id)arg1;
- (void)clearDefaultConnInfo;
- (void)handleAppKeyRefuesReset:(id)arg1;
- (_Bool)clientStateWithError:(unsigned short)arg1;
- (void)onRegisterRespond:(id)arg1;
- (void)onRespond:(id)arg1;
- (void)parseTcpData:(id)arg1;
- (unsigned short)parseStatusCode:(id)arg1;
- (void)stopHeartbeatTimer;
- (void)resetTimerInterval;
- (void)startHeartbeatTimerWithInMessage;
- (void)startHeartbeatTimer;
- (void)resetHeartbeatLock;
- (void)startHeartbeat;
- (void)sendReceipt:(id)arg1;
- (void)tryUploadSDKVersion;
- (void)tryUploadIDFA;
- (void)reportVoipToken:(id)arg1;
- (void)reportWithInvalidToken:(id)arg1;
- (void)reportToken:(id)arg1;
- (void)doLogin;
- (void)doRegister;
- (id)init;
- (void)dealloc;

@end

