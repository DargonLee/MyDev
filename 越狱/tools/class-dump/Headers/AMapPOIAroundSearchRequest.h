//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapPOISearchBaseRequest.h"

#import "AMapRequestCheckParamterProtocol-Protocol.h"
#import "AMapSearchRequestCacheProtocol-Protocol.h"

@class AMapGeoPoint, NSString;

@interface AMapPOIAroundSearchRequest : AMapPOISearchBaseRequest <AMapSearchRequestCacheProtocol, AMapRequestCheckParamterProtocol>
{
    _Bool _special;
    NSString *_city;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool special; // @synthesize special=_special;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
- (id)init;
@property(copy, nonatomic) NSString *cachedKey;
@property(copy, nonatomic) NSString *paramCompareString;
- (id)checkParameters;
- (_Bool)compareResultWithAnother:(id)arg1;
- (_Bool)isNeedCompareParam;
- (unsigned long long)cacheType;
- (_Bool)isSupportCache;
- (id)requestPath;
- (id)cacheCopy;
- (void)formattedCachedStringWithLanguage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *keywords; // @dynamic keywords;
@property(copy, nonatomic) AMapGeoPoint *location; // @dynamic location;
@property(nonatomic) long long radius; // @dynamic radius;
@property(readonly) Class superclass;

@end

