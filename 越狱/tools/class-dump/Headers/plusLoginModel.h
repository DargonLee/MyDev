//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "baseTool.h"

@class NSString;

@interface plusLoginModel : baseTool
{
    NSString *_loginRequest;
    NSString *_tokenID;
}

+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *tokenID; // @synthesize tokenID=_tokenID;
@property(retain, nonatomic) NSString *loginRequest; // @synthesize loginRequest=_loginRequest;
- (_Bool)login;
- (_Bool)getLoginRequest;
- (_Bool)loadLicense;
- (_Bool)CALogin;
- (id)init;

@end

