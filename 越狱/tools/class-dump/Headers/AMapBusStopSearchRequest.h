//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapBusStopSearchRequest : AMapSearchObject
{
    NSString *_keywords;
    NSString *_city;
    long long _offset;
    long long _page;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
- (id)init;

@end

