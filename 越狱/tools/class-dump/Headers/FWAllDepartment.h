//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"
#import "WCTTableCoding-Protocol.h"

@class NSArray, NSString;

@interface FWAllDepartment : MTLModel <WCTTableCoding, MTLJSONSerializing>
{
    NSString *_userid;
    NSString *_mainDeptid;
    NSString *_alldeptid;
    NSArray *_alldeptids;
}

+ (id)JSONKeyPathsByPropertyKey;
+ (const struct WCTProperty *)alldeptids;
+ (const struct WCTProperty *)alldeptid;
+ (const struct WCTProperty *)mainDeptid;
+ (const struct WCTProperty *)userid;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *alldeptids; // @synthesize alldeptids=_alldeptids;
@property(copy, nonatomic) NSString *alldeptid; // @synthesize alldeptid=_alldeptid;
@property(copy, nonatomic) NSString *mainDeptid; // @synthesize mainDeptid=_mainDeptid;
@property(copy, nonatomic) NSString *userid; // @synthesize userid=_userid;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

