//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FWTenantModel, NSString;

@interface FWContactTypeModel : NSObject
{
    unsigned long long _ContactType;
    NSString *_title;
    NSString *_imageStr;
    FWTenantModel *_tenant;
    unsigned long long _belongType;
    double _secHeight;
}

+ (double)getSectionHeightWith:(unsigned long long)arg1;
+ (unsigned long long)getContentBelongTypeWith:(unsigned long long)arg1;
+ (id)contentTypeWith:(unsigned long long)arg1 title:(id)arg2 imageStr:(id)arg3;
- (void).cxx_destruct;
@property(nonatomic) double secHeight; // @synthesize secHeight=_secHeight;
@property(nonatomic) unsigned long long belongType; // @synthesize belongType=_belongType;
@property(retain, nonatomic) FWTenantModel *tenant; // @synthesize tenant=_tenant;
@property(copy, nonatomic) NSString *imageStr; // @synthesize imageStr=_imageStr;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long ContactType; // @synthesize ContactType=_ContactType;

@end

