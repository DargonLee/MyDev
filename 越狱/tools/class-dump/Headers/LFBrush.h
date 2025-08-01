//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary, NSMutableArray;

@interface LFBrush : NSObject
{
    double _lineWidth;
    long long _level;
    NSMutableArray *_allPoints;
    NSBundle *_bundle;
}

+ (id)drawLayerWithTrackDict:(id)arg1;
+ (id)createShapeLayerWithPath:(id)arg1 lineWidth:(double)arg2 strokeColor:(id)arg3;
+ (id)createBezierPathWithPoint:(struct CGPoint)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSMutableArray *allPoints; // @synthesize allPoints=_allPoints;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) NSDictionary *allTracks;
@property(readonly, nonatomic) struct CGPoint previousPoint;
@property(readonly, nonatomic) struct CGPoint currentPoint;
- (id)createDrawLayerWithPoint:(struct CGPoint)arg1;
- (void)addPoint:(struct CGPoint)arg1;
- (id)init;

@end

