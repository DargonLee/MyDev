//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PKPushRegistryDelegate-Protocol.h"

@class MuteChecker, NSString, UILocalNotification, UNNotificationRequest;
@protocol OS_dispatch_source;

@interface FWPushKitManager : NSObject <PKPushRegistryDelegate>
{
    NSObject<OS_dispatch_source> *_timer;
    NSString *_token;
    MuteChecker *_muteChecker;
    UILocalNotification *_callNotification;
    UNNotificationRequest *_request;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) UNNotificationRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) UILocalNotification *callNotification; // @synthesize callNotification=_callNotification;
@property(retain, nonatomic) MuteChecker *muteChecker; // @synthesize muteChecker=_muteChecker;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
- (void)onCancelRing;
- (void)onCallRing:(id)arg1;
- (void)cancelTime;
- (void)openCountdown;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (void)registerRemoteNotification;
- (void)registerPushKit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

