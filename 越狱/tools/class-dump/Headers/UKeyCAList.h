//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface UKeyCAList : NSObject
{
    NSArray *_caList;
    NSArray *_subjectList;
    NSArray *_issuerList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *issuerList; // @synthesize issuerList=_issuerList;
@property(retain, nonatomic) NSArray *subjectList; // @synthesize subjectList=_subjectList;
@property(retain, nonatomic) NSArray *caList; // @synthesize caList=_caList;
- (void)parseCAList;
- (id)init;

@end

