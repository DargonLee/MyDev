//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MobClickEvent : NSObject
{
}

+ (void)eventJobForBegonia:(id)arg1 eventAttributes:(id)arg2 flags:(unsigned long long)arg3 etype:(int)arg4 type:(id)arg5;
+ (void)eventCalculation:(id)arg1 attributes:(id)arg2 count:(int)arg3;
+ (_Bool)deepLinkValidEventID:(id)arg1;
+ (void)deepLinkEvent:(id)arg1 attributes:(id)arg2 durations:(int)arg3;
+ (void)endLogPageView:(id)arg1;
+ (void)beginLogPageView:(id)arg1;
+ (void)logPageView:(id)arg1 seconds:(int)arg2;
+ (void)gameEvent:(id)arg1 attributes:(id)arg2 durations:(int)arg3;
+ (void)event:(id)arg1 attributes:(id)arg2 durations:(int)arg3;
+ (void)gameEvent:(id)arg1 attributes:(id)arg2;
+ (void)event:(id)arg1 attributes:(id)arg2;
+ (void)endEvent:(id)arg1 primarykey:(id)arg2;
+ (void)beginEvent:(id)arg1 primarykey:(id)arg2 attributes:(id)arg3;
+ (void)endEvent:(id)arg1 label:(id)arg2;
+ (void)beginEvent:(id)arg1 label:(id)arg2;
+ (void)endEvent:(id)arg1;
+ (void)beginEvent:(id)arg1;
+ (void)event:(id)arg1 label:(id)arg2 durations:(int)arg3;
+ (void)event:(id)arg1 durations:(int)arg2;
+ (void)event:(id)arg1 label:(id)arg2;
+ (void)event:(id)arg1;
+ (_Bool)validEventID:(id)arg1;
+ (id)filterAttributes:(id)arg1 type:(id)arg2;

@end

