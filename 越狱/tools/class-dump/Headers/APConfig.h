//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface APConfig : NSObject
{
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _lock;
    NSDictionary *_configContent;
}

+ (id)shared;
@property(retain, nonatomic) NSDictionary *configContent; // @synthesize configContent=_configContent;
- (void).cxx_destruct;
- (id)c64to10:(id)arg1;
- (id)factor;
- (_Bool)isEnable:(id)arg1;
- (id)utdid;
- (id)valueForKey:(id)arg1;
- (_Bool)isEnableForKey:(id)arg1;
- (void)updateConfig:(id)arg1;
- (id)init;

@end

