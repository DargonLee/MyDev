//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, QYSBluetoothSealModelSealStatus;

@interface QYSBluetoothSealModelSeal : NSObject
{
    _Bool _bindUkey;
    NSString *_ID;
    NSString *_owner;
    NSString *_ownerName;
    NSString *_type;
    NSString *_sealKey;
    NSString *_createTime;
    NSString *_category;
    NSString *_deviceId;
    NSString *_location;
    NSString *_entityName;
    NSString *_entityId;
    unsigned long long _useCount;
    QYSBluetoothSealModelSealStatus *_status;
    NSString *_name;
    NSString *_bluetooth;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bluetooth; // @synthesize bluetooth=_bluetooth;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) QYSBluetoothSealModelSealStatus *status; // @synthesize status=_status;
@property(nonatomic) unsigned long long useCount; // @synthesize useCount=_useCount;
@property(nonatomic) _Bool bindUkey; // @synthesize bindUkey=_bindUkey;
@property(copy, nonatomic) NSString *entityId; // @synthesize entityId=_entityId;
@property(copy, nonatomic) NSString *entityName; // @synthesize entityName=_entityName;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *sealKey; // @synthesize sealKey=_sealKey;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(copy, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(copy, nonatomic) NSString *ID; // @synthesize ID=_ID;
- (id)initWithDictionary:(id)arg1;

@end

