//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface GMSIndoorBoundsTile : NSObject
{
    int _dataVersion;
    int _perTileEpoch;
    NSMutableDictionary *_areas;
}

@property(readonly, nonatomic) NSDictionary *areas; // @synthesize areas=_areas;
- (void).cxx_destruct;
- (_Bool)intersectsRegion2D:(const struct Region2D *)arg1;
- (_Bool)containsPoint:(const struct Point2D *)arg1;
- (id)mergedWithBoundsTile:(id)arg1;
- (_Bool)matchesDataVersion:(int)arg1 perTileEpoch:(int)arg2;
- (_Bool)hasBoundsForIndex:(int)arg1;
- (void)addTriangleList:(const struct TriangleList2D *)arg1 indexInTile:(int)arg2;
- (id)initWithDataVersion:(int)arg1 perTileEpoch:(int)arg2;

@end

