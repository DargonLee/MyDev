//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapDistanceResult : AMapSearchObject
{
    long long _originID;
    long long _destID;
    long long _distance;
    long long _duration;
    NSString *_info;
    long long _code;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(nonatomic) long long code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(nonatomic) long long destID; // @synthesize destID=_destID;
@property(nonatomic) long long originID; // @synthesize originID=_originID;
- (id)init;

@end

