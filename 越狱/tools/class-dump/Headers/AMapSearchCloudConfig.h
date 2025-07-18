//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMapCacheFileManager, AMapSearchCacheCloudConfig;
@protocol OS_dispatch_queue;

@interface AMapSearchCloudConfig : NSObject
{
    AMapCacheFileManager *_fileManager;
    NSObject<OS_dispatch_queue> *_fileDispatchQueue;
    _Bool _allowRequestMemoryCache;
    double _requestCacheTime;
    int _requestCacheCount;
    _Bool _allowRegeoFormatLatLng;
    float _limitDistance;
    AMapSearchCacheCloudConfig *_regeoCacheConfig;
    AMapSearchCacheCloudConfig *_geoCacheConfig;
    AMapSearchCacheCloudConfig *_placeTextCacheConfig;
    AMapSearchCacheCloudConfig *_placeAroundCacheConfig;
    _Bool _rideAble;
    _Bool _walkAble;
    _Bool _truckAble;
    double _rideMaxLength;
    double _walkMaxLength;
    double _truckMaxLength;
    _Bool _passPointAble;
    int _passPointMaxCount;
    _Bool _passAreaAble;
    int _passAreaMaxCount;
    int _passAreaPointCount;
    double _passAreaMaxArea;
    _Bool _poiPageAble;
    int _poiPageMaxNum;
    int _poiPageMaxSize;
    int _keyWordLenMaxNum;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)keyWordLenMaxNum;
- (int)limitPoiPageMaxSize;
- (int)limitPoiPageMaxNum;
- (_Bool)shouldLimitPoiPage;
- (double)limitPassAreaMaxArea;
- (int)limitPassAreaPointCount;
- (int)limitPassAreaMaxCount;
- (_Bool)shouldLimitPassArea;
- (int)limitPassPointMaxCount;
- (_Bool)shouldLimitPassPoint;
- (double)limitTruckMaxLength;
- (double)limitWalkMaxLength;
- (double)limitRideMaxLength;
- (_Bool)shouldLimitTruck;
- (_Bool)shouldLimitWalk;
- (_Bool)shouldLimitRide;
- (id)placeAroundCacheConfig;
- (id)placeTextCacheConfig;
- (id)geoCacheConfig;
- (id)regeoCacheConfig;
- (_Bool)shouldRegeoFormatLatLng;
- (double)regeoCacheTimeLimit;
- (int)regeoCacheCountLimit;
- (_Bool)shouldRequestCache;
- (void)saveLastCloudConfig;
- (void)updateRequestCloundWithConfig:(id)arg1 response:(id)arg2 isCache:(_Bool)arg3;
- (void)updateControlWithResponse:(id)arg1;
- (void)reloadLastCloudConfig;
- (void)initProperties;
- (id)init;

@end

