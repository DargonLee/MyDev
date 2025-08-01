//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSString;

@interface AMapSubPOI : AMapSearchObject
{
    NSString *_uid;
    NSString *_name;
    NSString *_sname;
    AMapGeoPoint *_location;
    NSString *_address;
    long long _distance;
    NSString *_subtype;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subtype; // @synthesize subtype=_subtype;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *sname; // @synthesize sname=_sname;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (id)init;

@end

