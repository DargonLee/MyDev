//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface GMSPolygon2D : NSObject <NSCopying>
{
    struct GMSContourList _positiveContours;
    struct GMSContourList _negativeContours;
    struct GMSContourList _allContours;
    _Bool _contoursUnioned;
    NSArray *_strokePolylines;
    NSArray *_strokePolylinesGL;
    struct Point2D _origin;
}

+ (id)polygonForPoints:(const vector_52d06928 *)arg1 holes:(const vector_f04d5db1 *)arg2;
+ (id)polygonForPoints:(const vector_52d06928 *)arg1;
@property(readonly, nonatomic) struct Point2D origin; // @synthesize origin=_origin;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)overlapsContours:(const struct GMSContourList *)arg1;
@property(readonly, nonatomic) NSArray *strokePolylines;
@property(readonly, nonatomic) NSArray *strokePolylinesGL;
@property(readonly, nonatomic) const struct GMSContourList *contourList;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPositiveContours:(struct GMSContourList *)arg1 negativeContours:(struct GMSContourList *)arg2 origin:(const struct Point2D *)arg3;

@end

