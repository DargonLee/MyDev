//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface FWTenantExtend : MTLModel <MTLJSONSerializing>
{
    NSString *_tenantName;
    NSString *_tenantId;
    NSString *_tenantCorpid;
    NSArray *_extendlist;
}

+ (id)JSONTransformerForKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *extendlist; // @synthesize extendlist=_extendlist;
@property(retain, nonatomic) NSString *tenantCorpid; // @synthesize tenantCorpid=_tenantCorpid;
@property(retain, nonatomic) NSString *tenantId; // @synthesize tenantId=_tenantId;
@property(retain, nonatomic) NSString *tenantName; // @synthesize tenantName=_tenantName;

@end

