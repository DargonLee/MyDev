//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BMKLocationIDManager : NSObject
{
    NSString *_cuid;
    NSString *_idfa;
    NSString *_sidfa;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getShareInstance;
+ (id)decodeBase64WithString:(id)arg1;
+ (id)encodeBase64WithString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *sidfa; // @synthesize sidfa=_sidfa;
@property(readonly, nonatomic) NSString *idfa; // @synthesize idfa=_idfa;
@property(readonly, nonatomic) NSString *cuid; // @synthesize cuid=_cuid;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

