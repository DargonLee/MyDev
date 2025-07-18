//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSLAdMetadata, GMSLLoggingMetadata, GMSMultiZoomStyle, NSArray, NSSet, NSString, UIImage;
@protocol GMSStyleTable;

@interface GMSPointOfInterestBuilder : NSObject
{
    Class _class;
    id <GMSStyleTable> _styleTable;
    id <GMSStyleTable> _mergedStyleTable;
    struct LabelGroup _secondaryLabelGroup;
    unsigned char _iconScaleDownFactor;
    unsigned char _titleSize;
    unsigned char _subtitleSize;
    _Bool _hideIconWhenPinned;
    _Bool _isHighlightableArea;
    short _labelingRank;
    int _legendNamedTitleStyle;
    int _legendNamedSubtitleStyle;
    int _legendNamedPinnedTitleStyle;
    int _legendNamedPinnedSubtitleStyle;
    int _legendNamedLayoutStyle;
    int _legendNamedIconStyle;
    float _minZoom;
    float _maxZoom;
    int _tileZoom;
    int _attributes;
    unsigned int _titleColor;
    unsigned int _titleOutlineColor;
    int _titleAttributes;
    int _subtitleAttributes;
    int _veType;
    struct Point2D _location;
    NSSet *_styleTransformTags;
    GMSMultiZoomStyle *_iconMultiZoomStyle;
    NSString *_iconURL;
    UIImage *_icon;
    NSString *_title;
    NSArray *_titlePositions;
    NSString *_subtitle;
    NSString *_ei;
    NSString *_ved;
    GMSLAdMetadata *_adMetadata;
    GMSLLoggingMetadata *_loggingMetadata;
    struct GMSFeatureID _serverID;
    struct StyleID _titleStyleID;
    struct StyleID _subtitleStyleID;
    struct StyleID _pinnedTitleStyleID;
    struct StyleID _pinnedSubtitleStyleID;
    struct StyleID _layoutStyleID;
    struct StyleID _iconStyleID;
}

@property(nonatomic) short labelingRank; // @synthesize labelingRank=_labelingRank;
@property(nonatomic) _Bool isHighlightableArea; // @synthesize isHighlightableArea=_isHighlightableArea;
@property(nonatomic) _Bool hideIconWhenPinned; // @synthesize hideIconWhenPinned=_hideIconWhenPinned;
@property(retain, nonatomic) GMSLLoggingMetadata *loggingMetadata; // @synthesize loggingMetadata=_loggingMetadata;
@property(retain, nonatomic) GMSLAdMetadata *adMetadata; // @synthesize adMetadata=_adMetadata;
@property(nonatomic) int veType; // @synthesize veType=_veType;
@property(copy, nonatomic) NSString *ved; // @synthesize ved=_ved;
@property(copy, nonatomic) NSString *ei; // @synthesize ei=_ei;
@property(nonatomic) int subtitleAttributes; // @synthesize subtitleAttributes=_subtitleAttributes;
@property(nonatomic) unsigned char subtitleSize; // @synthesize subtitleSize=_subtitleSize;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) int titleAttributes; // @synthesize titleAttributes=_titleAttributes;
@property(nonatomic) unsigned char titleSize; // @synthesize titleSize=_titleSize;
@property(nonatomic) unsigned int titleOutlineColor; // @synthesize titleOutlineColor=_titleOutlineColor;
@property(nonatomic) unsigned int titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSArray *titlePositions; // @synthesize titlePositions=_titlePositions;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int attributes; // @synthesize attributes=_attributes;
@property(nonatomic) int tileZoom; // @synthesize tileZoom=_tileZoom;
@property(nonatomic) float maxZoom; // @synthesize maxZoom=_maxZoom;
@property(nonatomic) float minZoom; // @synthesize minZoom=_minZoom;
@property(nonatomic) unsigned char iconScaleDownFactor; // @synthesize iconScaleDownFactor=_iconScaleDownFactor;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(nonatomic) struct StyleID iconStyleID; // @synthesize iconStyleID=_iconStyleID;
@property(retain, nonatomic) GMSMultiZoomStyle *iconMultiZoomStyle; // @synthesize iconMultiZoomStyle=_iconMultiZoomStyle;
@property(nonatomic) int legendNamedIconStyle; // @synthesize legendNamedIconStyle=_legendNamedIconStyle;
@property(nonatomic) struct StyleID layoutStyleID; // @synthesize layoutStyleID=_layoutStyleID;
@property(nonatomic) int legendNamedLayoutStyle; // @synthesize legendNamedLayoutStyle=_legendNamedLayoutStyle;
@property(nonatomic) struct StyleID pinnedSubtitleStyleID; // @synthesize pinnedSubtitleStyleID=_pinnedSubtitleStyleID;
@property(nonatomic) int legendNamedPinnedSubtitleStyle; // @synthesize legendNamedPinnedSubtitleStyle=_legendNamedPinnedSubtitleStyle;
@property(nonatomic) struct StyleID pinnedTitleStyleID; // @synthesize pinnedTitleStyleID=_pinnedTitleStyleID;
@property(nonatomic) int legendNamedPinnedTitleStyle; // @synthesize legendNamedPinnedTitleStyle=_legendNamedPinnedTitleStyle;
@property(nonatomic) struct StyleID subtitleStyleID; // @synthesize subtitleStyleID=_subtitleStyleID;
@property(nonatomic) int legendNamedSubtitleStyle; // @synthesize legendNamedSubtitleStyle=_legendNamedSubtitleStyle;
@property(nonatomic) struct StyleID titleStyleID; // @synthesize titleStyleID=_titleStyleID;
@property(nonatomic) int legendNamedTitleStyle; // @synthesize legendNamedTitleStyle=_legendNamedTitleStyle;
@property(retain, nonatomic) NSSet *styleTransformTags; // @synthesize styleTransformTags=_styleTransformTags;
@property(nonatomic) struct GMSFeatureID serverID; // @synthesize serverID=_serverID;
@property(nonatomic) struct Point2D location; // @synthesize location=_location;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)pointOfInterestWithIconStyleID:(struct StyleID)arg1 titleStyleID:(struct StyleID)arg2 subtitleStyleID:(struct StyleID)arg3 pinnedTitleStyleID:(struct StyleID)arg4 pinnedSubtitleStyleID:(struct StyleID)arg5 layoutStyleID:(struct StyleID)arg6;
- (id)wrappedComponentsOfText:(id)arg1 withStyleID:(struct StyleID)arg2;
- (id)pointOfInterest;
- (id)subtitleStyle;
- (id)titleStyle;
- (id)mergedStyleTableForPointOfInterest;
- (id)styleTableForPointOfInterest;
- (void)disableAttribute:(int)arg1;
- (void)enableAttribute:(int)arg1;
- (_Bool)hasLegendNamedLayoutStyle;
- (_Bool)hasLegendNamedPinnedSubtitleStyle;
- (_Bool)hasLegendNamedPinnedTitleStyle;
- (_Bool)hasLegendNamedSubtitleStyle;
- (_Bool)hasLegendNamedTitleStyle;
- (_Bool)hasLegendNamedIconStyle;
- (void)setSecondaryLabelGroup:(struct LabelGroup)arg1;
- (int)validatedNamedStyle:(int)arg1;
- (struct Alignment)relativePositionForTitlePosition:(long long)arg1;
- (id)initWithPointOfInterestClass:(Class)arg1 styleTable:(id)arg2;

@end

