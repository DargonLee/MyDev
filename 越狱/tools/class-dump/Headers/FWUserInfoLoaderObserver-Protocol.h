//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNotification;

@protocol FWUserInfoLoaderObserver <NSObject>

@optional
- (void)groupUserInfoFailToLoad:(NSNotification *)arg1;
- (void)groupUserInfoDidLoad:(NSNotification *)arg1;
- (void)userInfoFailToLoad:(NSNotification *)arg1;
- (void)userInfoDidLoad:(NSNotification *)arg1;
@end

