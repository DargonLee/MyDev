//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JCommonServiceController;

@interface JCommonService : NSObject
{
    JCommonServiceController *_client;
}

+ (void)setLocationInfo:(id)arg1;
+ (id)currentLocationInfo;
+ (void)setupService;
+ (void)setCrashLogON;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedService;
- (void).cxx_destruct;
@property(retain, nonatomic) JCommonServiceController *client; // @synthesize client=_client;
- (void)setup;

@end

