//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JCORELogger-Protocol.h"

@class NSString;
@protocol JCORELogFormatter, OS_dispatch_queue;

@interface JCOREAbstractLogger : NSObject <JCORELogger>
{
    id <JCORELogFormatter> _logFormatter;
    NSObject<OS_dispatch_queue> *_loggerQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // @synthesize loggerQueue=_loggerQueue;
@property(readonly, nonatomic) NSString *loggerName;
@property(retain, nonatomic) id <JCORELogFormatter> logFormatter;
- (void)logMessage:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

