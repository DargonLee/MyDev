//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface LJAddress : NSObject <NSCoding>
{
    NSString *_label;
    NSString *_street;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_country;
    NSString *_ISOCountryCode;
    NSString *_formatterAddress;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *formatterAddress; // @synthesize formatterAddress=_formatterAddress;
@property(copy, nonatomic) NSString *ISOCountryCode; // @synthesize ISOCountryCode=_ISOCountryCode;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)propertyKeys;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiValue:(void *)arg1 index:(long long)arg2;
- (id)initWithLabeledValue:(id)arg1;

@end

