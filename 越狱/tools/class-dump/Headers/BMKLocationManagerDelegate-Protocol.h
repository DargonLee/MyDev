//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BMKLocation, BMKLocationManager, CLHeading, CLLocationManager, NSError;

@protocol BMKLocationManagerDelegate <NSObject>

@optional
- (void)BMKLocationManager:(BMKLocationManager *)arg1 didUpdateNetworkState:(int)arg2 orError:(NSError *)arg3;
- (void)BMKLocationManager:(BMKLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (_Bool)BMKLocationManagerShouldDisplayHeadingCalibration:(BMKLocationManager *)arg1;
- (void)BMKLocationManagerDidChangeAuthorization:(BMKLocationManager *)arg1;
- (void)BMKLocationManager:(BMKLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)BMKLocationManager:(BMKLocationManager *)arg1 didUpdateLocation:(BMKLocation *)arg2 orError:(NSError *)arg3;
- (void)BMKLocationManager:(BMKLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)BMKLocationManager:(BMKLocationManager *)arg1 doRequestAlwaysAuthorization:(CLLocationManager *)arg2;
@end

