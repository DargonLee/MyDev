//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHReceivedPacketController.h"

#import "JPUSHMessageProtocol-Protocol.h"

@class NSData, NSString;

@interface JPUSHMessageDispatchController : JPUSHReceivedPacketController <JPUSHMessageProtocol>
{
    unsigned short _statusCode;
    unsigned int _recv_commandType;
    unsigned long long _recv_fromUid;
    unsigned long long _recv_uniqueID;
    NSString *_recv_messageContent;
    NSData *_bodyData;
}

+ (void)addMessageBlock:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) unsigned short statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, retain, nonatomic) NSString *recv_messageContent; // @synthesize recv_messageContent=_recv_messageContent;
@property(readonly, nonatomic) unsigned long long recv_uniqueID; // @synthesize recv_uniqueID=_recv_uniqueID;
@property(readonly, nonatomic) unsigned int recv_commandType; // @synthesize recv_commandType=_recv_commandType;
@property(readonly, nonatomic) unsigned long long recv_fromUid; // @synthesize recv_fromUid=_recv_fromUid;
@property(readonly, copy) NSString *description;
- (void)sendReceipt;
- (id)getJPUSHMessageFromInfo:(id)arg1;
- (id)getDispatchMessageUserInfo;
- (void)handleReceipt;
- (id)initWithBuffer:(const char *)arg1 length:(unsigned short)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned char protocolType;
@property(readonly) Class superclass;

@end

