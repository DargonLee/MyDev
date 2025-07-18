//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class AMapGeoPoint, AMapIndoorData, AMapPOIExtension, NSArray, NSString;

@interface AMapPOI : AMapSearchObject
{
    _Bool _hasIndoorMap;
    NSString *_uid;
    NSString *_name;
    NSString *_type;
    NSString *_typecode;
    AMapGeoPoint *_location;
    NSString *_address;
    NSString *_tel;
    long long _distance;
    NSString *_parkingType;
    NSString *_shopID;
    NSString *_postcode;
    NSString *_website;
    NSString *_email;
    NSString *_province;
    NSString *_pcode;
    NSString *_city;
    NSString *_citycode;
    NSString *_district;
    NSString *_adcode;
    NSString *_gridcode;
    AMapGeoPoint *_enterLocation;
    AMapGeoPoint *_exitLocation;
    NSString *_direction;
    NSString *_businessArea;
    AMapIndoorData *_indoorData;
    NSArray *_subPOIs;
    NSArray *_images;
    AMapPOIExtension *_extensionInfo;
}

+ (id)ajo_arrayClassMapping;
+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(retain, nonatomic) AMapPOIExtension *extensionInfo; // @synthesize extensionInfo=_extensionInfo;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSArray *subPOIs; // @synthesize subPOIs=_subPOIs;
@property(retain, nonatomic) AMapIndoorData *indoorData; // @synthesize indoorData=_indoorData;
@property(copy, nonatomic) NSString *businessArea; // @synthesize businessArea=_businessArea;
@property(nonatomic) _Bool hasIndoorMap; // @synthesize hasIndoorMap=_hasIndoorMap;
@property(copy, nonatomic) NSString *direction; // @synthesize direction=_direction;
@property(copy, nonatomic) AMapGeoPoint *exitLocation; // @synthesize exitLocation=_exitLocation;
@property(copy, nonatomic) AMapGeoPoint *enterLocation; // @synthesize enterLocation=_enterLocation;
@property(copy, nonatomic) NSString *gridcode; // @synthesize gridcode=_gridcode;
@property(copy, nonatomic) NSString *adcode; // @synthesize adcode=_adcode;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *citycode; // @synthesize citycode=_citycode;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *pcode; // @synthesize pcode=_pcode;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *website; // @synthesize website=_website;
@property(copy, nonatomic) NSString *postcode; // @synthesize postcode=_postcode;
@property(copy, nonatomic) NSString *shopID; // @synthesize shopID=_shopID;
@property(copy, nonatomic) NSString *parkingType; // @synthesize parkingType=_parkingType;
@property(nonatomic) long long distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *tel; // @synthesize tel=_tel;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) AMapGeoPoint *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *typecode; // @synthesize typecode=_typecode;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (id)ajo_willCreateObjectOfClass:(Class)arg1 withDictionary:(id)arg2 forKey:(id)arg3 abort:(_Bool *)arg4;
- (_Bool)ajo_validateValue:(inout id *)arg1 forKey:(id)arg2 error:(out id *)arg3;
- (void)ajo_ignoredSetValue:(id)arg1 forUndefinedMappingKey:(id)arg2;
- (id)init;

@end

