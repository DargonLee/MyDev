//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JCORETcpObject.h"

@class NSString;

@interface JCORESDKVersion : JCORETcpObject
{
    unsigned char _sdkProperty;
    NSString *_sdkVersion;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned char sdkProperty; // @synthesize sdkProperty=_sdkProperty;
@property(copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (id)bodyData;
- (id)init;

@end

