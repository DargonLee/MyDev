//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;

@interface JPUSHInMessageHeartBeatManager : NSObject
{
    _Bool _use_inApp;
    long long _inapp_interval;
    long long _current_interval;
    NSTimer *_heartbeatTimer;
    NSTimer *_nextTimer;
    NSDate *_foregroundDate;
    long long _heartBeatMax;
}

- (void).cxx_destruct;
@property(nonatomic) long long heartBeatMax; // @synthesize heartBeatMax=_heartBeatMax;
@property(retain, nonatomic) NSDate *foregroundDate; // @synthesize foregroundDate=_foregroundDate;
@property(nonatomic) __weak NSTimer *nextTimer; // @synthesize nextTimer=_nextTimer;
@property(nonatomic) __weak NSTimer *heartbeatTimer; // @synthesize heartbeatTimer=_heartbeatTimer;
@property(nonatomic) long long current_interval; // @synthesize current_interval=_current_interval;
@property(nonatomic) long long inapp_interval; // @synthesize inapp_interval=_inapp_interval;
@property(nonatomic) _Bool use_inApp; // @synthesize use_inApp=_use_inApp;
- (void)sendHeartbeat;
- (void)stopNextTimer;
- (void)stopHeartBeatTimer;
- (void)resetTimerInterval;
- (void)startHeartBeatTimer;
- (void)handleTcpClose;
- (void)handleApplicationStateChange;
- (void)handleNextTimeContent:(id)arg1;
- (void)handleUndoContent:(id)arg1;
- (void)handleCmdControl:(id)arg1;
- (void)applicationWillEnterForeground;
- (void)dealloc;
- (id)init;

@end

