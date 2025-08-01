//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;
@protocol OS_dispatch_queue;

@interface JPushInMessageH5Manager : NSObject
{
    NSObject<OS_dispatch_queue> *dowloadQueue;
    _Bool _downimageing;
    unsigned long long _count;
    unsigned long long _maxCountLRU;
    NSMutableArray *_imageLocalpaths;
    long long _finshiImageCount;
    CDUnknownBlockType _imageblock;
    NSTimer *_beyondTime;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool downimageing; // @synthesize downimageing=_downimageing;
@property(nonatomic) __weak NSTimer *beyondTime; // @synthesize beyondTime=_beyondTime;
@property(copy, nonatomic) CDUnknownBlockType imageblock; // @synthesize imageblock=_imageblock;
@property(nonatomic) long long finshiImageCount; // @synthesize finshiImageCount=_finshiImageCount;
@property(retain, nonatomic) NSMutableArray *imageLocalpaths; // @synthesize imageLocalpaths=_imageLocalpaths;
@property(nonatomic) unsigned long long maxCountLRU; // @synthesize maxCountLRU=_maxCountLRU;
@property(readonly) unsigned long long count; // @synthesize count=_count;
- (void)addObjectLRU:(id)arg1;
- (void)adjustPositionLRU:(id)arg1;
- (void)cacheLruArray:(id)arg1;
- (id)lruArray;
- (void)removeFileWithpPath:(id)arg1;
- (_Bool)removeFilePathWithMouldID:(id)arg1;
- (id)imageTempPath;
- (id)directoryPath;
- (id)filePathWithMoulID:(id)arg1;
- (void)removeTempImagepathsInJCorethread:(id)arg1;
- (void)removeTempImagepaths:(id)arg1;
- (void)stopTimer;
- (void)downloadImagetimeout;
- (void)endDownloadImage:(_Bool)arg1;
- (id)setImageDataWithData:(id)arg1 withimageName:(id)arg2;
- (void)checkWhetherImagesFinsh;
- (void)handleDownloadImageResult:(id)arg1 withFilePath:(id)arg2 withIndex:(long long)arg3;
- (void)handleDownloadImageResultParam:(id)arg1;
- (void)downLoadImage:(id)arg1 withIndex:(long long)arg2;
- (void)dowloadImageInJCoreThread:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dowloadImageInJCoreThread:(id)arg1;
- (void)dowloadImage:(id)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)removeAllFilePath;
- (void)removeAllImage;
- (_Bool)setH5Data:(id)arg1 withMouldID:(id)arg2;
- (void)setH5Dic:(id)arg1;
- (void)downloadNetworkPath:(id)arg1 mouldID:(id)arg2 filePathBlock:(CDUnknownBlockType)arg3;
- (void)h5FilePathForMouldID:(id)arg1 withNetWorkPath:(id)arg2 filePathBlock:(CDUnknownBlockType)arg3;
- (void)filePathWithParam:(id)arg1;
- (void)filepath:(id)arg1 networkPath:(id)arg2 block:(CDUnknownBlockType)arg3;
- (id)initWithMaxCount:(unsigned long long)arg1;

@end

