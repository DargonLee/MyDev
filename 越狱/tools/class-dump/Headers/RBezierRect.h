//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSNumber, NSValue;

@interface RBezierRect : NSObject <NSCoding>
{
    NSValue *_beginPoint1;
    NSValue *_endPoint1;
    NSValue *_endPoint2;
    NSValue *_beginPoint2;
    NSNumber *_maxX;
    NSNumber *_maxY;
    NSNumber *_minX;
    NSNumber *_minY;
    NSNumber *_tag;
}

+ (id)rectWithCGRect:(struct CGRect)arg1;
+ (id)rectWithValue1:(id)arg1 value2:(id)arg2 value3:(id)arg3 value4:(id)arg4;
+ (id)rectWithPoint1:(struct CGPoint)arg1 point2:(struct CGPoint)arg2 point3:(struct CGPoint)arg3 point4:(struct CGPoint)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSNumber *minY; // @synthesize minY=_minY;
@property(retain, nonatomic) NSNumber *minX; // @synthesize minX=_minX;
@property(retain, nonatomic) NSNumber *maxY; // @synthesize maxY=_maxY;
@property(retain, nonatomic) NSNumber *maxX; // @synthesize maxX=_maxX;
@property(retain, nonatomic) NSValue *beginPoint2; // @synthesize beginPoint2=_beginPoint2;
@property(retain, nonatomic) NSValue *endPoint2; // @synthesize endPoint2=_endPoint2;
@property(retain, nonatomic) NSValue *endPoint1; // @synthesize endPoint1=_endPoint1;
@property(retain, nonatomic) NSValue *beginPoint1; // @synthesize beginPoint1=_beginPoint1;
- (double)getMinY;
- (double)getMinX;
- (double)getMaxY;
- (double)getMaxX;
- (void)refreshMinAndMax;
- (struct CGRect)maxRect;
- (id)rotateWithCenter:(struct CGPoint)arg1 trans:(struct CGAffineTransform)arg2;
- (id)transTo:(struct CGSize)arg1 from:(struct CGRect)arg2 bornRect:(struct CGSize)arg3 rotateCenter:(struct CGPoint)arg4 trans:(struct CGAffineTransform)arg5;
- (void)reversalYAxes;
- (void)moveOriginTo:(struct CGPoint)arg1;
- (_Bool)isIntersectWithRect:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

