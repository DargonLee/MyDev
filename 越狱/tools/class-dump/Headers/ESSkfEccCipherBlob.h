//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Serializer-Protocol.h"

@class NSData, NSString;

@interface ESSkfEccCipherBlob : NSObject <Serializer>
{
    NSData *_x;
    NSData *_y;
    NSData *_hashData;
    NSData *_cipher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *cipher; // @synthesize cipher=_cipher;
@property(retain, nonatomic) NSData *hashData; // @synthesize hashData=_hashData;
@property(retain, nonatomic) NSData *y; // @synthesize y=_y;
@property(retain, nonatomic) NSData *x; // @synthesize x=_x;
- (id)esData;
- (id)skfData;
- (id)initWithCCtype:(void *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

