//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSUserDefaults;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AMapLogUploader : NSObject
{
    _Bool _upLoading;
    NSArray *_waitingUploadDirectorys;
    NSObject<OS_dispatch_queue> *_uploadDispatchQueue;
    NSUserDefaults *_userDefult;
    NSObject<OS_dispatch_semaphore> *_queueSemaphore;
    NSString *_synchronizeToken;
}

+ (id)logStringWithDictionary:(id)arg1 encrypted:(_Bool)arg2;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *synchronizeToken; // @synthesize synchronizeToken=_synchronizeToken;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *queueSemaphore; // @synthesize queueSemaphore=_queueSemaphore;
@property(retain, nonatomic) NSUserDefaults *userDefult; // @synthesize userDefult=_userDefult;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *uploadDispatchQueue; // @synthesize uploadDispatchQueue=_uploadDispatchQueue;
@property(readonly, nonatomic) NSArray *waitingUploadDirectorys; // @synthesize waitingUploadDirectorys=_waitingUploadDirectorys;
@property(readonly, getter=isUpLoading) _Bool upLoading; // @synthesize upLoading=_upLoading;
- (void)_updateWaitingUploadDirs;
- (_Bool)_currentUploadSizeExcessMaxOneDay:(id)arg1;
- (void)_updateTotalUploadSizeOneDay:(unsigned long long)arg1;
- (unsigned long long)_getSingleUploadSizeWithLevelStr:(id)arg1 componentName:(id)arg2;
- (void)_uploadLogArray:(id)arg1 componentName:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)_getUploadLogSize:(unsigned long long)arg1 levelStr:(id)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)setUpLoading:(_Bool)arg1;
- (void)uploadComponentName:(id)arg1 levelStr:(id)arg2 hotFile:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)uploadComponentName:(id)arg1 levelStr:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (id)init;
- (id)_initSingleton;

@end

