//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AMapLogCloudConfigUnit : NSObject
{
    _Bool _logEnable;
    _Bool _mobileUpload;
    _Bool _debugInfoLogWrite;
    _Bool _debugInfoLogUpload;
    NSString *_levelStr;
    double _lifeTimeOfLocalLog;
    NSArray *_ignoreLogSet;
    unsigned long long _maxSizeForSingleUpload;
    unsigned long long _threadValueOfUpload;
    unsigned long long _localCacheTotalSize;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long localCacheTotalSize; // @synthesize localCacheTotalSize=_localCacheTotalSize;
@property(readonly, nonatomic) unsigned long long threadValueOfUpload; // @synthesize threadValueOfUpload=_threadValueOfUpload;
@property(readonly, nonatomic) unsigned long long maxSizeForSingleUpload; // @synthesize maxSizeForSingleUpload=_maxSizeForSingleUpload;
@property(readonly, nonatomic) NSArray *ignoreLogSet; // @synthesize ignoreLogSet=_ignoreLogSet;
@property(readonly, nonatomic) _Bool debugInfoLogUpload; // @synthesize debugInfoLogUpload=_debugInfoLogUpload;
@property(readonly, nonatomic) _Bool debugInfoLogWrite; // @synthesize debugInfoLogWrite=_debugInfoLogWrite;
@property(readonly, nonatomic) _Bool mobileUpload; // @synthesize mobileUpload=_mobileUpload;
@property(readonly, nonatomic) _Bool logEnable; // @synthesize logEnable=_logEnable;
@property(readonly, nonatomic) double lifeTimeOfLocalLog; // @synthesize lifeTimeOfLocalLog=_lifeTimeOfLocalLog;
@property(readonly, copy, nonatomic) NSString *levelStr; // @synthesize levelStr=_levelStr;
- (void)_parseCloudConfig:(id)arg1;
- (id)initWithCloudConfig:(id)arg1 level:(id)arg2;

@end

