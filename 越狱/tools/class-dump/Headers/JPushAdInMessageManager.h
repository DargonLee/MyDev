//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray;
@protocol JPushInMessageDataSourceDelegate;

@interface JPushAdInMessageManager : NSObject
{
    id <JPushInMessageDataSourceDelegate> _delegate;
    long long _priority;
    NSDate *_foregroundDate;
    CDUnknownBlockType _resultCompletion;
    NSMutableArray *_dataArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(copy, nonatomic) CDUnknownBlockType resultCompletion; // @synthesize resultCompletion=_resultCompletion;
@property(retain, nonatomic) NSDate *foregroundDate; // @synthesize foregroundDate=_foregroundDate;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) __weak id <JPushInMessageDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)checkisExistMessageDeplay;
- (void)removeDeplayMessageID:(id)arg1;
- (void)cacheDeplayMessageID:(id)arg1;
- (_Bool)messageWithMessageDic:(id)arg1;
- (_Bool)overFrequencytoDayWithCount:(long long)arg1 withTimeGap:(long long)arg2 withMessageID:(id)arg3;
- (void)cacheFrequecnyDataWithMessage;
- (_Bool)overFrequencyWithMessageDic:(id)arg1 withMessageID:(id)arg2;
- (void)reportMessageStatus:(int)arg1 withMessageID:(id)arg2;
- (_Bool)judgeUserAllowPop:(id)arg1;
- (_Bool)judgeWhiteListContainUrl:(id)arg1;
- (_Bool)judgeDeepLinkis:(id)arg1;
- (_Bool)checkMessageDic:(id)arg1;
- (_Bool)checkForegroundDateWithMessagDic:(id)arg1;
- (void)handleInMessageDic:(id)arg1;
- (id)getInMessageContent;
- (void)applicationDidBecomeActive;
- (void)applicationWillEnterForeground;
- (id)init;
- (void)dealloc;

@end

