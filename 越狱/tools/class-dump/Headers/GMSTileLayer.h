//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSImageTileProvider, GMSMapView, GMSRenderTileProvider;
@protocol GMSTileInvalidator;

@interface GMSTileLayer : NSObject
{
    id <GMSTileInvalidator> _tileInvalidator;
    GMSImageTileProvider *_tileProvider;
    _Bool _fadeIn;
    int _zIndex;
    float _opacity;
    GMSMapView *_map;
    long long _tileSize;
}

@property(nonatomic) _Bool fadeIn; // @synthesize fadeIn=_fadeIn;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) long long tileSize; // @synthesize tileSize=_tileSize;
@property(nonatomic) int zIndex; // @synthesize zIndex=_zIndex;
@property(nonatomic) __weak GMSMapView *map; // @synthesize map=_map;
- (void).cxx_destruct;
- (void)rebindMap;
@property(nonatomic) __weak GMSRenderTileProvider *tileProvider;
@property(nonatomic) __weak id <GMSTileInvalidator> tileInvalidator;
- (void)clearTileCache;
- (void)requestTileForX:(unsigned long long)arg1 y:(unsigned long long)arg2 zoom:(unsigned long long)arg3 receiver:(id)arg4;
- (id)init;

@end

