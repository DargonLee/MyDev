//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AMapMonitorNSException : NSObject
{
    _Bool _isEnabled;
    _Bool _hasInstalled;
    CDUnknownBlockType _callback;
    CDUnknownFunctionPointerType _originalHandler;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasInstalled; // @synthesize hasInstalled=_hasInstalled;
@property(nonatomic) CDUnknownFunctionPointerType originalHandler; // @synthesize originalHandler=_originalHandler;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (CDUnknownFunctionPointerType)handleUncaughtException:(id)arg1;
- (void)uninstallNSExceptionHandle;
- (void)installNSExceptionHandle;
@property _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (id)init;

@end

