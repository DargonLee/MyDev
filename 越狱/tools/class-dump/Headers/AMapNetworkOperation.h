//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "AMapNetworkSessionDelegate-Protocol.h"

@class AMapDNSResolver, NSData, NSDate, NSError, NSHTTPURLResponse, NSObject, NSOutputStream, NSRecursiveLock, NSSet, NSString, NSURLRequest, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol AMapRequestReformerProtocol, OS_dispatch_queue;

@interface AMapNetworkOperation : NSOperation <AMapNetworkSessionDelegate>
{
    _Bool _finished;
    _Bool _executing;
    _Bool _isIpV6Url;
    _Bool _isDownLevel;
    NSOutputStream *_outputStream;
    NSURLRequest *_request;
    NSHTTPURLResponse *_response;
    NSError *_error;
    NSData *_responseData;
    id _userData;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSRecursiveLock *_lock;
    NSSet *_runLoopModes;
    CDUnknownBlockType _downloadProgress;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _backgroundTaskCleanup;
    NSURLSessionTask *_sessionTask;
    long long _expectedSize;
    long long _totalBytesRead;
    NSDate *_startDate;
    NSDate *_endDate;
    id <AMapRequestReformerProtocol> _requestReformer;
    AMapDNSResolver *_dnsResolver;
    NSURLSessionTaskMetrics *_metrics;
}

+ (id)networkRequestThread;
+ (void)networkRequestThreadEntryPoint:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionTaskMetrics *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) AMapDNSResolver *dnsResolver; // @synthesize dnsResolver=_dnsResolver;
@property(nonatomic) _Bool isDownLevel; // @synthesize isDownLevel=_isDownLevel;
@property(nonatomic) _Bool isIpV6Url; // @synthesize isIpV6Url=_isIpV6Url;
@property(retain, nonatomic) id <AMapRequestReformerProtocol> requestReformer; // @synthesize requestReformer=_requestReformer;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long totalBytesRead; // @synthesize totalBytesRead=_totalBytesRead;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(retain, nonatomic) NSURLSessionTask *sessionTask; // @synthesize sessionTask=_sessionTask;
@property(copy, nonatomic) CDUnknownBlockType backgroundTaskCleanup; // @synthesize backgroundTaskCleanup=_backgroundTaskCleanup;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) CDUnknownBlockType downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(retain, nonatomic) NSSet *runLoopModes; // @synthesize runLoopModes=_runLoopModes;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
- (void)logNetPerformanceModel:(id)arg1;
- (void)logNetEvent;
- (_Bool)currentRequestSupportAPM;
- (unsigned long long)degradeType;
- (_Bool)canDegrage;
- (void)sessionTask:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (void)sessionTask:(id)arg1 didCompleteWithError:(id)arg2;
- (void)sessionTask:(id)arg1 didReceiveData:(id)arg2;
- (void)sessionTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)setShouldExecuteAsBackgroundTaskWithExpirationHandler:(CDUnknownBlockType)arg1;
- (void)setDownloadProgressBlock:(CDUnknownBlockType)arg1;
- (void)setCompletionHandlerBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (void)cancel;
- (void)start;
- (void)done;
- (void)reset;
- (void)invokeCompletionBlock;
- (void)startConnection;
- (void)cancelConnection;
- (void)deallocOperation;
- (void)dealloc;
- (id)init;
- (id)initWithReformer:(id)arg1;
- (id)initWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

