//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YYDiskCache, YYMemoryCache;

@interface YYImageCache : NSObject
{
    _Bool _allowAnimatedImage;
    _Bool _decodeForDisplay;
    NSString *_name;
    YYMemoryCache *_memoryCache;
    YYDiskCache *_diskCache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
@property _Bool decodeForDisplay; // @synthesize decodeForDisplay=_decodeForDisplay;
@property _Bool allowAnimatedImage; // @synthesize allowAnimatedImage=_allowAnimatedImage;
@property(readonly) YYDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(readonly) YYMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)getImageDataForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)getImageDataForKey:(id)arg1;
- (void)getImageForKey:(id)arg1 withType:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)getImageForKey:(id)arg1 withType:(unsigned long long)arg2;
- (id)getImageForKey:(id)arg1;
- (_Bool)containsImageForKey:(id)arg1 withType:(unsigned long long)arg2;
- (_Bool)containsImageForKey:(id)arg1;
- (void)removeImageForKey:(id)arg1 withType:(unsigned long long)arg2;
- (void)removeImageForKey:(id)arg1;
- (void)setImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 withType:(unsigned long long)arg4;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)initWithPath:(id)arg1;
- (id)init;
- (id)imageFromData:(id)arg1;
- (unsigned long long)imageCost:(id)arg1;

@end

