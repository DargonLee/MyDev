//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;

@interface AUManager : NSObject
{
    _Bool _isPasteboardEnable;
    _Bool _canReset;
    _Bool _canActive;
    _Bool _isRunning;
    NSString *_appName;
    NSString *_audid;
    NSString *_appkey;
    NSString *_secret;
    NSTimer *_refreshDeviceInfoTimer;
    NSTimer *_refreshAudidTimer;
    double _enterBackgroundTimeInterval;
}

+ (void)utdidResetEnable:(_Bool)arg1;
+ (void)deactiveAndCloseCanActive;
+ (void)deactive;
+ (void)activeIfCan;
+ (void)active;
+ (id)sharedInstance;
@property(nonatomic) double enterBackgroundTimeInterval; // @synthesize enterBackgroundTimeInterval=_enterBackgroundTimeInterval;
@property(retain, nonatomic) NSTimer *refreshAudidTimer; // @synthesize refreshAudidTimer=_refreshAudidTimer;
@property(retain, nonatomic) NSTimer *refreshDeviceInfoTimer; // @synthesize refreshDeviceInfoTimer=_refreshDeviceInfoTimer;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool canActive; // @synthesize canActive=_canActive;
@property(nonatomic) _Bool canReset; // @synthesize canReset=_canReset;
@property(nonatomic) _Bool isPasteboardEnable; // @synthesize isPasteboardEnable=_isPasteboardEnable;
@property(copy, nonatomic) NSString *secret; // @synthesize secret=_secret;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;
- (void)writeValueWithNumber:(id)arg1 forKey:(id)arg2;
- (id)readNumberForKey:(id)arg1;
- (void)writePasteboardEnable:(_Bool)arg1;
- (_Bool)readPasteboardEnable;
- (void)writeCanReset:(_Bool)arg1;
- (_Bool)readCanReset;
- (void)writeCanActive:(_Bool)arg1;
- (_Bool)readCanActive;
- (void)updateSysConfigValue:(id)arg1 sysKey:(id)arg2;
- (void)saveAudidToPasteboardWithAudid:(id)arg1;
- (void)refreshAudidFromPasteboard;
- (void)refreshAudid;
- (void)cleanAudid;
- (void)saveAudid:(id)arg1;
- (void)updateAudid:(id)arg1;
- (void)updateUtdid:(id)arg1;
- (void)registerConfig;
- (void)unregisterNotifications;
- (void)registerNotifications;
- (void)switchToForegroundMode;
- (void)switchToBackgroundMode;
- (void)_stopActions;
- (void)stopActions;
- (void)startActions:(_Bool)arg1;
- (void)receiveNotification:(id)arg1;
- (void)utdidResetEnable:(_Bool)arg1;
- (void)deactive;
- (void)deactiveAndCloseCanActive;
- (void)_active;
@property(copy, nonatomic) NSString *audid; // @synthesize audid=_audid;
- (void)activeIfCan;
- (void)active;
- (id)init;

@end

