//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_GTMSessionFetcherService, NSArray, NSDictionary, NSString;
@protocol GMSx_GTLRObjectClassResolver, GTMFetcherAuthorizationProtocol, OS_dispatch_queue;

@interface GMSx_GTLRService : NSObject
{
    NSString *_userAgent;
    NSString *_overrideUserAgent;
    NSDictionary *_serviceProperties;
    unsigned long long _uploadChunkSize;
    _Bool _allowInsecureQueries;
    _Bool _dataWrapperRequired;
    _Bool _retryEnabled;
    _Bool _shouldFetchNextPages;
    NSDictionary *_additionalHTTPHeaders;
    NSDictionary *_additionalURLQueryParameters;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSString *_apiKey;
    NSString *_apiKeyRestrictionBundleID;
    NSString *_batchPath;
    GMSx_GTMSessionFetcherService *_fetcherService;
    double _maxRetryInterval;
    NSObject<OS_dispatch_queue> *_parseQueue;
    NSArray *_prettyPrintQueryParameterNames;
    NSString *_resumableUploadPath;
    CDUnknownBlockType _retryBlock;
    NSString *_rootURLString;
    NSString *_servicePath;
    NSString *_simpleUploadPath;
    id <GMSx_GTLRObjectClassResolver> _objectClassResolver;
    CDUnknownBlockType _testBlock;
    CDUnknownBlockType _uploadProgressBlock;
    NSString *_userAgentAddition;
}

