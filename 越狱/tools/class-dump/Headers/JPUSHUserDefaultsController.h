//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol JPUSHUserDefaultsControllerDelegate;

@interface JPUSHUserDefaultsController : NSObject
{
    NSMutableDictionary *_infoDictionary;
    NSString *_lastSucceedConnectionAddress;
    unsigned int _sisHostIndex;
    NSString *_currentDeviceToken;
    NSString *_oldDeviceToken;
    id <JPUSHUserDefaultsControllerDelegate> _delegate;
}

+ (_Bool)isFirtsStart;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <JPUSHUserDefaultsControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(nonatomic) unsigned int sisHostIndex; // @synthesize sisHostIndex=_sisHostIndex;
@property(copy, nonatomic) NSString *oldDeviceToken; // @synthesize oldDeviceToken=_oldDeviceToken;
@property(copy, nonatomic) NSString *currentDeviceToken; // @synthesize currentDeviceToken=_currentDeviceToken;
- (id)createDeviceID;
- (id)getDeviceID;
@property(nonatomic, setter=setIMFlag:) unsigned char IMFlag;
- (void)clearAllCache;
- (_Bool)synchronize;
@property(nonatomic) double nextSisRequestTime;
@property(retain, nonatomic) NSArray *httpSisAddressList;
@property(retain, nonatomic) NSDictionary *reportAddressDict;
@property(retain, nonatomic) NSString *lastSuccessSisIp;
@property(retain, nonatomic) NSArray *sisReportList;
@property(retain, nonatomic) NSArray *sisIpsFromServer;
@property(retain, nonatomic) NSString *defaultSRVRecord; // @dynamic defaultSRVRecord;
@property(retain, nonatomic) NSString *defaultConnHost; // @dynamic defaultConnHost;
@property(retain, nonatomic) NSString *lastSucceedConnectionAddress; // @dynamic lastSucceedConnectionAddress;
@property(retain, nonatomic) NSString *backupUserReportAddress; // @dynamic backupUserReportAddress;
@property(retain, nonatomic) NSString *backupHttpReportAddress; // @dynamic backupHttpReportAddress;
@property(retain, nonatomic) NSString *defaultConAddress; // @dynamic defaultConAddress;
- (void)setUid:(unsigned long long)arg1 password:(id)arg2 registrationID:(id)arg3;
@property(readonly, nonatomic) _Bool verified;
@property(readonly, retain, nonatomic) NSString *registrationID;
@property(readonly, retain, nonatomic) NSString *password;
@property(readonly, nonatomic) unsigned long long uid;
@property(readonly, copy, nonatomic) NSString *openUdid;
- (void)setUploadedDeviceToken:(id)arg1;
- (_Bool)isAppRegistered;
@property(readonly, retain, nonatomic) NSString *appKey;
- (id)initWithBundleIdentifier:(id)arg1 appkey:(id)arg2 delegate:(id)arg3;
- (id)initWithBundleIdentifier:(id)arg1 appkey:(id)arg2;

@end

