//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol WebViewJavascriptBridgeBaseDelegate;

@interface WebViewJavascriptBridgeBase : NSObject
{
    id _webViewDelegate;
    long long _uniqueId;
    id <WebViewJavascriptBridgeBaseDelegate> _delegate;
    NSMutableArray *_startupMessageQueue;
    NSMutableDictionary *_responseCallbacks;
    NSMutableDictionary *_messageHandlers;
    CDUnknownBlockType _messageHandler;
}

+ (void)setLogMaxLength:(int)arg1;
+ (void)enableLogging;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) NSMutableDictionary *messageHandlers; // @synthesize messageHandlers=_messageHandlers;
@property(retain, nonatomic) NSMutableDictionary *responseCallbacks; // @synthesize responseCallbacks=_responseCallbacks;
@property(retain, nonatomic) NSMutableArray *startupMessageQueue; // @synthesize startupMessageQueue=_startupMessageQueue;
@property(nonatomic) __weak id <WebViewJavascriptBridgeBaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_log:(id)arg1 json:(id)arg2;
- (id)_deserializeMessageJSON:(id)arg1;
- (id)_serializeMessage:(id)arg1 pretty:(_Bool)arg2;
- (void)_dispatchMessage:(id)arg1;
- (void)_queueMessage:(id)arg1;
- (void)_evaluateJavascript:(id)arg1;
- (void)disableJavscriptAlertBoxSafetyTimeout;
- (id)webViewJavascriptFetchQueyCommand;
- (id)webViewJavascriptCheckCommand;
- (void)logUnkownMessage:(id)arg1;
- (_Bool)isBridgeLoadedURL:(id)arg1;
- (_Bool)isQueueMessageURL:(id)arg1;
- (_Bool)isSchemeMatch:(id)arg1;
- (_Bool)isWebViewJavascriptBridgeURL:(id)arg1;
- (void)injectJavascriptFile;
- (void)flushMessageQueue:(id)arg1;
- (void)sendData:(id)arg1 responseCallback:(CDUnknownBlockType)arg2 handlerName:(id)arg3;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

