//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;
@protocol OS_dispatch_queue;

@interface AMapLogFileManager : NSObject
{
    NSString *_logsDirectory;
    NSFileManager *_fileManager;
    NSObject<OS_dispatch_queue> *_fileOperateQueue;
}

+ (id)shareFileManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fileOperateQueue; // @synthesize fileOperateQueue=_fileOperateQueue;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, copy, nonatomic) NSString *logsDirectory; // @synthesize logsDirectory=_logsDirectory;
- (void)getFilePathsWithComponentName:(id)arg1 levelStr:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)getDirectoriesWithComponentName:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)deleteItemWithPath:(id)arg1;
- (id)attributesOfItemAtPath:(id)arg1;
- (_Bool)creatFileWithAbsolutePath:(id)arg1;
- (void)tryResetFileProtection:(id)arg1;
- (unsigned long long)directorySizeAtPath:(id)arg1;
- (unsigned long long)fileSizeAtPath:(id)arg1 error:(id *)arg2;
- (id)getContentOfDirectoryAtPath:(id)arg1 relativePath:(id)arg2 error:(id *)arg3;
- (id)getContentOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)getContentOfDirectoryAtAbsolutePath:(id)arg1 error:(id *)arg2;
- (_Bool)fileIsExist:(id)arg1;
- (_Bool)fileIsExistAtPath:(id)arg1;
- (_Bool)fileIsExist:(id)arg1 relativePath:(id)arg2;
- (_Bool)directoryIsExist:(id)arg1;
- (_Bool)directoryIsExist:(id)arg1 relativePath:(id)arg2;
- (_Bool)creatLogDirectory:(id)arg1 error:(id *)arg2;
- (_Bool)creatLogDirectory:(id)arg1 relativePath:(id)arg2 error:(id *)arg3;
- (id)initWithLogsDirectory:(id)arg1;
- (id)init;

@end

