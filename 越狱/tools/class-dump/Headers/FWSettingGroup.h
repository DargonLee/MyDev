//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface FWSettingGroup : NSObject
{
    NSString *_headerTitle;
    NSString *_footerTitle;
    NSMutableArray *_items;
    double _headerHeight;
    double _footerHeight;
}

+ (id)createGroupWithHeaderTitle:(id)arg1 footerTitle:(id)arg2 items:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) double footerHeight; // @synthesize footerHeight=_footerHeight;
@property(readonly, nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSString *footerTitle; // @synthesize footerTitle=_footerTitle;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;

@end

