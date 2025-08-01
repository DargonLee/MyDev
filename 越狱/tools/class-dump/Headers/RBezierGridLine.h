//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSMutableArray, NSString, UIColor;

@interface RBezierGridLine : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _isSign;
    int _tag;
    long long _ownerUid;
    UIColor *_color;
    double _editTime;
    NSString *_ownerName;
    NSString *_desc;
    NSMutableArray *_gridArray;
    NSMutableArray *_rectArray;
}

+ (id)gridLineFromJSONString:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *rectArray; // @synthesize rectArray=_rectArray;
@property(retain, nonatomic) NSMutableArray *gridArray; // @synthesize gridArray=_gridArray;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(nonatomic) double editTime; // @synthesize editTime=_editTime;
@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool isSign; // @synthesize isSign=_isSign;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long ownerUid; // @synthesize ownerUid=_ownerUid;
- (id)transTo:(struct CGSize)arg1 from:(struct CGRect)arg2 bornRect:(struct CGSize)arg3 rotateCenter:(struct CGPoint)arg4 trans:(struct CGAffineTransform)arg5;
- (void)reversalYAxes;
- (void)moveOriginTo:(struct CGPoint)arg1;
- (_Bool)isIntersectWithRect:(struct CGRect)arg1;
- (struct CGPoint)pdfToViewPoint:(struct CGPoint)arg1 zoomScale:(double)arg2;
- (id)verticalBezierPath:(double)arg1;
- (id)bezierPath;
- (long long)count;
- (id)lastObject;
- (id)pointAtIndex:(unsigned long long)arg1;
- (void)addGrid:(id)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

