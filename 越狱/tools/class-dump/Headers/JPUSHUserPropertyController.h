//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface JPUSHUserPropertyController : NSObject
{
    double _uploadPropertyTime;
    unsigned char _uploadPropertyTimes;
    NSMutableDictionary *_ReqItemQueue;
}

- (void).cxx_destruct;
- (void)sendUserProperty:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)saveUserProperty:(id)arg1;
- (_Bool)isUserProperyUpload:(id)arg1;
- (void)setUserProperty:(id)arg1;
- (void)handleUserPropertyResponse:(id)arg1;
- (id)findRequest:(unsigned long long)arg1;
- (id)init;
- (void)dealloc;

@end

