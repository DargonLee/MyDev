//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMApiParametersProto, GMSx_GMMCPEnableFeatureParametersProto, GMSx_GMMImageryViewerParametersProto, GMSx_GMMLoggingParametersProto, GMSx_GMMNavigationParametersProto, GMSx_GMMNavigationSdkParametersProto, GMSx_GMMPromoParametersProto, GMSx_GMMServerSettingParametersProto, GMSx_GMMSpotlightHighlightingParameters, GMSx_GMMTaxiParameters, GMSx_GMMTextToSpeechParametersProto, GMSx_GMMTileTypeExpirationParametersProto, GMSx_GMMTileZoomProgressionProto, GMSx_GMMTransitTrackingParametersProto, GMSx_GMMUserGeneratedContentParametersProto, GMSx_GMMVectorMapsParametersProto, GMSx_GMPPaintParameterResponse;

@interface GMSx_GMMParameterGroupProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMApiParametersProto *api; // @dynamic api;
@property(retain, nonatomic) GMSx_GMMCPEnableFeatureParametersProto *enableFeatures; // @dynamic enableFeatures;
@property(nonatomic) _Bool hasApi; // @dynamic hasApi;
@property(nonatomic) _Bool hasEnableFeatures; // @dynamic hasEnableFeatures;
@property(nonatomic) _Bool hasHash_p; // @dynamic hasHash_p;
@property(nonatomic) _Bool hasImageryViewer; // @dynamic hasImageryViewer;
@property(nonatomic) _Bool hasLogging; // @dynamic hasLogging;
@property(nonatomic) _Bool hasNavigation; // @dynamic hasNavigation;
@property(nonatomic) _Bool hasNavigationSdk; // @dynamic hasNavigationSdk;
@property(nonatomic) _Bool hasPaintParameters; // @dynamic hasPaintParameters;
@property(nonatomic) _Bool hasPromo; // @dynamic hasPromo;
@property(nonatomic) _Bool hasServerSetting; // @dynamic hasServerSetting;
@property(nonatomic) _Bool hasSpotlightHighlighting; // @dynamic hasSpotlightHighlighting;
@property(nonatomic) _Bool hasTaxi; // @dynamic hasTaxi;
@property(nonatomic) _Bool hasTextToSpeech; // @dynamic hasTextToSpeech;
@property(nonatomic) _Bool hasTileTypeExpiration; // @dynamic hasTileTypeExpiration;
@property(nonatomic) _Bool hasTileZoomProgression; // @dynamic hasTileZoomProgression;
@property(nonatomic) _Bool hasTransitTracking; // @dynamic hasTransitTracking;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasUserGeneratedContent; // @dynamic hasUserGeneratedContent;
@property(nonatomic) _Bool hasVectorMaps; // @dynamic hasVectorMaps;
@property(nonatomic) unsigned long long hash_p; // @dynamic hash_p;
@property(retain, nonatomic) GMSx_GMMImageryViewerParametersProto *imageryViewer; // @dynamic imageryViewer;
@property(retain, nonatomic) GMSx_GMMLoggingParametersProto *logging; // @dynamic logging;
@property(retain, nonatomic) GMSx_GMMNavigationParametersProto *navigation; // @dynamic navigation;
@property(retain, nonatomic) GMSx_GMMNavigationSdkParametersProto *navigationSdk; // @dynamic navigationSdk;
@property(retain, nonatomic) GMSx_GMPPaintParameterResponse *paintParameters; // @dynamic paintParameters;
@property(retain, nonatomic) GMSx_GMMPromoParametersProto *promo; // @dynamic promo;
@property(retain, nonatomic) GMSx_GMMServerSettingParametersProto *serverSetting; // @dynamic serverSetting;
@property(retain, nonatomic) GMSx_GMMSpotlightHighlightingParameters *spotlightHighlighting; // @dynamic spotlightHighlighting;
@property(retain, nonatomic) GMSx_GMMTaxiParameters *taxi; // @dynamic taxi;
@property(retain, nonatomic) GMSx_GMMTextToSpeechParametersProto *textToSpeech; // @dynamic textToSpeech;
@property(retain, nonatomic) GMSx_GMMTileTypeExpirationParametersProto *tileTypeExpiration; // @dynamic tileTypeExpiration;
@property(retain, nonatomic) GMSx_GMMTileZoomProgressionProto *tileZoomProgression; // @dynamic tileZoomProgression;
@property(retain, nonatomic) GMSx_GMMTransitTrackingParametersProto *transitTracking; // @dynamic transitTracking;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) GMSx_GMMUserGeneratedContentParametersProto *userGeneratedContent; // @dynamic userGeneratedContent;
@property(retain, nonatomic) GMSx_GMMVectorMapsParametersProto *vectorMaps; // @dynamic vectorMaps;

@end

