//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FWCountMsgModel : NSObject
{
    NSString *_extra;
    NSString *_messageid;
    NSString *_readjson;
    unsigned long long _conversationType;
}

+ (const struct WCTProperty *)messageid;
+ (const struct WCTProperty *)extra;
+ (const struct WCTProperty *)readjson;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long conversationType; // @synthesize conversationType=_conversationType;
@property(copy, nonatomic) NSString *readjson; // @synthesize readjson=_readjson;
@property(copy, nonatomic) NSString *messageid; // @synthesize messageid=_messageid;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;

@end

