//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APayAlertViewDelegate-Protocol.h"

@class APayAlertView, APayProcessor, APayRoute, NSCondition, NSDictionary, NSString, UIWindow;

@interface AlipaySDK : NSObject <APayAlertViewDelegate>
{
    _Bool _stopPayIn2S;
    _Bool _stopAuthIn2S;
    _Bool _stopFetchConfig;
    UIWindow *_targetWindow;
    NSString *_schemeStr;
    NSString *_executingOrderStr;
    CDUnknownBlockType _completionBlock;
    APayRoute *_route;
    APayProcessor *_processor;
    NSDictionary *_alertOkAction;
    NSDictionary *_alertCancelAction;
    NSCondition *_tidCondition;
    unsigned long long _areaType;
    APayAlertView *_alertView;
}

+ (void)stopLog;
+ (void)startLogWithBlock:(CDUnknownBlockType)arg1;
+ (id)defaultService;
@property(retain, nonatomic) APayAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) unsigned long long areaType; // @synthesize areaType=_areaType;
@property(nonatomic) _Bool stopFetchConfig; // @synthesize stopFetchConfig=_stopFetchConfig;
@property(nonatomic) _Bool stopAuthIn2S; // @synthesize stopAuthIn2S=_stopAuthIn2S;
@property(nonatomic) _Bool stopPayIn2S; // @synthesize stopPayIn2S=_stopPayIn2S;
@property(retain, nonatomic) NSCondition *tidCondition; // @synthesize tidCondition=_tidCondition;
@property(retain, nonatomic) NSDictionary *alertCancelAction; // @synthesize alertCancelAction=_alertCancelAction;
@property(retain, nonatomic) NSDictionary *alertOkAction; // @synthesize alertOkAction=_alertOkAction;
@property(readonly, nonatomic) APayProcessor *processor; // @synthesize processor=_processor;
@property(readonly, nonatomic) APayRoute *route; // @synthesize route=_route;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *executingOrderStr; // @synthesize executingOrderStr=_executingOrderStr;
@property(copy, nonatomic) NSString *schemeStr; // @synthesize schemeStr=_schemeStr;
@property(nonatomic) __weak UIWindow *targetWindow; // @synthesize targetWindow=_targetWindow;
- (void).cxx_destruct;
- (id)buildQueryStrWithOrder:(id)arg1 andExtraInfo:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)currentVersion;
- (_Bool)isLogined;
- (id)fetchTradeToken;
- (void)setUrl:(id)arg1;
- (void)removeAlipayObserver;
- (void)cleanInfoWhenGoPortal:(id)arg1;
- (void)cleanData;
- (id)valueFromResult:(id)arg1 withKey:(id)arg2 isNewModel:(_Bool)arg3;
- (_Bool)isNewModelResult:(id)arg1;
- (id)processTradeToken:(id)arg1;
- (void)callback:(CDUnknownBlockType)arg1 withMemo:(id)arg2 andResultStatus:(id)arg3;
- (void)fetchSdkConfigWithBlock:(CDUnknownBlockType)arg1;
- (void)callbackWithResult:(id)arg1;
- (void)onAdapterFinished;
- (void)queryTid;
- (id)queryTidFactor:(int)arg1;
- (id)dictionaryFromRegular:(id)arg1 pattern:(id)arg2;
- (void)processResultUrl:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)processAuthResult:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)authWithInfo:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)processAuth_V2Result:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)auth_V2WithInfo:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (_Bool)isShouldInterceptorDomain:(id)arg1;
- (id)fetchOrderInfoFromH5PayUrl:(id)arg1;
- (_Bool)payInterceptorWithUrl:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)payUrlOrder:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (long long)routeTypeWithConfig:(id)arg1;
- (void)handleRouteConfig:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)area4OrderStr:(id)arg1;
- (_Bool)checkValidityWithOrderStr:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)afterCallAlipay:(id)arg1 callSuccess:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)callAlipayByUL:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (_Bool)callAlipayBySchemes:(id)arg1 orderStr:(id)arg2;
- (void)callAlipayWithOrderStr:(id)arg1 dynamicLaunch:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)payWithType:(id)arg1 orderStr:(id)arg2 schemeStr:(id)arg3 dynamicLaunch:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (void)processOrderWithPaymentResult:(id)arg1 standbyCallback:(CDUnknownBlockType)arg2;
- (void)payOrder:(id)arg1 dynamicLaunch:(_Bool)arg2 fromScheme:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)payOrder:(id)arg1 fromScheme:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

