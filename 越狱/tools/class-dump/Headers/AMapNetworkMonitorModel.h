//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURLSessionTaskMetrics;

@interface AMapNetworkMonitorModel : NSObject
{
    NSString *_serverIP;
    NSString *_urlPath;
    NSString *_csid;
    unsigned long long _degradeType;
    NSString *_clientIP;
    NSString *_clientPort;
    NSString *_serverPort;
    NSString *_dnsTime;
    NSString *_sslTime;
    NSString *_tcpTime;
    NSString *_connectTime;
    NSString *_firstByteTime;
    NSString *_packageTime;
    NSString *_writeTime;
    NSString *_totalTime;
    NSString *_beginTime;
    NSString *_endTime;
    NSString *_host;
    NSString *_path;
    NSURLSessionTaskMetrics *_metrics;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) NSString *totalTime; // @synthesize totalTime=_totalTime;
@property(copy, nonatomic) NSString *writeTime; // @synthesize writeTime=_writeTime;
@property(copy, nonatomic) NSString *packageTime; // @synthesize packageTime=_packageTime;
@property(copy, nonatomic) NSString *firstByteTime; // @synthesize firstByteTime=_firstByteTime;
@property(copy, nonatomic) NSString *connectTime; // @synthesize connectTime=_connectTime;
@property(copy, nonatomic) NSString *tcpTime; // @synthesize tcpTime=_tcpTime;
@property(copy, nonatomic) NSString *sslTime; // @synthesize sslTime=_sslTime;
@property(copy, nonatomic) NSString *dnsTime; // @synthesize dnsTime=_dnsTime;
@property(copy, nonatomic) NSString *serverPort; // @synthesize serverPort=_serverPort;
@property(copy, nonatomic) NSString *clientPort; // @synthesize clientPort=_clientPort;
@property(copy, nonatomic) NSString *clientIP; // @synthesize clientIP=_clientIP;
@property(nonatomic) unsigned long long degradeType; // @synthesize degradeType=_degradeType;
@property(copy, nonatomic) NSString *csid; // @synthesize csid=_csid;
@property(copy, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
@property(copy, nonatomic) NSString *serverIP; // @synthesize serverIP=_serverIP;
- (id)offline_errorsubcode;
- (id)offline_errorcode;
- (id)offline_datazize;
- (id)offline_degrade;
- (id)offline_totaltime;
- (id)offline_readtime;
- (id)offline_writetime;
- (id)offline_tcptime;
- (id)offline_ssltime;
- (id)offline_dnstime;
- (id)offline_connecttime;
- (id)offline_csid;
- (id)offline_path;
- (id)offline_hostname;
- (id)offline_serverIP;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)modelIdentifer;
- (id)realTimeHeader;
- (_Bool)isFail;
- (id)ipWithString:(id)arg1;
- (id)initWithTransactionMetrics:(id)arg1;

@end

