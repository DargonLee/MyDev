//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface _YYWebImageSetterDicForButton : NSObject
{
    NSMutableDictionary *_dic;
    NSObject<OS_dispatch_semaphore> *_lock;
}

- (void).cxx_destruct;
- (id)lazySetterForState:(id)arg1;
- (id)setterForState:(id)arg1;
- (id)init;

@end

