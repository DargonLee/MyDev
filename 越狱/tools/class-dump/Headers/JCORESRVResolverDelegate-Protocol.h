//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JCORESRVResolver, NSDictionary, NSError;

@protocol JCORESRVResolverDelegate <NSObject>

@optional
- (void)srvResolver:(JCORESRVResolver *)arg1 didStopWithError:(NSError *)arg2;
- (void)srvResolver:(JCORESRVResolver *)arg1 didReceiveResult:(NSDictionary *)arg2;
@end

