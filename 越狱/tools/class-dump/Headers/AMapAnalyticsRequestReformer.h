//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapRequestReformer.h"

@class NSData, NSString;

@interface AMapAnalyticsRequestReformer : AMapRequestReformer
{
    NSString *_sKey;
    NSString *_product;
    long long _logtype;
    NSString *_platform;
    NSString *_channel;
    NSData *_pData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *pData; // @synthesize pData=_pData;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(nonatomic) long long logtype; // @synthesize logtype=_logtype;
@property(copy, nonatomic) NSString *product; // @synthesize product=_product;
@property(copy, nonatomic) NSString *sKey; // @synthesize sKey=_sKey;
- (id)signvalueWithData:(id)arg1;
@property(readonly, nonatomic) NSString *signvalue;
- (id)postData;
- (id)parameters;
- (id)v6BaseURL;
- (id)baseURL;
- (id)method;
- (id)initWithType:(long long)arg1 postData:(id)arg2;

@end

