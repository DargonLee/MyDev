//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIColor;

@protocol KGDrawingTool <NSObject>
@property(nonatomic) double alpha;
@property(nonatomic) double width;
@property(retain, nonatomic) UIColor *color;
- (void)draw;
- (void)moveFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)initialPoint:(struct CGPoint)arg1;
@end

