//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSString;

@interface AMapNearbyUserInfo : AMapSearchObject
{
    NSString *_userID;
    AMapGeoPoint *_location;
    double _distance;
    double _updatetime;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(nonatomic) double updatetime; // @synthesize updatetime=_updatetime;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)init;

@end

