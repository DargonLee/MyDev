//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JPushExtensionReachability : NSObject
{
    _Bool localWiFiRef;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddressFourth:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithAddressSix:(const struct sockaddr_in6 *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
- (int)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (int)localWiFiStatusForFlags:(unsigned int)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;

@end

