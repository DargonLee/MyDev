//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface LJBirthday : NSObject <NSCoding>
{
    NSDate *_brithdayDate;
    NSString *_calendarIdentifier;
    long long _era;
    long long _year;
    long long _month;
    long long _day;
}

- (void).cxx_destruct;
@property(nonatomic) long long day; // @synthesize day=_day;
@property(nonatomic) long long month; // @synthesize month=_month;
@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) long long era; // @synthesize era=_era;
@property(copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property(retain, nonatomic) NSDate *brithdayDate; // @synthesize brithdayDate=_brithdayDate;
- (id)propertyKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecord:(void *)arg1;
- (id)initWithCNContact:(id)arg1;

@end

