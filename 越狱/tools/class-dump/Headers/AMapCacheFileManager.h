//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface AMapCacheFileManager : NSObject
{
    NSString *_rootDirectory;
    NSString *_basePath;
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(readonly, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(readonly, nonatomic) NSString *rootDirectory; // @synthesize rootDirectory=_rootDirectory;
- (unsigned long long)fileSizeWithName:(id)arg1 AtPath:(id)arg2 error:(id *)arg3;
- (_Bool)fileIsExistWithPath:(id)arg1 isDirectory:(_Bool *)arg2;
- (id)cacheItemNameAtPath:(id)arg1 error:(id *)arg2;
- (id)filePathWithName:(id)arg1 atPath:(id)arg2 withDirectoryCreate:(_Bool)arg3;
- (_Bool)removeAllItemsAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)removeAllItemsAtPath:(id)arg1;
- (_Bool)removeItemWithName:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (_Bool)removeItemWithName:(id)arg1 atPath:(id)arg2;
- (id)cacheItemWithFileName:(id)arg1 atPath:(id)arg2;
- (unsigned long long)cachedItemsCountAtPath:(id)arg1;
- (id)cachedItemsAtPath:(id)arg1;
- (_Bool)cacheItem:(id)arg1 withFileName:(id)arg2 atPath:(id)arg3;
- (void)initBasePath;
- (id)initWithRootPath:(id)arg1;

@end

