//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol WSVOverlayViewDelegate <NSObject>
- (void)needUnSelectAllCellAdjustViews;
- (void)onEditText:(NSString *)arg1;
- (void)onHandWrite:(int)arg1;
- (void)overlayViewThumbImageDidChanged:(UIImage *)arg1 atPage:(int)arg2;
@end

