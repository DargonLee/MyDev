//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapInputTipsSearchRequest : AMapSearchObject
{
    _Bool _cityLimit;
    NSString *_keywords;
    NSString *_city;
    NSString *_types;
    NSString *_location;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(nonatomic) _Bool cityLimit; // @synthesize cityLimit=_cityLimit;
@property(copy, nonatomic) NSString *types; // @synthesize types=_types;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
- (id)init;

@end

