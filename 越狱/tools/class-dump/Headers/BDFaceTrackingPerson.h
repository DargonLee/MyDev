//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BDFaceTrackingPerson : NSObject
{
    NSMutableDictionary *_persons;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *persons; // @synthesize persons=_persons;
- (void).cxx_destruct;
- (void)updateState;

@end

