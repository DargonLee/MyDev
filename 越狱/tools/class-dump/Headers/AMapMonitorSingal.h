//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AMapMonitorSingal : NSObject
{
    _Bool _isEnabled;
    _Bool _hasInstalled;
    CDUnknownBlockType _callback;
    NSMutableDictionary *_originalSignalAction;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *originalSignalAction; // @synthesize originalSignalAction=_originalSignalAction;
@property(nonatomic) _Bool hasInstalled; // @synthesize hasInstalled=_hasInstalled;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (struct sigaction)handleSignal:(int)arg1 info:(struct __siginfo *)arg2 context:(void *)arg3 withCallStackSymbols:(id)arg4;
- (void)uninstallSingalHandle;
- (void)installSingalHandle;
@property _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (id)init;

@end