+ (id)URLWithString:(id)arg1 queryParameters:(id)arg2;
+ (unsigned long long)defaultServiceUploadChunkSize;
+ (id)kindStringToClassMap;
+ (Class)ticketClass;
+ (id)mockServiceWithFakedObject:(id)arg1 fakedError:(id)arg2;
@property(copy, nonatomic) NSString *userAgentAddition; // @synthesize userAgentAddition=_userAgentAddition;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressBlock; // @synthesize uploadProgressBlock=_uploadProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType testBlock; // @synthesize testBlock=_testBlock;
@property(retain, nonatomic) id <GMSx_GTLRObjectClassResolver> objectClassResolver; // @synthesize objectClassResolver=_objectClassResolver;
@property(copy, nonatomic) NSString *simpleUploadPath; // @synthesize simpleUploadPath=_simpleUploadPath;
@property(nonatomic) _Bool shouldFetchNextPages; // @synthesize shouldFetchNextPages=_shouldFetchNextPages;
@property(copy, nonatomic) NSString *servicePath; // @synthesize servicePath=_servicePath;
@property(copy, nonatomic) NSString *rootURLString; // @synthesize rootURLString=_rootURLString;
@property(nonatomic, getter=isRetryEnabled) _Bool retryEnabled; // @synthesize retryEnabled=_retryEnabled;
@property(copy) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(copy, nonatomic) NSString *resumableUploadPath; // @synthesize resumableUploadPath=_resumableUploadPath;
@property(retain, nonatomic) NSArray *prettyPrintQueryParameterNames; // @synthesize prettyPrintQueryParameterNames=_prettyPrintQueryParameterNames;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue; // @synthesize parseQueue=_parseQueue;
@property(nonatomic) double maxRetryInterval; // @synthesize maxRetryInterval=_maxRetryInterval;
@property(retain, nonatomic) GMSx_GTMSessionFetcherService *fetcherService; // @synthesize fetcherService=_fetcherService;
@property(nonatomic, getter=isDataWrapperRequired) _Bool dataWrapperRequired; // @synthesize dataWrapperRequired=_dataWrapperRequired;
@property(copy, nonatomic) NSString *batchPath; // @synthesize batchPath=_batchPath;
@property(copy, nonatomic) NSString *APIKeyRestrictionBundleID; // @synthesize APIKeyRestrictionBundleID=_apiKeyRestrictionBundleID;
@property(copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_apiKey;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool allowInsecureQueries; // @synthesize allowInsecureQueries=_allowInsecureQueries;
@property(copy) NSDictionary *additionalURLQueryParameters; // @synthesize additionalURLQueryParameters=_additionalURLQueryParameters;
@property(copy) NSDictionary *additionalHTTPHeaders; // @synthesize additionalHTTPHeaders=_additionalHTTPHeaders;
- (void).cxx_destruct;
- (void)setSurrogates:(id)arg1;
@property(nonatomic) unsigned long long serviceUploadChunkSize;
@property(retain, nonatomic) id <GTMFetcherAuthorizationProtocol> authorizer;
@property(copy, nonatomic) NSDictionary *serviceProperties;
- (void)overrideRequestUserAgent:(id)arg1;
@property(copy, nonatomic) NSString *userAgent;
- (void)setExactUserAgent:(id)arg1;
- (id)fetchObjectWithURL:(id)arg1 objectClass:(Class)arg2 executionParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)executeQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)executeQuery:(id)arg1 delegate:(id)arg2 didFinishSelector:(SEL)arg3;
- (id)URLFromQueryObject:(id)arg1 usePartialPaths:(_Bool)arg2 includeServiceURLQueryParams:(_Bool)arg3;
- (id)mergedNewResultObject:(id)arg1 oldResultObject:(id)arg2 forQuery:(id)arg3 ticket:(id)arg4;
- (_Bool)fetchNextPageWithQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 ticket:(id)arg3;
- (id)nextPageQueryForQuery:(id)arg1 result:(id)arg2 ticket:(id)arg3;
- (unsigned long long)simulatedUploadLengthForQuery:(id)arg1 dataToPost:(id)arg2;
- (void)simulateFetchWithTicket:(id)arg1 testBlock:(CDUnknownBlockType)arg2 dataToPost:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)invokeBatchCompletionsWithTicket:(id)arg1 batchQuery:(id)arg2 batchResult:(id)arg3 error:(id)arg4;
- (id)batchResultWithResponseParts:(id)arg1 batchClassMap:(id)arg2 objectClassResolver:(id)arg3;
- (void)getResponseLineFromData:(id)arg1 statusCode:(long long *)arg2 statusString:(id *)arg3;
- (id)responsePartWithMIMEPart:(id)arg1;
- (id)responsePartsWithMIMEParts:(id)arg1;
- (_Bool)isContentTypeMultipart:(id)arg1 boundary:(id *)arg2;
- (void)handleParsedObjectForFetcher:(id)arg1 executingQuery:(id)arg2 ticket:(id)arg3 error:(id)arg4 parsedObject:(id)arg5 hasSentParsingStartNotification:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)parseObjectFromDataOfFetcher:(id)arg1 executingQuery:(id)arg2 ticket:(id)arg3 error:(id)arg4 defaultClass:(Class)arg5 batchClassMap:(id)arg6 hasSentParsingStartNotification:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)prepareToParseObjectForFetcher:(id)arg1 executingQuery:(id)arg2 ticket:(id)arg3 error:(id)arg4 defaultClass:(Class)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)invokeProgressCallbackForTicket:(id)arg1 deliveredBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3;
- (id)fetchObjectWithURL:(id)arg1 objectClass:(Class)arg2 bodyObject:(id)arg3 ETag:(id)arg4 httpMethod:(id)arg5 mayAuthorize:(_Bool)arg6 completionHandler:(CDUnknownBlockType)arg7 executingQuery:(id)arg8 ticket:(id)arg9;
- (id)executeBatchQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 ticket:(id)arg3;
- (id)uploadFetcherWithRequest:(id)arg1 fetcherService:(id)arg2 params:(id)arg3;
- (id)fetchObjectWithURL:(id)arg1 objectClass:(Class)arg2 bodyObject:(id)arg3 dataToPost:(id)arg4 ETag:(id)arg5 httpMethod:(id)arg6 mayAuthorize:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8 executingQuery:(id)arg9 ticket:(id)arg10;
- (id)requestForQuery:(id)arg1;
- (id)objectRequestForURL:(id)arg1 object:(id)arg2 contentType:(id)arg3 contentLength:(id)arg4 ETag:(id)arg5 httpMethod:(id)arg6 additionalHeaders:(id)arg7 ticket:(id)arg8;
- (id)requestForURL:(id)arg1 ETag:(id)arg2 httpMethod:(id)arg3 ticket:(id)arg4;
- (void)setMainBundleIDRestrictionWithAPIKey:(id)arg1;
@property(readonly, nonatomic) NSString *requestUserAgent;
- (id)init;
- (_Bool)waitForTicket:(id)arg1 timeout:(double)arg2;

@end

