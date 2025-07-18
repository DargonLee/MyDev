//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, UIColor;

@interface RPageLayerData : NSObject <NSCoding>
{
    UIColor *_colorUI;
    NSMutableArray *_gridLineArray;
    NSMutableArray *_lineArray;
}

+ (id)layerWithColor:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *lineArray; // @synthesize lineArray=_lineArray;
@property(retain, nonatomic) NSMutableArray *gridLineArray; // @synthesize gridLineArray=_gridLineArray;
@property(retain, nonatomic) UIColor *colorUI; // @synthesize colorUI=_colorUI;
- (id)transTo:(struct CGSize)arg1 from:(struct CGRect)arg2 bornRect:(struct CGSize)arg3 rotateCenter:(struct CGPoint)arg4 trans:(struct CGAffineTransform)arg5;
- (id)verticalBezierPath:(double)arg1;
- (id)bezierPath;
- (_Bool)isFull;
- (unsigned long long)count;
- (void)removeLineFromLayer:(id)arg1;
- (void)addLineToLayer:(id)arg1;
- (id)allLine;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

