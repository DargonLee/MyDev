//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGFaceQualityManager, NSArray, NSMutableArray;

@interface MGLiveErrorManager : NSObject
{
    MGFaceQualityManager *_qualityManager;
    long long _holdingErrorCount;
    NSArray *_errorArray;
    NSMutableArray *_tempArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *tempArray; // @synthesize tempArray=_tempArray;
@property(retain, nonatomic) NSArray *errorArray; // @synthesize errorArray=_errorArray;
@property(nonatomic) long long holdingErrorCount; // @synthesize holdingErrorCount=_holdingErrorCount;
@property(readonly, nonatomic) MGFaceQualityManager *qualityManager; // @synthesize qualityManager=_qualityManager;
- (void)resetErrorList;
- (id)checkImgWithMGFrame:(id)arg1 motionY:(double)arg2;
- (id)getMaxType:(id)arg1;
- (id)errprStringWithType:(long long)arg1;
- (id)init;
- (id)initWithFaceCenter:(struct CGPoint)arg1;

@end

