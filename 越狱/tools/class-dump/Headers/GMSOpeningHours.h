//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GMSOpeningHours : NSObject
{
    NSArray *_periods;
    NSArray *_weekdayText;
    long long _serverComputedOpenNowStatus;
}

@property(readonly, nonatomic) long long serverComputedOpenNowStatus; // @synthesize serverComputedOpenNowStatus=_serverComputedOpenNowStatus;
@property(readonly, nonatomic) NSArray *weekdayText; // @synthesize weekdayText=_weekdayText;
@property(readonly, nonatomic) NSArray *periods; // @synthesize periods=_periods;
- (void).cxx_destruct;
- (long long)openNowStatus;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToOpeningHours:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

@end

