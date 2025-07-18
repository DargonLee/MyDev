//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapSearchObject.h"

@class NSArray, NSString;

@interface AMapCloudSearchBaseRequest : AMapSearchObject
{
    NSArray *_filter;
    NSString *_sortFields;
    long long _sortType;
    long long _offset;
    long long _page;
    NSString *_tableID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tableID; // @synthesize tableID=_tableID;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) long long offset; // @synthesize offset=_offset;
@property(nonatomic) long long sortType; // @synthesize sortType=_sortType;
@property(copy, nonatomic) NSString *sortFields; // @synthesize sortFields=_sortFields;
@property(retain, nonatomic) NSArray *filter; // @synthesize filter=_filter;
- (id)description;
- (id)init;
- (id)sortString;
- (id)filterString;

@end

