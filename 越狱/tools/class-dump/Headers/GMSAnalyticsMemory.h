//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_GmmClearcutCountersDimensions, NSString;
@protocol GMSAnalyticsLogger;

@interface GMSAnalyticsMemory : NSObject
{
    id <GMSAnalyticsLogger> _analyticsLogger;
    NSString *_memUsagePreActivityCounterName;
    NSString *_memPercentagePreActivityCounterName;
    NSString *_memUsagePostStartupCounterName;
    NSString *_memPercentagePostStartupCounterName;
    unsigned long long _physicalMemory;
    GMSx_GmmClearcutCountersDimensions *_dims;
    _Bool _appInteractive;
}

- (void).cxx_destruct;
- (void)setAppInteractive:(_Bool)arg1;
- (void)recordMemory;
- (id)initWithAnalyticsLogger:(id)arg1;

@end

