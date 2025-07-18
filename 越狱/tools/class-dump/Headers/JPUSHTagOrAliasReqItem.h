//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JPUSHNewRequest, NSMutableSet;

@interface JPUSHTagOrAliasReqItem : NSObject
{
    _Bool _ifTag;
    _Bool _hasResend;
    _Bool _isTimeout;
    _Bool _isBind;
    double _createTime;
    JPUSHNewRequest *_request;
    CDUnknownBlockType _tagsCompletion;
    CDUnknownBlockType _tagValidCompletion;
    CDUnknownBlockType _aliasCompletion;
    long long _seq;
    NSMutableSet *_tagsBufSet;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBind; // @synthesize isBind=_isBind;
@property(nonatomic) _Bool isTimeout; // @synthesize isTimeout=_isTimeout;
@property(retain, nonatomic) NSMutableSet *tagsBufSet; // @synthesize tagsBufSet=_tagsBufSet;
@property(nonatomic) _Bool hasResend; // @synthesize hasResend=_hasResend;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(copy, nonatomic) CDUnknownBlockType aliasCompletion; // @synthesize aliasCompletion=_aliasCompletion;
@property(copy, nonatomic) CDUnknownBlockType tagValidCompletion; // @synthesize tagValidCompletion=_tagValidCompletion;
@property(copy, nonatomic) CDUnknownBlockType tagsCompletion; // @synthesize tagsCompletion=_tagsCompletion;
@property(retain, nonatomic) JPUSHNewRequest *request; // @synthesize request=_request;
@property(nonatomic) double createTime; // @synthesize createTime=_createTime;
@property(nonatomic) _Bool ifTag; // @synthesize ifTag=_ifTag;

@end

