//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JCOREHttpSisRequest : NSObject
{
    CDUnknownBlockType _resultHandler;
    NSString *_reportAddress;
    NSString *_aesKey;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *aesKey; // @synthesize aesKey=_aesKey;
@property(copy, nonatomic) NSString *reportAddress; // @synthesize reportAddress=_reportAddress;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (id)authorizationString;
- (id)httpRequest;
- (id)sisRequestInfo;
- (id)bodyData;
- (id)init;

@end

