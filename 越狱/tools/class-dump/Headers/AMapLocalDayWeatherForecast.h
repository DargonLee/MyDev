//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSString;

@interface AMapLocalDayWeatherForecast : AMapSearchObject
{
    NSString *_date;
    NSString *_week;
    NSString *_dayWeather;
    NSString *_nightWeather;
    NSString *_dayTemp;
    NSString *_nightTemp;
    NSString *_dayWind;
    NSString *_nightWind;
    NSString *_dayPower;
    NSString *_nightPower;
}

+ (id)ajo_mapping;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *nightPower; // @synthesize nightPower=_nightPower;
@property(copy, nonatomic) NSString *dayPower; // @synthesize dayPower=_dayPower;
@property(copy, nonatomic) NSString *nightWind; // @synthesize nightWind=_nightWind;
@property(copy, nonatomic) NSString *dayWind; // @synthesize dayWind=_dayWind;
@property(copy, nonatomic) NSString *nightTemp; // @synthesize nightTemp=_nightTemp;
@property(copy, nonatomic) NSString *dayTemp; // @synthesize dayTemp=_dayTemp;
@property(copy, nonatomic) NSString *nightWeather; // @synthesize nightWeather=_nightWeather;
@property(copy, nonatomic) NSString *dayWeather; // @synthesize dayWeather=_dayWeather;
@property(copy, nonatomic) NSString *week; // @synthesize week=_week;
@property(copy, nonatomic) NSString *date; // @synthesize date=_date;
- (id)init;

@end

