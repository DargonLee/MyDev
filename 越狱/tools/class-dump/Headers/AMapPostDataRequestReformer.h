//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapRESTRequestReformer.h"

@class AMapAuthData, NSString;

@interface AMapPostDataRequestReformer : AMapRESTRequestReformer
{
    NSString *_key;
    AMapAuthData *_authData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMapAuthData *authData; // @synthesize authData=_authData;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
- (id)postData;
- (id)assembledURL:(id)arg1;
- (id)v6Url;
- (id)url;
- (id)parameters;
- (id)method;

@end

