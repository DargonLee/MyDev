//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "MAAnnotationContainerDelegate-Protocol.h"
#import "MAAnnotationContainerViewDelegate-Protocol.h"
#import "MAAnnotationManagerDelegate-Protocol.h"
#import "MACompassViewDelegate-Protocol.h"
#import "MAMapScrollViewDelegate-Protocol.h"
#import "MAOverlayContainerViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CLLocationManager, MAAnnotationContainerView, MAAnnotationManager, MAAnnotationView, MACompassView, MADataCache, MADataSourceContainer, MAMapScrollView, MAOverlayContainerView, MAScaleView, MATrafficSource, MAUserLocation, NSArray, NSNumber, NSOperationQueue, NSString, UIImageView, UILongPressGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;
@protocol MAAnnotation, MADataSource, MAMapViewDelegate;

@interface MAMapView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate, CLLocationManagerDelegate, MAMapScrollViewDelegate, MAOverlayContainerViewDelegate, MAAnnotationManagerDelegate, MAAnnotationContainerDelegate, MAAnnotationContainerViewDelegate, MACompassViewDelegate>
{
    UIView *_backgroundView;
    MAMapScrollView *_mapScrollView;
    UIView *_tiledLayersSuperview;
    UIView *_scrollContentView;
    UIView *_contentView;
    id <MADataSource> _baseMapSource;
    MADataSourceContainer *_dataSourceContainer;
    MATrafficSource *_trafficSource;
    MAOverlayContainerView *_overlayView;
    MAAnnotationManager *_annotationManager;
    MAAnnotationContainerView *_annotationContainerView;
    id <MAAnnotation> _annotationToSelect;
    double _metersPerPixel;
    double _zoomScale;
    double _screenScale;
    double _zoomLevel;
    double _lastZoomLevel;
    struct CGPoint _lastContentOffset;
    struct CGPoint _accumulatedDelta;
    struct CGSize _lastContentSize;
    _Bool _mapScrollViewIsZooming;
    struct CGAffineTransform _mapTransform;
    double _currentMapDegree;
    UITapGestureRecognizer *_doubleTapRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    UITapGestureRecognizer *_twoFingerSingleTapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIRotationGestureRecognizer *_rotationGestureRecognizer;
    NSOperationQueue *_moveDelegateQueue;
    NSOperationQueue *_zoomDelegateQueue;
    NSOperationQueue *_changeRegionDelegateQueue;
    _Bool _isChangeZoomEvent;
    _Bool _isChangeMoveEvent;
    _Bool _changeRegionEventAnimated;
    MAScaleView *_scaleView;
    MACompassView *_compassView;
    UIImageView *_logoView;
    CLLocationManager *_locationManager;
    MAUserLocation *_userLocation;
    MAAnnotationView *_userLocationView;
    _Bool _showTraffic;
    _Bool _scrollEnabled;
    _Bool _zoomEnabled;
    _Bool _zoomingInPivotsAroundCenter;
    _Bool _rotateEnabled;
    _Bool _showsCompass;
    _Bool _showsUserLocation;
    _Bool _debugTiles;
    _Bool _allowsAnnotationViewSorting;
    long long _mapType;
    double _minZoomLevel;
    double _maxZoomLevel;
    long long _userTrackingMode;
    NSNumber *_showsWorldMap;
    id <MAMapViewDelegate> _delegate;
    long long _language;
    double _limitRegionMinZoomLevel;
    MADataCache *_dataCache;
    struct MACoordinateRegion _limitRegion;
    struct MAMapRect _limitMapRect;
}

