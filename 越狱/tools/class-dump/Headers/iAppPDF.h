//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface iAppPDF : NSObject
{
    _Bool _isAuthorized;
    _Bool _debugMode;
    unsigned long long _surplusDays;
}

+ (void)registerApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long surplusDays; // @synthesize surplusDays=_surplusDays;
@property(nonatomic, getter=isDebugMode) _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) _Bool isAuthorized; // @synthesize isAuthorized=_isAuthorized;
- (void)showLog:(id)arg1;
- (id)authorizedInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

