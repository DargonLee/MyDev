//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHRequest.h"

@class NSString;

@interface JPUSHDeviceTokenReportRequest : JPUSHRequest
{
    NSString *_invaildDeviceToken;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *invaildDeviceToken; // @synthesize invaildDeviceToken=_invaildDeviceToken;
- (void)handleResponse:(id)arg1;
- (Class)responseClass;
- (_Bool)packData;
- (id)init;

@end

