//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSLine.h"

@interface GMSMarkupLine : GMSLine
{
    _Bool _connectToPrevious;
    _Bool _loopIfStartAndEndMatch;
    _Bool _tintTextureWithColor;
    _Bool _breadcrumb;
    float _startingDistance;
    basic_string_90719d97 _consumedTextureKey;
}

+ (id)breadcrumbMarkupLineWithPolyline:(id)arg1 stylingID:(const struct StyleID *)arg2 zWithinInstance:(unsigned int)arg3 startingDistance:(float)arg4 consumedTextureKey:(const basic_string_90719d97 *)arg5;
+ (id)strokeMarkupLineWithPolyline:(id)arg1 stylingID:(const struct StyleID *)arg2 startCap:(unsigned int)arg3 endCap:(unsigned int)arg4 jointShape:(int)arg5 zWithinInstance:(unsigned int)arg6 startingDistance:(float)arg7 consumedTextureKey:(const basic_string_90719d97 *)arg8 tintTextureWithColor:(_Bool)arg9 connectToPrevious:(_Bool)arg10 loopIfStartAndEndMatch:(_Bool)arg11;
@property(nonatomic, getter=isBreadcrumb) _Bool breadcrumb; // @synthesize breadcrumb=_breadcrumb;
@property(nonatomic) _Bool tintTextureWithColor; // @synthesize tintTextureWithColor=_tintTextureWithColor;
@property(nonatomic) basic_string_90719d97 consumedTextureKey; // @synthesize consumedTextureKey=_consumedTextureKey;
@property(nonatomic) float startingDistance; // @synthesize startingDistance=_startingDistance;
@property(nonatomic) _Bool loopIfStartAndEndMatch; // @synthesize loopIfStartAndEndMatch=_loopIfStartAndEndMatch;
@property(nonatomic) _Bool connectToPrevious; // @synthesize connectToPrevious=_connectToPrevious;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithPolyline:(id)arg1 stylingID:(const struct StyleID *)arg2 startCap:(unsigned int)arg3 endCap:(unsigned int)arg4 jointShape:(int)arg5 zWithinInstance:(unsigned int)arg6 startingDistance:(float)arg7 consumedTextureKey:(const basic_string_90719d97 *)arg8 tintTextureWithColor:(_Bool)arg9 connectToPrevious:(_Bool)arg10 loopIfStartAndEndMatch:(_Bool)arg11 breadcrumb:(_Bool)arg12;

@end

