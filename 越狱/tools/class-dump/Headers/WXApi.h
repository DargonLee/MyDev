//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXApi : NSObject
{
}

+ (void)checkUniversalLinkCallback:(CDUnknownBlockType)arg1 step:(long long)arg2 success:(_Bool)arg3 errorInfo:(id)arg4 suggestion:(id)arg5;
+ (void)checkUniversalLinkReady:(CDUnknownBlockType)arg1;
+ (void)stopLog;
+ (void)startLogByLevel:(long long)arg1 logDelegate:(id)arg2;
+ (void)startLogByLevel:(long long)arg1 logBlock:(CDUnknownBlockType)arg2;
+ (void)launchApplicationWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendResp:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (unsigned int)genAutoIncreaceID;
+ (id)genContextId:(id)arg1;
+ (void)launchWechatWithExtralUrl:(id)arg1 forceScheme:(_Bool)arg2 contextId:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (_Bool)isDefaultLaunchByScheme;
+ (void)sendReq:(id)arg1 isAutoResend:(_Bool)arg2 forceScheme:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)sendReq:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)sendAuthReq:(id)arg1 viewController:(id)arg2 delegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)delayLaunchWXWithRefreshTokenFail:(id)arg1;
+ (void)delaySendContextReq:(id)arg1;
+ (_Bool)fillAppData:(id)arg1 withResp:(id)arg2;
+ (_Bool)fillAppData:(id)arg1 withReq:(id)arg2;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenUniversalLink:(id)arg1 delegate:(id)arg2;
+ (_Bool)isURLContainApi:(id)arg1 url:(id)arg2;
+ (_Bool)openWXApp;
+ (unsigned int)tryGetWechatVersion;
+ (id)getApiVersion;
+ (id)getWXAppInstallUrl;
+ (_Bool)isWXAppSupportApi;
+ (_Bool)isWXAppInstalled;
+ (_Bool)isAppRegisterWechatSecheme:(id)arg1;
+ (_Bool)isAppRegisterQueryScheme:(id)arg1;
+ (_Bool)registerApp:(id)arg1 universalLink:(id)arg2;
+ (_Bool)handleOpenUniversalLinkCheck:(id)arg1;
+ (_Bool)handleOpenTypeWebViewWithSubscribeMiniProgramMsg:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenTypeWebViewWithInvoiceAuthInsert:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenTypeWebViewWithSubscribeMsg:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenTypeWebView:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenRankList:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenBusinessWebviewOpenUrl:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleOpenWebviewOpenUrl:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleChooseInvoice:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleChooseCard:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleAddCardOpenUrl:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleAuthOpenUrl:(id)arg1 delegate:(id)arg2;
+ (void)checkAndRecordTokenFromOpenUrlParams:(id)arg1;
+ (_Bool)handleResendContextReqBySchemeOpenUrl:(id)arg1 delegate:(id)arg2;
+ (_Bool)handleRefreshTokenOpenUrl:(id)arg1 delegate:(id)arg2;
+ (id)genSendMessageToWXReqExtraUrl:(id)arg1 appData:(id)arg2;
+ (id)genOpenTypeWebViewExtraUrl:(id)arg1;
+ (id)genHandleSubscribeMiniProgramMsgReqExtraUrl:(id)arg1;
+ (id)genInvoiceAuthInsertReqExtraUrl:(id)arg1;
+ (id)gensubscribeMsg:(id)arg1;
+ (id)genHandleScanResultExtraUrl:(id)arg1;
+ (id)genChooseInvoiceReqExtraUrl:(id)arg1;
+ (id)genChooseCardReqExtraUrl:(id)arg1;
+ (id)genAddCardToWXCardPackageReqExtraUrl:(id)arg1;
+ (id)genJoinChatRoomExtraUrl:(id)arg1;
+ (id)genCreateChatRoomExtraUrl:(id)arg1;
+ (id)genOpenBusinessViewExtraUrl:(id)arg1;
+ (id)genLaunchMiniProgramExtraUrl:(id)arg1 appData:(id)arg2;
+ (id)genOpenRankListExtraUrl:(id)arg1;
+ (id)genOpenBusinessWebviewExtraUrl:(id)arg1;
+ (id)genOpenWebviewExtralUrl:(id)arg1;
+ (id)genAuthReqExtraUrl:(id)arg1 appData:(id)arg2;
+ (id)genExtraUrlByReq:(id)arg1 withAppData:(id)arg2;

@end

