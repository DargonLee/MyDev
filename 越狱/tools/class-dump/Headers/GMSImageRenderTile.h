//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSRenderTile-Protocol.h"

@class GMSTileCoords, GMSTileType, NSArray, NSData, NSString;
@protocol GMSEntityResources, GMSTileExpirationState;

@interface GMSImageRenderTile : NSObject <GMSRenderTile>
{
    id <GMSEntityResources> _entityResources;
    NSData *_imageData;
    reffed_ptr_757df3c3 _imageEntity;
    id <GMSTileExpirationState> _expirationState;
    char *_passID;
    _Bool _hasBeenDisplayed;
    _Bool _expired;
    _Bool _shouldRefetch;
    int _sourceTileDataVersion;
    int _majorEpoch;
    int _copyrightYear;
    void *_modelTile;
    GMSTileCoords *_coords;
    NSArray *_copyrights;
    NSArray *_imageryCopyrights;
    GMSTileType *_sourceTileType;
}

+ (id)imageTileWithImageTile:(id)arg1;
@property(nonatomic) _Bool shouldRefetch; // @synthesize shouldRefetch=_shouldRefetch;
@property(nonatomic, getter=isExpired) _Bool expired; // @synthesize expired=_expired;
@property(readonly, nonatomic) GMSTileType *sourceTileType; // @synthesize sourceTileType=_sourceTileType;
@property(readonly, nonatomic) int copyrightYear; // @synthesize copyrightYear=_copyrightYear;
@property(readonly, nonatomic) NSArray *imageryCopyrights; // @synthesize imageryCopyrights=_imageryCopyrights;
@property(readonly, nonatomic) NSArray *copyrights; // @synthesize copyrights=_copyrights;
@property(readonly, nonatomic) int majorEpoch; // @synthesize majorEpoch=_majorEpoch;
@property(readonly, nonatomic) int sourceTileDataVersion; // @synthesize sourceTileDataVersion=_sourceTileDataVersion;
@property(nonatomic) _Bool hasBeenDisplayed; // @synthesize hasBeenDisplayed=_hasBeenDisplayed;
@property(retain, nonatomic) GMSTileCoords *coords; // @synthesize coords=_coords;
@property(readonly, nonatomic) void *modelTile; // @synthesize modelTile=_modelTile;
- (id).cxx_construct;
- (void).cxx_destruct;
- (reffed_ptr_757df3c3)imageEntity;
- (void)applyDiffTiles:(id)arg1;
- (_Bool)canApplyDiffTilesInPlace:(id)arg1;
- (_Bool)isTileStoreTile;
- (_Bool)isEmpty;
- (struct Collidable2D *)baseLabelExcludedRegion;
- (_Bool)hasPerTileExpiredForTileService:(id)arg1;
- (_Bool)hasExpiredForTileService:(id)arg1 tileTypeExpirations:(id)arg2;
- (void)collectLabelableFeatures:(CDUnknownBlockType)arg1;
-     // Error parsing type: i48@0:8{objc_metadata_hider_ptr<gmscore::renderer::EntityRenderer>=^{EntityRenderer}}16^{Behavior=^^?{atomic<int>=Ai}*iI}24r^{reffed_ptr<gmscore::vector::Camera>=}32B40B44, name: updateWithRenderer:behavior:camera:animate:reduceMotion:
-     // Error parsing type: v36@0:8{objc_metadata_hider_ptr<gmscore::renderer::EntityRenderer>=^{EntityRenderer}}16^{Behavior=^^?{atomic<int>=Ai}*iI}24B32, name: removeFromRenderer:behavior:animate:
-     // Error parsing type: v32@0:8r^{Matrix4f={float4x4=[4]}}16r^{reffed_ptr<gmscore::vector::Camera>=}24, name: applyTransform:camera:
-     // Error parsing type: v36@0:8{objc_metadata_hider_ptr<gmscore::renderer::EntityRenderer>=^{EntityRenderer}}16^{Behavior=^^?{atomic<int>=Ai}*iI}24B32, name: addToRenderer:behavior:animate:
- (reffed_ptr_757df3c3)createEntityWithImageData:(reffed_ptr_5e8a2241)arg1 name:(const basic_string_90719d97 *)arg2;
- (void)buildEntitiesWithEntityResources:(id)arg1 resourceManager:(id)arg2;
@property(readonly, nonatomic) NSArray *annotations;
@property(readonly, nonatomic) int latestDiffTileEpoch;
@property(readonly, nonatomic) long long diffTileValidationTime;
- (char *)passID;
- (id)entityResources;
@property(readonly, nonatomic) _Bool contributesLabels;
@property(readonly, copy) NSString *description;
- (id)initWithImageTile:(id)arg1 pass:(const char **)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

