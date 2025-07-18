//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface FWAddressBookManager : NSObject
{
    NSMutableDictionary *_departmentListCacheDictionary;
    NSMutableDictionary *_cacheDict;
    NSMutableArray *_mydeps;
}

+ (void)getSubordinateData:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)getDepartmentListFromNetwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)buildDepartmentTree:(id)arg1 corpid:(id)arg2 deptid:(int)arg3;
+ (void)clearCache;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *mydeps; // @synthesize mydeps=_mydeps;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
@property(retain, nonatomic) NSMutableDictionary *departmentListCacheDictionary; // @synthesize departmentListCacheDictionary=_departmentListCacheDictionary;
- (void)updateLocalSectionContactsWith:(id)arg1 keys:(id)arg2;
- (void)getLocalCacheOfAccessSectionContactsComplection:(CDUnknownBlockType)arg1;
- (void)accessSectionContactsComplection:(CDUnknownBlockType)arg1;
- (void)updateLocalContactsWith:(id)arg1;
- (void)getLocalCacheOfAccessContactsComplection:(CDUnknownBlockType)arg1;
- (void)accessContactsComplection:(CDUnknownBlockType)arg1;
- (void)addContactChangeHanlder;
- (void)getDepartmentListWithCorpid:(id)arg1 deptid:(id)arg2 contactType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getsubMyDepWithDepId:(id)arg1 contactType:(unsigned long long)arg2;
- (id)getParitModelWithDepId:(id)arg1;
- (id)init;

@end

