//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WeChatApiUtil : NSObject
{
}

+ (unsigned int)genCurrentTime;
+ (id)sha1:(id)arg1;
+ (id)parseURLParams:(id)arg1;
+ (id)DecodeBase64:(id)arg1;
+ (id)DecodeWithBase64:(id)arg1;
+ (id)NsDataEncodeBase64:(id)arg1;
+ (id)EncodeBase64:(id)arg1;
+ (id)getSDKVersion;
+ (_Bool)isWXSupportUniversalLinkAPI;
+ (_Bool)isWXAppSupportApi;
+ (id)getAppUrlWithPlatformId:(id)arg1 withOtherArgs:(id)arg2;
+ (id)getAppUrlWithPlatformId:(id)arg1;
+ (_Bool)launchApp:(id)arg1;
+ (_Bool)isAppInstalledWithoutCatchException:(id)arg1;
+ (_Bool)isAppInstalledWithCatchException:(id)arg1;
+ (_Bool)isOpenUrlApiCall:(id)arg1 apiName:(id)arg2 appID:(id)arg3 universalLink:(id)arg4;
+ (_Bool)isAppOpenUrl:(id)arg1 appID:(id)arg2 universalLink:(id)arg3;
+ (id)genUniversalLinkPrefixWithAppId:(id)arg1 universalLink:(id)arg2;
+ (id)genSchemePrefixWithAppId:(id)arg1;
+ (id)getAppUrl:(id)arg1;
+ (id)getWechatUniversalLink:(id)arg1;
+ (id)getWechatSchemeUrl:(id)arg1;
+ (id)dataFromPropertyList:(id)arg1;
+ (id)propertyListFromData:(id)arg1;
+ (_Bool)isiPad;
+ (_Bool)is2xScreen;
+ (_Bool)isiOS13plus;
+ (_Bool)isiOS12plus;
+ (_Bool)isiOS10plus;

@end

