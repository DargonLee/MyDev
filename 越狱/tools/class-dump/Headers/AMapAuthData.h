//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface AMapAuthData : NSObject
{
    NSMutableData *_headerData;
    NSMutableData *_publicData;
    NSMutableData *_normalData;
    NSMutableData *_encryptedData;
    unsigned char _publicSectionNum;
    unsigned char _normalSectionNum;
    unsigned char _encryptedSectionNum;
    unsigned char _version;
    NSData *_reserveData;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSData *reserveData; // @synthesize reserveData=_reserveData;
@property(readonly, nonatomic) unsigned char version; // @synthesize version=_version;
- (id)encryptWithRowData:(id)arg1;
- (void)appendEncryptedDataArray:(id)arg1;
- (void)appendEncryptedData:(id)arg1;
- (void)appendNormalDataArray:(id)arg1;
- (void)appendNormalData:(id)arg1;
- (void)appendPublicDataArray:(id)arg1;
- (void)appendPublicData:(id)arg1;
@property(readonly, nonatomic) NSData *encryptedData;
@property(readonly, nonatomic) NSData *normalData;
@property(readonly, nonatomic) NSData *publicData;
@property(readonly, nonatomic) NSData *data;
- (id)initWithVersion:(unsigned char)arg1;
- (id)init;

@end

