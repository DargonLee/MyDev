//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray, NSString;

@interface AMapCity : AMapSearchObject
{
    NSString *_city;
    NSString *_citycode;
    NSString *_adcode;
    long long _num;
    NSArray *_districts;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *districts; // @synthesize districts=_districts;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
- (id)init;

@end

