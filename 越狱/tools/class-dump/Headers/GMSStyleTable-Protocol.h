//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class GMSModelStyle, GMSMultiZoomStyle, NSArray, NSSet;

@protocol GMSStyleTable <NSObject, NSCopying>
@property(readonly, nonatomic) int globalMapStyle;
- (GMSModelStyle *)styleForStylingID:(const struct StyleID *)arg1 zoomLevel:(int)arg2 tags:(NSSet *)arg3;
- (GMSModelStyle *)styleForStylingID:(const struct StyleID *)arg1 zoomLevel:(int)arg2;
- (NSArray *)stylesForStylingID:(const struct StyleID *)arg1 tags:(NSSet *)arg2;
- (GMSMultiZoomStyle *)multiZoomStyleForStylingID:(const struct StyleID *)arg1 tags:(NSSet *)arg2;
- (struct StyleID)stylingIDForNamedStyle:(int)arg1 type:(unsigned long long)arg2;
- (struct StyleID)stylingIDForStyleIndex:(int)arg1 type:(unsigned long long)arg2;
- (_Bool)isLocallyDefinedStylingID:(const struct StyleID *)arg1;
- (_Bool)isStylingID:(const struct StyleID *)arg1 visibleAtZoomLevel:(int)arg2;
- (unsigned long long)styleCount;
@end

