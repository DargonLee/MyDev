//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WXCheckULStepResult : NSObject
{
    _Bool _success;
    NSString *_errorInfo;
    NSString *_suggestion;
}

@property(retain, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCheckResult:(_Bool)arg1 errorInfo:(id)arg2 suggestion:(id)arg3;

@end

