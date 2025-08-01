//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCORETcpResponseProtocol-Protocol.h"

@class NSData, NSString;

@interface JCORETcpEventModel : NSObject <JCORETcpResponseProtocol>
{
    unsigned char version;
    unsigned char protocolType;
    unsigned char algorithm;
    unsigned short rid;
    unsigned short statusCode;
    unsigned long long uid;
    NSData *_bodyData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) unsigned short statusCode; // @synthesize statusCode;
@property(nonatomic) unsigned long long uid; // @synthesize uid;
@property(nonatomic) unsigned short rid; // @synthesize rid;
@property(nonatomic) unsigned char algorithm; // @synthesize algorithm;
@property(nonatomic) unsigned char protocolType; // @synthesize protocolType;
@property(nonatomic) unsigned char version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

