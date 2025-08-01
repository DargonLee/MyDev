//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSFeatureWithServerID-Protocol.h"

@class GMSPointOfInterestExtensions, GMSRenderOpInfo, NSSet, NSString;
@protocol GMSStyleTable;

@interface GMSPointOfInterest : NSObject <GMSFeatureWithServerID>
{
    vector_adfa1f2f _absolutePositions;
    vector_0dce662e _relativePositions;
    struct Alignment _primaryRelativePosition;
    struct LabelGroup _primaryLabelGroup;
    struct LabelGroup _secondaryLabelGroup;
    _Bool _hideIconWhenPinned;
    short _rank;
    int _sourceTileZoom;
    int _veType;
    float _minZoomLevel;
    float _maxZoomLevel;
    int _attributes;
    GMSRenderOpInfo *_renderOpInfo;
    GMSPointOfInterestExtensions *_extensions;
    struct Point2D _location;
    NSString *_name;
    NSString *_snippet;
    NSSet *_styleTransformTags;
    id <GMSStyleTable> _overrideStyleTable;
    struct GMSFeatureID _serverID;
    struct StyleID _stylingID;
    struct StyleID _layoutStylingID;
}

+ (id)unpackedPOIWithProto:(id)arg1 wireContext:(id)arg2;
@property(readonly, nonatomic) int attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) _Bool hideIconWhenPinned; // @synthesize hideIconWhenPinned=_hideIconWhenPinned;
@property(retain, nonatomic) id <GMSStyleTable> overrideStyleTable; // @synthesize overrideStyleTable=_overrideStyleTable;
@property(nonatomic) float maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(nonatomic) float minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property(readonly, nonatomic) int veType; // @synthesize veType=_veType;
@property(readonly, nonatomic) short rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) NSSet *styleTransformTags; // @synthesize styleTransformTags=_styleTransformTags;
@property(readonly, nonatomic) struct StyleID layoutStylingID; // @synthesize layoutStylingID=_layoutStylingID;
@property(readonly, nonatomic) struct StyleID stylingID; // @synthesize stylingID=_stylingID;
@property(readonly, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) struct Point2D location; // @synthesize location=_location;
@property(readonly, nonatomic) int sourceTileZoom; // @synthesize sourceTileZoom=_sourceTileZoom;
@property(readonly, nonatomic) GMSPointOfInterestExtensions *extensions; // @synthesize extensions=_extensions;
@property(readonly, nonatomic) GMSRenderOpInfo *renderOpInfo; // @synthesize renderOpInfo=_renderOpInfo;
@property(readonly, nonatomic) struct GMSFeatureID serverID; // @synthesize serverID=_serverID;
@property(readonly, nonatomic) const struct Alignment *primaryRelativePosition; // @synthesize primaryRelativePosition=_primaryRelativePosition;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)type;
@property(readonly, nonatomic) _Bool isHighlightableArea;
- (id)styleForStyleTable:(id)arg1 zoom:(int)arg2;
@property(readonly, nonatomic) struct GMSFeatureID fullFeatureID;
@property(readonly, nonatomic) NSString *query;
@property(readonly, nonatomic) STLRange_34380436 relativePositions;
@property(readonly, nonatomic) STLRange_5fcae3ea absolutePositions;
@property(readonly, nonatomic) const struct LabelGroup *secondaryLabelGroup;
@property(readonly, nonatomic) const struct LabelGroup *primaryLabelGroup;
@property(readonly, nonatomic) _Bool isLandmarkPOI;
- (_Bool)canFlip;
@property(readonly, nonatomic) _Bool hidesLabelWhenTilted;
@property(readonly, nonatomic, getter=isSecondaryLabelOptional) _Bool secondaryLabelOptional;
@property(readonly, nonatomic, getter=isRequired) _Bool required;
@property(readonly, nonatomic, getter=isRequiredWithoutClobbering) _Bool requiredWithoutClobbering;
@property(readonly, nonatomic, getter=isRequiredWithClobbering) _Bool requiredWithClobbering;
@property(readonly, nonatomic) _Bool isSmartMapsPOI;
@property(readonly, nonatomic) _Bool isAd;
@property(readonly, nonatomic) _Bool isIncident;
@property(readonly, nonatomic, getter=isSuitableForDepartureBoard) _Bool suitableForDepartureBoard;
@property(readonly, nonatomic) _Bool isSearchResult;
@property(readonly, nonatomic, getter=isClickable) _Bool clickable;
@property(readonly, nonatomic) _Bool isCounterfactual;
@property(readonly, nonatomic, getter=isPromoted) _Bool promoted;
@property(readonly, nonatomic, getter=isSpotlitPin) _Bool spotlitPin;
@property(readonly, copy) NSString *description;
- (id)initWithRenderOpInfo:(id)arg1 extensions:(id)arg2 sourceTileZoom:(int)arg3 location:(const struct Point2D *)arg4 serverID:(struct GMSFeatureID)arg5 mapsEngineID:(const struct MapsEngineID *)arg6 absolutePositions:(vector_adfa1f2f *)arg7 primaryLabelGroup:(struct LabelGroup *)arg8 secondaryLabelGroup:(struct LabelGroup *)arg9 relativePositions:(vector_0dce662e *)arg10 stylingID:(const struct StyleID *)arg11 layoutStylingID:(const struct StyleID *)arg12 styleTransformTags:(id)arg13 rank:(short)arg14 minTileZoom:(float)arg15 maxTileZoom:(float)arg16 attributes:(int)arg17 name:(id)arg18 veType:(int)arg19 hideIconWhenPinned:(_Bool)arg20 primaryRelativePosition:(const struct Alignment *)arg21;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

