//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMapResponseBuilder : NSObject
{
}

+ (id)buildV4ResponseWithData:(id)arg1 responseClass:(Class)arg2 error:(id *)arg3 outJsonDict:(id *)arg4;
+ (id)buildAOSResponseWithData:(id)arg1 responseClass:(Class)arg2 error:(id *)arg3 outJsonDict:(id *)arg4;
+ (void)buildNearbyResponseWithData:(id)arg1 error:(id *)arg2 outJsonDict:(id *)arg3;
+ (id)buildResponseWithData:(id)arg1 responseClass:(Class)arg2 error:(id *)arg3 outJsonDict:(id *)arg4;
+ (long long)errorCodeWithServerInfoCode:(long long)arg1;
+ (long long)errorCodeWithAOSInfoCode:(long long)arg1;
+ (id)errorWithYuntuErrorCode:(long long)arg1 info:(id)arg2;
+ (id)errorWithErrorCode:(long long)arg1 info:(id)arg2;
+ (id)errorWithURLError:(id)arg1;

@end

