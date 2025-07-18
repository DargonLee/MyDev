//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer;
@protocol JCOREConnectPoolDelegate;

@interface JCOREConnectPool : NSObject
{
    _Bool _isConnected;
    double _timeout;
    double _interval;
    long long _maxNum;
    id _socketDelegate;
    id <JCOREConnectPoolDelegate> _poolDelegate;
    NSTimer *_conTimer;
    NSMutableArray *_timeoutTimerArray;
    NSMutableArray *_socketArray;
    NSMutableArray *_ipArray;
    NSMutableArray *_ipvxHistoryArray;
    long long _minorIpvxTimes;
}

+ (id)instance;
- (void).cxx_destruct;
@property(nonatomic) long long minorIpvxTimes; // @synthesize minorIpvxTimes=_minorIpvxTimes;
@property(retain, nonatomic) NSMutableArray *ipvxHistoryArray; // @synthesize ipvxHistoryArray=_ipvxHistoryArray;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(retain, nonatomic) NSMutableArray *ipArray; // @synthesize ipArray=_ipArray;
@property(retain, nonatomic) NSMutableArray *socketArray; // @synthesize socketArray=_socketArray;
@property(retain, nonatomic) NSMutableArray *timeoutTimerArray; // @synthesize timeoutTimerArray=_timeoutTimerArray;
@property(nonatomic) __weak NSTimer *conTimer; // @synthesize conTimer=_conTimer;
@property(nonatomic) __weak id <JCOREConnectPoolDelegate> poolDelegate; // @synthesize poolDelegate=_poolDelegate;
@property(nonatomic) __weak id socketDelegate; // @synthesize socketDelegate=_socketDelegate;
@property(nonatomic) long long maxNum; // @synthesize maxNum=_maxNum;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)didAllIpsFailed;
- (void)socketSend:(id)arg1;
- (void)poolExhausted;
- (void)recodeTimeout:(id)arg1;
- (void)recodeFailure:(id)arg1;
- (void)recodeSuccess:(id)arg1 costTime:(double)arg2;
- (void)connectionDidFailedWithConfig:(id)arg1;
- (void)connectionDidSuccess:(id)arg1;
- (void)connectionDidFailed:(id)arg1;
- (void)connectionLoginSuccess:(id)arg1;
- (void)connectionDidAckTimeout:(id)arg1;
- (void)connectionDidLoginFailed:(id)arg1;
- (void)connectionDidRegisterFailed:(id)arg1;
- (id)findModelWithIP:(id)arg1;
- (void)removeModelObjectWithIP:(id)arg1;
- (id)getAValidModel;
- (unsigned long long)getIpv4Num;
- (unsigned long long)getIpv6Num;
- (unsigned long long)ipType;
- (id)arrayAfterTransSomeIpType:(id)arg1;
- (void)stopConTimer;
- (void)startConTimer;
- (void)stopOtherSocketWithout:(id)arg1;
- (void)stop;
- (void)start;
- (void)launchASocket;
- (void)connectWithIps:(id)arg1 maxNum:(long long)arg2;
- (void)synConnectWithIps:(id)arg1;
- (void)asyConnectWithIps:(id)arg1;
- (id)init;
- (void)dealloc;

@end

