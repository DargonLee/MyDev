//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JPUSHNewRequest.h"

@class NSString;

@interface JPUSHUserPropertyRequest : JPUSHNewRequest
{
    unsigned char _type;
    NSString *_content;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (id)bodyData;
- (id)init;

@end

