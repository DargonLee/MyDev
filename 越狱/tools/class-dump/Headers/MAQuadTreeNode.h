//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet;

@interface MAQuadTreeNode : NSObject
{
    NSMutableSet *_annotations;
    MAQuadTreeNode *_northWest;
    MAQuadTreeNode *_northEast;
    MAQuadTreeNode *_southWest;
    MAQuadTreeNode *_southEast;
    struct MAMapRect _boundingBox;
    unsigned long long _capacity;
    struct MAMapSize _minSize;
}

@property(readonly, nonatomic) struct MAMapSize minSize; // @synthesize minSize=_minSize;
@property(readonly, nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) struct MAMapRect boundingBox; // @synthesize boundingBox=_boundingBox;
@property(readonly, nonatomic) MAQuadTreeNode *southEast; // @synthesize southEast=_southEast;
@property(readonly, nonatomic) MAQuadTreeNode *southWest; // @synthesize southWest=_southWest;
@property(readonly, nonatomic) MAQuadTreeNode *northEast; // @synthesize northEast=_northEast;
@property(readonly, nonatomic) MAQuadTreeNode *northWest; // @synthesize northWest=_northWest;
- (void).cxx_destruct;
- (id)description;
- (void)addAnnotationsInBoundingBox:(struct MAMapRect)arg1 toMutableArray:(id)arg2;
- (unsigned long long)count;
@property(readonly, nonatomic) NSArray *annotations;
- (_Bool)containsAnnotation:(id)arg1;
- (_Bool)removeAnnotation:(id)arg1 atOldPosition:(struct CLLocationCoordinate2D)arg2;
- (void)removeAllObjects;
- (_Bool)removeAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)addAnnotationToChildNodes:(id)arg1;
- (id)initWithBoundingBox:(struct MAMapRect)arg1 capacity:(unsigned long long)arg2 minSize:(struct MAMapSize)arg3;

@end

