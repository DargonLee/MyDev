//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JCommonReportTimerManager, NSArray, NSString;

@interface JCommonPasteController : NSObject
{
    JCommonReportTimerManager *_collectTimerManager;
    JCommonReportTimerManager *_reportTimerManager;
    _Bool _monitorPasteboardChange;
    int _action;
    int _cacheLimit;
    long long _collectInterval;
    long long _reportInterval;
    NSArray *_pasteDatas;
    NSString *_lastPasteData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *lastPasteData; // @synthesize lastPasteData=_lastPasteData;
@property(retain, nonatomic) NSArray *pasteDatas; // @synthesize pasteDatas=_pasteDatas;
@property(nonatomic) _Bool monitorPasteboardChange; // @synthesize monitorPasteboardChange=_monitorPasteboardChange;
@property(nonatomic) int cacheLimit; // @synthesize cacheLimit=_cacheLimit;
@property(nonatomic) long long reportInterval; // @synthesize reportInterval=_reportInterval;
@property(nonatomic) long long collectInterval; // @synthesize collectInterval=_collectInterval;
@property(nonatomic) int action; // @synthesize action=_action;
- (void)handleCmdControl:(id)arg1;
- (void)handlePasteboardChanged:(id)arg1;
- (id)encryptKeyWithSeed:(long long)arg1;
- (void)triggerReportTimer:(id)arg1;
- (void)removeReportedPasteDatas:(id)arg1;
- (void)cachePasteDatas:(id)arg1;
- (void)triggerCollectTimer:(id)arg1;
- (id)filterPasteDictData:(id)arg1;
- (id)filterPasteArrayData:(id)arg1;
- (void)removeReportTimer;
- (void)addReportTimer;
- (void)endCollectAction;
- (void)startCollectAction;
- (void)stopPasteStrategy;
- (void)startPasteStrategy;
- (void)configInitData;
- (id)init;
- (void)dealloc;

@end

