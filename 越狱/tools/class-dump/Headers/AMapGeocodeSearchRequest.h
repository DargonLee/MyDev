//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

#import "AMapSearchRequestCacheProtocol-Protocol.h"

@class NSString;

@interface AMapGeocodeSearchRequest : AMapSearchObject <AMapSearchRequestCacheProtocol>
{
    _Bool _isBatch;
    NSString *_address;
    NSString *_city;
    NSString *_country;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool isBatch; // @synthesize isBatch=_isBatch;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
- (id)init;
@property(copy, nonatomic) NSString *cachedKey;
- (unsigned long long)cacheType;
- (_Bool)isSupportCache;
- (id)requestPath;
- (id)cacheCopy;
- (void)formattedCachedStringWithLanguage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *paramCompareString;
@property(readonly) Class superclass;

@end

