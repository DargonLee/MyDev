//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCORECacheChannelProtocol-Protocol.h"

@class NSString;

@interface JCommonCacheObj : NSObject <JCORECacheChannelProtocol>
{
    _Bool encrypt;
    NSString *key;
    id object;
    NSString *dirName;
    unsigned long long type;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool encrypt; // @synthesize encrypt;
@property(nonatomic) unsigned long long type; // @synthesize type;
@property(copy, nonatomic) NSString *dirName; // @synthesize dirName;
@property(retain, nonatomic) id object; // @synthesize object;
@property(copy, nonatomic) NSString *key; // @synthesize key;
- (id)initWithFileName:(id)arg1;
- (id)initWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

