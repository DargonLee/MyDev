//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHNewResponse.h"

@class NSDictionary;

@interface JPUSHInMessageResponse : JPUSHNewResponse
{
    NSDictionary *_recvContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *recvContent; // @synthesize recvContent=_recvContent;
- (void)handleReceipt;
- (id)initWithResponse:(id)arg1;

@end

