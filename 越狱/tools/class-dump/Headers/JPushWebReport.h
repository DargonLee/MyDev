//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHNewReport.h"

@class NSString;

@interface JPushWebReport : JPUSHNewReport
{
    NSString *_messageID;
    NSString *_dataStr;
    long long _result;
}

- (void).cxx_destruct;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *dataStr; // @synthesize dataStr=_dataStr;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (id)requestInfo;
- (void)handleResponse;
- (id)init;

@end

