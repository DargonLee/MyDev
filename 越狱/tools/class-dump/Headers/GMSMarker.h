//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSOverlay.h"

#import "CALayerDelegate-Protocol.h"
#import "GMSEntityTappableUIItem-Protocol.h"

@class GMSMarkerLayer, GMSPanoramaView, GMSStickerDrawStyle, NSString, UIImage, UIView;

@interface GMSMarker : GMSOverlay <CALayerDelegate, GMSEntityTappableUIItem>
{
    struct GMSEntityTapOrdering _tapOrdering;
    _Bool _lastLayerCaptured;
    struct CLLocationCoordinate2D _lastLayerPosition;
    double _lastLayerRotation;
    float _lastLayerOpacity;
    _Bool _tracksViewChanges;
    _Bool _tracksInfoWindowChanges;
    _Bool _draggable;
    _Bool _flat;
    GMSStickerDrawStyle *_style;
    NSString *_snippet;
    UIImage *_icon;
    UIView *_iconView;
    unsigned long long _appearAnimation;
    GMSMarkerLayer *_layer;
    GMSPanoramaView *_panoramaView;
    struct CGPoint _groundAnchor;
    struct CGPoint _infoWindowAnchor;
    struct CGSize _tapPadding;
}

+ (id)defaultMarker;
+ (id)markerImageWithColor:(id)arg1;
+ (id)markerWithPosition:(struct CLLocationCoordinate2D)arg1;
@property(nonatomic) struct CGSize tapPadding; // @synthesize tapPadding=_tapPadding;
@property(nonatomic) __weak GMSPanoramaView *panoramaView; // @synthesize panoramaView=_panoramaView;
@property(readonly, nonatomic) GMSMarkerLayer *layer; // @synthesize layer=_layer;
@property(nonatomic, getter=isFlat) _Bool flat; // @synthesize flat=_flat;
@property(nonatomic, getter=isDraggable) _Bool draggable; // @synthesize draggable=_draggable;
@property(nonatomic) unsigned long long appearAnimation; // @synthesize appearAnimation=_appearAnimation;
@property(nonatomic) struct CGPoint infoWindowAnchor; // @synthesize infoWindowAnchor=_infoWindowAnchor;
@property(nonatomic) struct CGPoint groundAnchor; // @synthesize groundAnchor=_groundAnchor;
@property(nonatomic) _Bool tracksInfoWindowChanges; // @synthesize tracksInfoWindowChanges=_tracksInfoWindowChanges;
@property(nonatomic) _Bool tracksViewChanges; // @synthesize tracksViewChanges=_tracksViewChanges;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *snippet; // @synthesize snippet=_snippet;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)createLayer;
- (struct CGRect)frameForCamera:(const reffed_ptr_329922e5 *)arg1;
@property(readonly, nonatomic) GMSStickerDrawStyle *style; // @synthesize style=_style;
- (void)updateZOrderForCamera:(const reffed_ptr_329922e5 *)arg1;
- (_Bool)isHitByTapAt:(struct CGPoint)arg1 camera:(const reffed_ptr_329922e5 *)arg2;
- (void)captureLayerValues;
- (id)effectiveLayer;
- (void)displayLayer:(id)arg1;
@property(readonly, copy) NSString *description;
- (struct CGRect)accessibilityFrame;
- (_Bool)matchesTappableUIItem:(id)arg1;
- (void)wasTapped;
- (_Bool)shouldMoveToEndOnTap;
- (_Bool)isHitByTap:(const struct WrappedFrustum2D *)arg1 rectangle:(const struct Rectangle2f *)arg2 coords:(struct CGPoint)arg3 camera:(const reffed_ptr_329922e5 *)arg4;
- (void)setTapOrdering:(struct GMSEntityTapOrdering)arg1;
- (struct GMSEntityTapOrdering)tapOrdering;
- (void)updateOnMap;
- (void)setZIndex:(int)arg1;
@property(nonatomic) float opacity;
@property(nonatomic) double rotation;
@property(nonatomic) struct CLLocationCoordinate2D position;
- (unsigned long long)type;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

