//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, NSArray;

@interface AMapDistanceSearchRequest : AMapSearchObject
{
    _Bool _requireExtension;
    NSArray *_origins;
    AMapGeoPoint *_destination;
    long long _type;
    long long _strategy;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool requireExtension; // @synthesize requireExtension=_requireExtension;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) AMapGeoPoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) NSArray *origins; // @synthesize origins=_origins;
- (id)init;

@end

