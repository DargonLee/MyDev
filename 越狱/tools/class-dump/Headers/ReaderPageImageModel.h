//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

@interface ReaderPageImageModel : NSObject
{
    NSNumber *_pageIndex;
    NSMutableArray *_imageArray;
}

+ (id)pageImageDataWithIndex:(int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *imageArray; // @synthesize imageArray=_imageArray;
@property(retain, nonatomic) NSNumber *pageIndex; // @synthesize pageIndex=_pageIndex;
- (int)countOfImage;
- (void)addImageModel:(id)arg1;
- (void)removeImageModel:(id)arg1;
- (id)init;

@end

