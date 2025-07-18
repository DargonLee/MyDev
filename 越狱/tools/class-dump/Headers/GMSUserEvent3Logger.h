//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSUserEvent3Logging-Protocol.h"

@class GMSClientParameters, GMSUserEvent3ImpressionSet, NSString;
@protocol GMSLoggerDefaults, GMSTimingClock, GMSUserEvent3Transport;

@interface GMSUserEvent3Logger : NSObject <GMSUserEvent3Logging>
{
    id <GMSTimingClock> _clock;
    id <GMSLoggerDefaults> _userDefaults;
    GMSClientParameters *_clientParameters;
    id <GMSUserEvent3Transport> _transport;
    unsigned int _nextSequenceID;
    unsigned int _clientCounter;
    _Bool _logUserEvents;
    int _activePageId;
    int _activePageType;
    NSObject *_activePage;
    CDUnknownBlockType _debugOutputFilter;
    GMSUserEvent3ImpressionSet *_pendingImpressions;
    NSString *_previousEventID;
    NSString *_recentServerEventID;
}

+ (_Bool)isClientGeneratedEI:(id)arg1;
+ (_Bool)isServerGeneratedEI:(id)arg1;
+ (id)createImpressionSetWithClock:(id)arg1;
@property(nonatomic) _Bool logUserEvents; // @synthesize logUserEvents=_logUserEvents;
@property(copy, nonatomic) NSString *recentServerEventID; // @synthesize recentServerEventID=_recentServerEventID;
@property(copy, nonatomic) NSString *previousEventID; // @synthesize previousEventID=_previousEventID;
@property(readonly, nonatomic) GMSUserEvent3ImpressionSet *pendingImpressions; // @synthesize pendingImpressions=_pendingImpressions;
@property(copy, nonatomic) CDUnknownBlockType debugOutputFilter; // @synthesize debugOutputFilter=_debugOutputFilter;
@property(readonly, nonatomic) int activePageType; // @synthesize activePageType=_activePageType;
@property(readonly, nonatomic) int activePageId; // @synthesize activePageId=_activePageId;
@property(readonly, nonatomic) __weak NSObject *activePage; // @synthesize activePage=_activePage;
- (void).cxx_destruct;
- (void)updateEvent:(id)arg1 withClientEventID:(id)arg2 logicalParentEventID:(id)arg3;
- (void)reset;
- (void)queueEvent:(id)arg1;
- (id)queueAndProcessEvent:(id)arg1;
- (unsigned int)snatchSequenceIdAndIncrement;
- (id)uniqueClientEventId;
- (void)queueImpressions;
- (id)addAppEvent:(id)arg1;
- (id)activatePage:(id)arg1 veType:(int)arg2 activationId:(int)arg3;
- (void)activatePage:(id)arg1 id:(int)arg2;
- (void)addPrefetchUpgrade:(int)arg1 ei:(id)arg2;
- (void)addNavigationSession:(id)arg1;
- (void)addAppUnknownCrashEventForDate:(id)arg1;
- (void)addAppOOMCrashEventForDate:(id)arg1;
- (void)addAppCrashEvent:(id)arg1 date:(id)arg2;
- (void)addAppCheckpoint:(int)arg1;
- (_Bool)addImpressionEi:(id)arg1 ved:(id)arg2 veType:(int)arg3 isVisible:(_Bool)arg4;
- (_Bool)addImpressionVeType:(int)arg1 isVisible:(_Bool)arg2;
- (_Bool)addImpressionEi:(id)arg1 ved:(id)arg2 veType:(int)arg3;
- (_Bool)addImpressionVeType:(int)arg1;
- (_Bool)addImpression:(id)arg1 veType:(int)arg2 observer:(id)arg3;
- (_Bool)addImpression:(id)arg1 veType:(int)arg2 isVisible:(_Bool)arg3;
- (_Bool)addImpression:(id)arg1 veType:(int)arg2;
- (_Bool)addImpression:(id)arg1;
- (id)addUserInteraction:(int)arg1 ei:(id)arg2 ved:(id)arg3 uiState:(id)arg4 veType:(int)arg5 params:(id)arg6;
- (id)addUserInteraction:(int)arg1 ei:(id)arg2 ved:(id)arg3 uiState:(id)arg4 veType:(int)arg5;
- (id)addPrimaryUserAction:(int)arg1 ei:(id)arg2 ved:(id)arg3 veType:(int)arg4 uiState:(id)arg5 cardinalDirection:(int)arg6 params:(id)arg7;
- (id)addPrimaryUserAction:(int)arg1 veType:(int)arg2 uiState:(id)arg3 params:(id)arg4;
- (id)addPrimaryUserAction:(int)arg1 veType:(int)arg2 uiState:(id)arg3;
- (id)addPrimaryUserAction:(int)arg1 veType:(int)arg2;
- (id)addUserInteraction:(int)arg1 ei:(id)arg2 ved:(id)arg3 veType:(int)arg4;
- (id)addUserInteraction:(int)arg1 ve:(id)arg2 veType:(int)arg3 params:(id)arg4 fprintve:(id)arg5;
- (id)addUserInteraction:(int)arg1 ve:(id)arg2 veType:(int)arg3 params:(id)arg4;
- (id)addUserInteraction:(int)arg1 ve:(id)arg2 veType:(int)arg3;
- (id)addUserInteraction:(int)arg1 ve:(id)arg2;
- (id)addUserInteraction:(int)arg1 veType:(int)arg2 params:(id)arg3 uiState:(id)arg4 timestamp:(long long)arg5;
- (id)addUserInteraction:(int)arg1 veType:(int)arg2 timestamp:(long long)arg3;
- (id)addUserInteraction:(int)arg1 veType:(int)arg2 params:(id)arg3 uiState:(id)arg4;
- (id)addUserInteraction:(int)arg1 veType:(int)arg2 params:(id)arg3;
- (id)addUserInteraction:(int)arg1 veType:(int)arg2;
@property(readonly, nonatomic) id <GMSUserEvent3Transport> transport;
- (id)initWithClock:(id)arg1 loggerDefaults:(id)arg2 clientParameters:(id)arg3 transport:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

