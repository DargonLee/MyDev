//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter;

@interface BMKLocationNotificationCenter : NSObject
{
    NSNotificationCenter *_center;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNotificationCenter *center; // @synthesize center=_center;
- (id)defaultCenter;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

