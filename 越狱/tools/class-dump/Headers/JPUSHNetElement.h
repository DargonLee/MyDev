//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCOREJSONProtocol-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface JPUSHNetElement : NSObject <JCOREJSONProtocol, NSCopying, NSCoding>
{
    unsigned char _version;
    unsigned char _protocolType;
    unsigned short _rid;
    unsigned long long _uid;
}

@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
@property(nonatomic) unsigned short rid; // @synthesize rid=_rid;
@property(nonatomic) unsigned char protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) unsigned char version; // @synthesize version=_version;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)jpush_jsonClassType;
- (void)jpush_fromJSONValue:(id)arg1;
- (id)jpush_toJSON;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

