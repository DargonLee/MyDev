//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface FWAddMenuHelper : NSObject
{
    NSMutableArray *_menuData;
    NSArray *_menuItemTypes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *menuItemTypes; // @synthesize menuItemTypes=_menuItemTypes;
@property(retain, nonatomic) NSMutableArray *menuData; // @synthesize menuData=_menuData;
- (id)p_getMenuItemByType:(long long)arg1;
- (id)init;

@end

