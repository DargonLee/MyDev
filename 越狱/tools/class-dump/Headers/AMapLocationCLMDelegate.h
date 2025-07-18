//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class NSMapTable, NSRecursiveLock, NSString;

@interface AMapLocationCLMDelegate : NSObject <CLLocationManagerDelegate>
{
    NSMapTable *_allDelegates;
    NSRecursiveLock *_mapTableLock;
}

+ (void)threadEntryPoint:(id)arg1;
+ (id)thread;
+ (id)sharedDelegate;
- (void).cxx_destruct;
@property(retain, nonatomic) NSRecursiveLock *mapTableLock; // @synthesize mapTableLock=_mapTableLock;
@property(retain, nonatomic) NSMapTable *allDelegates; // @synthesize allDelegates=_allDelegates;
- (_Bool)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidChangeAuthorization:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)removeManager:(id)arg1;
- (void)addManager:(id)arg1 owner:(id)arg2;
- (void)processBlock:(CDUnknownBlockType)arg1;
- (void)initProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

