//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMLocationDeviceIdentifierSet : NSObject
{
    NSString *_IDFA;
    NSString *_SimulateIDFA;
    NSString *_CUID;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *CUID; // @synthesize CUID=_CUID;
@property(copy, nonatomic) NSString *SimulateIDFA; // @synthesize SimulateIDFA=_SimulateIDFA;
@property(copy, nonatomic) NSString *IDFA; // @synthesize IDFA=_IDFA;
- (id)initWithIDFA:(id)arg1 SimulateIDFA:(id)arg2 CUID:(id)arg3;

@end

