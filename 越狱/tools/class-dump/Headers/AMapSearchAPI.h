//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMapNetworkManager, NSMapTable, NSString;
@protocol AMapSearchDelegate;

@interface AMapSearchAPI : NSObject
{
    id <AMapSearchDelegate> _delegate;
    long long _timeout;
    NSString *_language;
    AMapNetworkManager *_networkManager;
    NSMapTable *_requestOperationMapping;
}

+ (void)registerDelegateSelectors;
+ (void)registerResponseClasses;
+ (SEL)delegateSelectorForRequestClass:(Class)arg1;
+ (Class)responseClassForRequestClass:(Class)arg1;
+ (void)registerDelegateSelector:(SEL)arg1 forRequestClass:(Class)arg2;
+ (void)registerResponseClass:(Class)arg1 forRequestClass:(Class)arg2;
+ (id)responseClassMapping;
+ (id)delegateSelectorMapping;
+ (void)initOnce;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMapTable *requestOperationMapping; // @synthesize requestOperationMapping=_requestOperationMapping;
@property(retain, nonatomic) AMapNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) __weak id <AMapSearchDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAllOperations;
- (id)removeOperationForRequest:(id)arg1;
- (void)addOperation:(id)arg1 forRequest:(id)arg2;
- (_Bool)containsRequest:(id)arg1;
- (id)operationForRequest:(id)arg1;
- (_Bool)performReuseCacheWithRequest:(id)arg1;
- (void)performAOSRequestWithReformer:(id)arg1 request:(id)arg2;
- (void)performRequestWithReformer:(id)arg1 request:(id)arg2;
- (void)getReformerWithUploadInfo:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)additionalParameters;
- (void)invokeDelegateWithLocalError:(long long)arg1 info:(id)arg2 forRequest:(id)arg3;
- (void)invokeDelegateWithError:(id)arg1 forRequest:(id)arg2 hitCacheType:(unsigned long long)arg3;
- (void)invokeDelegateWithResponse:(id)arg1 request:(id)arg2 hitCacheType:(unsigned long long)arg3;
- (void)invokeDelegateWithResponse:(id)arg1 request:(id)arg2;
- (void)invokeDelegateWithError:(id)arg1 forRequest:(id)arg2;
- (void)invokeDelegateWithURLError:(id)arg1 forRequest:(id)arg2;
- (void)AMapNavigationShareSearch:(id)arg1;
- (void)AMapRouteShareSearch:(id)arg1;
- (void)AMapPOIShareSearch:(id)arg1;
- (void)AMapLocationShareSearch:(id)arg1;
- (void)AMapCloudPOILocalSearch:(id)arg1;
- (void)AMapCloudPOIIDSearch:(id)arg1;
- (void)AMapCloudPOIPolygonSearch:(id)arg1;
- (void)AMapCloudPOIAroundSearch:(id)arg1;
- (void)AMapNearbySearch:(id)arg1;
- (void)AMapDistanceSearch:(id)arg1;
- (void)AMapWeatherSearch:(id)arg1;
- (void)AMapFutureRouteSearch:(id)arg1;
- (void)AMapTruckRouteSearch:(id)arg1;
- (void)AMapRidingRouteSearch:(id)arg1;
- (void)AMapTransitRouteSearch:(id)arg1;
- (void)AMapWalkingRouteSearch:(id)arg1;
- (void)AMapDrivingRouteSearch:(id)arg1;
- (void)AMapDistrictSearch:(id)arg1;
- (void)AMapBusLineNameSearch:(id)arg1;
- (void)AMapBusLineIDSearch:(id)arg1;
- (void)AMapBusStopSearch:(id)arg1;
- (void)AMapInputTipsSearch:(id)arg1;
- (void)AMapReGoecodeSearch:(id)arg1;
- (void)AMapGeocodeSearch:(id)arg1;
- (void)AMapRoutePOISearch:(id)arg1;
- (void)AMapPOIPolygonSearch:(id)arg1;
- (void)AMapPOIAroundSearch:(id)arg1;
- (void)AMapPOIKeywordsSearch:(id)arg1;
- (void)AMapPOIIDSearch:(id)arg1;
- (void)performPOISearchWithBaseRequest:(id)arg1;
- (void)cancelAllRequests;
- (id)description;
- (void)dealloc;
- (void)updateRegeoMemoryCache;
- (id)init;

@end