@property(retain, nonatomic) MADataCache *dataCache; // @synthesize dataCache=_dataCache;
@property(nonatomic) double limitRegionMinZoomLevel; // @synthesize limitRegionMinZoomLevel=_limitRegionMinZoomLevel;
@property(nonatomic) struct MAMapRect limitMapRect; // @synthesize limitMapRect=_limitMapRect;
@property(nonatomic) struct MACoordinateRegion limitRegion; // @synthesize limitRegion=_limitRegion;
@property(nonatomic) _Bool allowsAnnotationViewSorting; // @synthesize allowsAnnotationViewSorting=_allowsAnnotationViewSorting;
@property(nonatomic) long long language; // @synthesize language=_language;
@property(nonatomic) __weak id <MAMapViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool debugTiles; // @synthesize debugTiles=_debugTiles;
@property(retain, nonatomic, getter=isShowsWorldMap) NSNumber *showsWorldMap; // @synthesize showsWorldMap=_showsWorldMap;
@property(nonatomic) long long userTrackingMode; // @synthesize userTrackingMode=_userTrackingMode;
@property(nonatomic, getter=isShowsUserLocation) _Bool showsUserLocation; // @synthesize showsUserLocation=_showsUserLocation;
@property(nonatomic) _Bool showsCompass; // @synthesize showsCompass=_showsCompass;
@property(nonatomic, getter=isRotateEnabled) _Bool rotateEnabled; // @synthesize rotateEnabled=_rotateEnabled;
@property(nonatomic) _Bool zoomingInPivotsAroundCenter; // @synthesize zoomingInPivotsAroundCenter=_zoomingInPivotsAroundCenter;
@property(nonatomic) double maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property(nonatomic) double minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property(nonatomic, getter=isZoomEnabled) _Bool zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isShowTraffic) _Bool showTraffic; // @synthesize showTraffic=_showTraffic;
@property(nonatomic) long long mapType; // @synthesize mapType=_mapType;
- (void).cxx_destruct;
- (void)crash;
- (void)debugForFrames;
- (void)debugForAnnotations;
- (id)addLogoInImage:(id)arg1 position:(struct CGPoint)arg2;
- (id)takeSnapshotWithOverlays:(_Bool)arg1;
- (id)takeSnapshotInRect:(struct CGRect)arg1 withOverlays:(_Bool)arg2;
- (void)takeSnapshotInRect:(struct CGRect)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)takeSnapshotInRect:(struct CGRect)arg1;
- (struct CLLocationCoordinate2D)convertMapViewPointToCoordinate:(struct CGPoint)arg1;
- (void)annotationContainerView:(id)arg1 scrollToRevealCalloutWithOffset:(struct CGSize)arg2;
- (_Bool)annotationContainer:(id)arg1 shouldAnnotationViewCalloutHighlight:(id)arg2;
- (void)annotationContainer:(id)arg1 didAnnotationViewCalloutTapped:(id)arg2;
- (void)annotationContainer:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)annotationContainerView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(long long)arg3 fromOldState:(long long)arg4;
- (void)updateLockedAnnotationCoordIfNeeded:(id)arg1;
- (void)updateCalloutIfNecessaryForAnnotationView:(id)arg1;
- (void)updateAnnotationViewPosition:(id)arg1;
- (void)addAnnotationView:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)removeAnnotationView:(id)arg1;
- (void)deselectAnnotationView:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotationView:(id)arg1 animated:(_Bool)arg2;
- (void)moveAnnotationView:(id)arg1 fromCoordinate:(struct CLLocationCoordinate2D)arg2 animated:(_Bool)arg3 duration:(double)arg4;
- (void)annotationManager:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)annotationManager:(id)arg1 viewForAnnotation:(id)arg2;
- (void)annotationManager:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)annotationManager:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (double)scrollZoomScale;
- (double)currentZoomScale;
- (void)overlayContainerAddedDrawables:(id)arg1;
- (id)createDrawableForOverlay:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setAllowsBackgroundLocationUpdates:(_Bool)arg1;
- (_Bool)allowsBackgroundLocationUpdates;
- (void)setPausesLocationUpdatesAutomatically:(_Bool)arg1;
- (_Bool)pausesLocationUpdatesAutomatically;
- (double)headingFilter;
- (void)setHeadingFilter:(double)arg1;
- (double)desiredAccuracy;
- (void)setDesiredAccuracy:(double)arg1;
- (double)distanceFilter;
- (void)setDistanceFilter:(double)arg1;
- (void)updateUserLocationRepresentation:(id)arg1;
- (void)setUserTrackingMode:(long long)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic, getter=isUserLocationVisible) _Bool userLocationVisible;
@property(readonly, nonatomic) MAUserLocation *userLocation;
- (void)requestLocationAuthorizationIfNeed;
- (void)notifyDelegateUpdateUserLocation:(id)arg1 updatingLocation:(_Bool)arg2;
- (void)updateHeadingForDeviceOrientation;
- (id)internalInitUserLocationView;
- (void)updateUserLocationViewAnimated:(_Bool)arg1;
- (void)updateUserLocationHeading;
- (void)resetUserLocationHeading;
- (void)removeUserLocationView;
- (void)addUserLocationViewIfNeeded;
- (void)decreaseUserTrackingMode;
- (void)showOverlays:(id)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)showOverlays:(id)arg1 animated:(_Bool)arg2;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeOverlays:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlays:(id)arg1;
- (void)addOverlay:(id)arg1;
- (id)viewForOverlay:(id)arg1;
- (id)rendererForOverlay:(id)arg1;
@property(readonly, nonatomic) NSArray *overlays;
- (void)showAnnotations:(id)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)showAnnotations:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) struct CGRect annotationVisibleRect;
@property(copy, nonatomic) NSArray *selectedAnnotations;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (id)dequeueReusableAnnotationViewWithIdentifier:(id)arg1;
- (id)viewForAnnotation:(id)arg1;
- (id)annotationsInMapRect:(struct MAMapRect)arg1;
@property(readonly, nonatomic) NSArray *annotations;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1;
- (void)addTrafficSource;
- (double)zoomScaleFitMapRect:(struct MAMapRect)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (double)zoomScaleCoverMapRect:(struct MAMapRect)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (id)defaultAnnotationViewWithAnnotation:(id)arg1;
- (void)updateVisibleAnnotationsPosition;
- (void)updateVisibleAnnotations;
- (struct MAMapRect)annotationUpdateMapRect;
- (void)cancelAnnotationAnimations;
- (struct CLLocationCoordinate2D)normalizeCoordinate:(struct CLLocationCoordinate2D)arg1;
- (struct CGPoint)normalizeOffset:(struct CGPoint)arg1;
- (struct MAMapRect)normalizeMapRect:(struct MAMapRect)arg1;
- (double)normalizeDegree:(double)arg1;
- (double)normalizeZoomLevel:(double)arg1;
- (void)juggleForZoom;
- (double)animationDurationForMapScrollView;
- (void)rotateMapWithDegreeWithoutAnimation:(double)arg1;
- (void)internalSetMapRotation:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)setRotateDegree:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double rotateDegree;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleRotation:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (void)handleTwoFingerSingleTap:(id)arg1;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (void)doubleTapAtPoint:(struct CGPoint)arg1;
- (void)longPressAtPoint:(struct CGPoint)arg1;
- (void)singleTapAtPoint:(struct CGPoint)arg1;
- (void)notifyDelegateRegionDidChangeAnimated:(_Bool)arg1;
- (void)notifyDelegateRegionWillChangeAnimated:(_Bool)arg1;
- (void)completeRegionChangeEventByZoom:(_Bool)arg1 animated:(_Bool)arg2;
- (void)registerRegionChangeEventByZoom:(_Bool)arg1 animated:(_Bool)arg2;
- (void)notifyDelegateMapDidMoveByUser:(_Bool)arg1;
- (void)notifyDelegateMapWillMoveByUser:(_Bool)arg1;
- (void)notifyDelegateMapDidZoomByUser:(_Bool)arg1;
- (void)notifyDelegateMapWillZoomByUser:(_Bool)arg1;
- (void)completeZoomEvent;
- (void)registerZoomEventByUser:(_Bool)arg1;
- (void)completeMoveEvent;
- (void)registerMoveEventByUser:(_Bool)arg1;
- (_Bool)shouldZoomForScrollView:(id)arg1;
- (void)scrollView:(id)arg1 correctedContentSize:(inout struct CGSize *)arg2;
- (void)scrollView:(id)arg1 correctedContentOffset:(inout struct CGPoint *)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)createMapView;
- (struct MACoordinateRegion)regionFromRect:(struct CGRect)arg1;
- (struct CGRect)rectFromRegion:(struct MACoordinateRegion)arg1;
- (struct CGSize)viewSizeFromMapSize:(struct MAMapSize)arg1;
- (struct MAMapSize)mapSizeFromViewSize:(struct CGSize)arg1;
- (struct MAMapRect)mapRectFromRect:(struct CGRect)arg1;
- (struct CGRect)rectFromMapRect:(struct MAMapRect)arg1;
- (struct CLLocationCoordinate2D)coordinateFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointFromCoordinate:(struct CLLocationCoordinate2D)arg1;
- (struct MAMapPoint)mapPointFromPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointFromMapPoint:(struct MAMapPoint)arg1;
- (struct MACoordinateRegion)convertRect:(struct CGRect)arg1 toRegionFromView:(id)arg2;
- (struct CGRect)convertRegion:(struct MACoordinateRegion)arg1 toRectToView:(id)arg2;
- (struct CLLocationCoordinate2D)convertPoint:(struct CGPoint)arg1 toCoordinateFromView:(id)arg2;
- (struct CGPoint)convertCoordinate:(struct CLLocationCoordinate2D)arg1 toPointToView:(id)arg2;
- (_Bool)shouldExitUserTrackingModeDueToLimitMapRect;
- (void)setLimitMapRect:(struct MAMapRect)arg1 fitSize:(_Bool)arg2;
- (void)setLimitRegion:(struct MACoordinateRegion)arg1 fitSize:(_Bool)arg2;
- (void)moveBy:(struct CGSize)arg1;
- (void)internalZoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setVisibleMapRect:(struct MAMapRect)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(struct MAMapRect)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct MAMapRect visibleMapRect;
- (struct MAMapRect)mapRectThatFits:(struct MAMapRect)arg1 edgePadding:(struct UIEdgeInsets)arg2;
- (struct MAMapRect)mapRectThatFits:(struct MAMapRect)arg1;
- (struct MACoordinateRegion)regionThatFits:(struct MACoordinateRegion)arg1;
- (void)setRegion:(struct MACoordinateRegion)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct MACoordinateRegion region;
- (void)internalSetCenterMapPoint:(struct MAMapPoint)arg1 animated:(_Bool)arg2;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate;
- (void)setCenterMapPoint:(struct MAMapPoint)arg1 animated:(_Bool)arg2;
- (void)setCenterMapPoint:(struct MAMapPoint)arg1;
- (struct MAMapPoint)centerMapPoint;
- (void)zoomWithLatitudeLongitudeBoundsSouthWest:(struct CLLocationCoordinate2D)arg1 northEast:(struct CLLocationCoordinate2D)arg2 animated:(_Bool)arg3;
- (double)previousNativeZoomFactor;
- (double)nextNativeZoomFactor;
- (void)zoomOutToNextNativeZoomAt:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)zoomOutToNextNativeZoomAt:(struct CGPoint)arg1;
- (void)zoomInToNextNativeZoomAt:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)zoomInToNextNativeZoomAt:(struct CGPoint)arg1;
- (void)zoomByFactor:(double)arg1 near:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (_Bool)shouldZoomToTargetZoom:(double)arg1 withZoomFactor:(double)arg2;
- (void)internalSetZoomLevel:(double)arg1 atPivot:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (void)setZoomLevel:(double)arg1 atPivot:(struct CGPoint)arg2 animated:(_Bool)arg3;
- (void)setZoomLevel:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double zoomLevel;
- (void)clearDisk;
@property(readonly, nonatomic) _Bool isAbroad;
- (_Bool)scrollEnabled;
@property(nonatomic) double tileSourcesZoom;
@property(nonatomic) double tileSourcesMaxZoom;
@property(nonatomic) double tileSourcesMinZoom;
- (double)scrollViewMinZoomLevel;
@property(readonly, nonatomic) double screenScale;
- (void)setMetersPerPixel:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double metersPerPixel;
@property(retain, nonatomic) UIView *backgroundView;
- (void)reloadDataSourceAtIndex:(unsigned long long)arg1;
- (void)reloadDataSource:(id)arg1;
- (void)setHidden:(_Bool)arg1 forDataSourceAtIndex:(unsigned long long)arg2;
- (void)setHidden:(_Bool)arg1 forDataSource:(id)arg2;
- (void)moveDataSourceAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeDataSourceAtIndex:(unsigned long long)arg1;
- (void)removeDataSource:(id)arg1;
- (void)addDataSource:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addDataSource:(id)arg1;
- (void)setDataSources:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)dataSources;
- (id)dataSource;
- (id)dataSourceContainer;
- (void)removeAllCachedImages;
- (double)metersPerPointForZoomLevel:(double)arg1;
@property(readonly, nonatomic) double metersPerPointForCurrentZoomLevel;
- (void)updateMetersPerPixel:(double)arg1;
- (void)setCompassImage:(id)arg1;
@property(readonly, nonatomic) struct CGSize compassSize;
@property(nonatomic) struct CGPoint compassOrigin;
- (void)didCompassViewTapped;
- (void)updateCompassViewByDegree:(float)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)hideCompassView;
- (void)showCompassView;
- (void)initCompassView;
@property(readonly, nonatomic) struct CGSize scaleSize;
@property(nonatomic) struct CGPoint scaleOrigin;
@property(nonatomic) _Bool showsScale;
- (void)updateScaleViewWithPixelsPerMeter:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)updateScaleViewWithZoomLevel:(double)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (double)calculateDistanceInMetersForZoomLevel:(double)arg1;
- (void)initScaleView;
- (void)initLogoView;
@property(readonly, nonatomic) struct CGSize logoSize;
@property(nonatomic) struct CGPoint logoCenter;
- (void)updateLogoStatusForMapRegion;
@property(readonly, copy) NSString *description;
- (void)handleDidChangeOrientationNotification:(id)arg1;
- (void)handleWillChangeOrientationNotification:(id)arg1;
- (void)handleMemoryWarningNotification:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)deallocOperation;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)configBaseMapSource;
- (void)performInitializationWithDataSource:(id)arg1 centerCoordinate:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3 maxZoomLevel:(double)arg4 minZoomLevel:(double)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

