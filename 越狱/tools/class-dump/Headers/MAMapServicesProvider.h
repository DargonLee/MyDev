//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MAMapServicesProvider : NSObject
{
    NSString *_trafficServerAddress;
    NSString *_gridServerAddress;
    NSString *_satteliteServerAddress;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *satteliteServerAddress; // @synthesize satteliteServerAddress=_satteliteServerAddress;
@property(copy, nonatomic) NSString *gridServerAddress; // @synthesize gridServerAddress=_gridServerAddress;
@property(copy, nonatomic) NSString *trafficServerAddress; // @synthesize trafficServerAddress=_trafficServerAddress;
- (void).cxx_destruct;
- (id)init;

@end

