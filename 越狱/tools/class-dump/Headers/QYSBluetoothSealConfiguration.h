//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface QYSBluetoothSealConfiguration : NSObject
{
    NSString *_appDomain;
    NSString *_appToken;
    NSString *_appSecret;
    NSString *_userId;
    NSDictionary *_additionalHeader;
}

+ (id)configWithAppDomain:(id)arg1 userId:(id)arg2 additionalHeader:(id)arg3;
+ (id)configWithOpenAPIDomain:(id)arg1 openAPIAppToken:(id)arg2 openAPIAppSecret:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *additionalHeader; // @synthesize additionalHeader=_additionalHeader;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(copy, nonatomic) NSString *appToken; // @synthesize appToken=_appToken;
@property(copy, nonatomic) NSString *appDomain; // @synthesize appDomain=_appDomain;
- (id)getSignatureHeader;
- (id)getUserId;
- (id)getAppSecret;
- (id)getAppToken;
- (id)getAppDomain;

@end

