//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LFAssetExportSession;

@protocol LFAssetExportSessionDelegate <NSObject>

@optional
- (_Bool)assetExportSession:(LFAssetExportSession *)arg1 renderFrame:(struct __CVBuffer *)arg2 withPresentationTime:(CDStruct_1b6d18a9)arg3 toBuffer:(struct __CVBuffer *)arg4;
- (void)assetExportSessionDidProgress:(LFAssetExportSession *)arg1;
@end

