//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSTimingClock-Protocol.h"

@class NSString;

@interface GMSSystemClock : NSObject <GMSTimingClock>
{
    _Bool _hasAppStartTimeMillis;
    long long _appStartTimeMillis;
}

- (void)taskTimerFired:(id)arg1;
- (void)dispatchAfter:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)dispatchAfter:(long long)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)cancelTask:(id)arg1;
- (id)scheduleRepeatingTaskWithTimeInterval:(double)arg1 tolerance:(double)arg2 block:(CDUnknownBlockType)arg3;
- (id)scheduleTaskAfterTimeInterval:(double)arg1 block:(CDUnknownBlockType)arg2;
@property(nonatomic) long long appStartTimeMillis;
@property(readonly, nonatomic) long long uptimeMillis;
@property(readonly, nonatomic) long long relativeTimeMillis;
@property(readonly, nonatomic) long long currentTimeMillis;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

