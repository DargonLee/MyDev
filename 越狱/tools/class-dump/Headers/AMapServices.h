//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface AMapServices : NSObject <NSCopying, NSMutableCopying>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _enableHTTPS;
    _Bool _crashReportEnabled;
    _Bool _analyticsEnabled;
    NSString *_apiKey;
    long long _authorizationStatus;
    NSString *_authorizationInfo;
}

+ (id)sharedServices;
+ (id)getEncryptedXInfoData21;
+ (id)getEncryptedXInfoData20;
+ (id)publicPostDataWithComponent:(id)arg1 logVersion:(id)arg2;
+ (id)commonHTTPHeadersWithComponent:(id)arg1 logVersion:(id)arg2 withXinfo:(_Bool)arg3;
+ (id)postRequestHTTPHeadersWithComponent:(id)arg1 logVersion:(id)arg2;
+ (id)commonHTTPHeadersWithComponent:(id)arg1;
+ (id)patchRequestParams;
+ (id)platInfoWithComponent:(id)arg1;
+ (id)responseHeaderWithRestResponse:(id)arg1 response:(id)arg2 request:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool analyticsEnabled; // @synthesize analyticsEnabled=_analyticsEnabled;
@property(copy, nonatomic) NSString *authorizationInfo; // @synthesize authorizationInfo=_authorizationInfo;
@property long long authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property(nonatomic) _Bool crashReportEnabled; // @synthesize crashReportEnabled=_crashReportEnabled;
@property(nonatomic) _Bool enableHTTPS; // @synthesize enableHTTPS=_enableHTTPS;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
- (void)uploadAnalyticsInfo;
- (void)initAnalytics;
- (void)setUpAnalytics;
@property(readonly, nonatomic) NSString *identifier;
- (void)deallocOperation;
- (void)dealloc;
- (void)onNetworkTypeChanged:(id)arg1;
- (void)onReceiveMemoryWarning:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initSingleton;
- (void)handleCommonCloudConfigs:(id)arg1 withComponent:(id)arg2;
- (void)prepareCommonCloldConfigKeys:(id)arg1;
- (id)keyAuthInfoWithServerInfo:(id)arg1;
- (void)showKeyAuthorizationInfo:(id)arg1 responseHeader:(id)arg2 forComponent:(id)arg3;
- (void)sendStatisticsWithComponent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)requestAuthWithComponent:(id)arg1 authKeys:(id)arg2 params:(id)arg3 updateCache:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)sendAuthRequestWithComponent:(id)arg1 authKeys:(id)arg2 params:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)sendAuthRequestWithComponent:(id)arg1 authKeys:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerAuthWithComponent:(id)arg1 authKeys:(id)arg2 forceUpdate:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;
- (void)registerAuthWithComponent:(id)arg1 authKeys:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)registerWithComponent:(id)arg1 authKeys:(id)arg2 params:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)registerWithComponent:(id)arg1;
- (void)sendInitInfoWithComponent:(id)arg1;
- (void)validatingAPIKey;

@end

