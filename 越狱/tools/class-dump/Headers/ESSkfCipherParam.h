//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface ESSkfCipherParam : NSObject
{
    unsigned int _paddingType;
    unsigned int _feedBitLen;
    NSData *_IV;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int feedBitLen; // @synthesize feedBitLen=_feedBitLen;
@property(nonatomic) unsigned int paddingType; // @synthesize paddingType=_paddingType;
@property(retain, nonatomic) NSData *IV; // @synthesize IV=_IV;

@end

