//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHNewReport.h"

@class NSString;

@interface JPUSHMessageReportRequest : JPUSHNewReport
{
    int _flag;
    long long _messageStateType;
    NSString *_messageID;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int flag; // @synthesize flag=_flag;
@property(readonly, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
@property(readonly, nonatomic) long long messageStateType; // @synthesize messageStateType=_messageStateType;
- (void)handleResponse;
- (id)requestInfo;
- (void)setInMessageType:(int)arg1 messageID:(id)arg2;
- (void)setActiveType:(int)arg1 messageID:(id)arg2 flag:(int)arg3;
- (id)init;

@end

