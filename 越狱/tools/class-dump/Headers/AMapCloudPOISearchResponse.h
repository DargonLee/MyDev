//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray;

@interface AMapCloudPOISearchResponse : AMapSearchObject
{
    long long _count;
    NSArray *_POIs;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *POIs; // @synthesize POIs=_POIs;
@property(nonatomic) long long count; // @synthesize count=_count;

@end

