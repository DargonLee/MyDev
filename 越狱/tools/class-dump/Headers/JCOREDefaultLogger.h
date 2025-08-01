//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JCOREAbstractLogger.h"

#import "JCORELogger-Protocol.h"

@class NSObject, NSString;
@protocol JCORELogFormatter, OS_dispatch_queue;

@interface JCOREDefaultLogger : JCOREAbstractLogger <JCORELogger>
{
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSString *loggerName;
- (void)logMessage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <JCORELogFormatter> logFormatter;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue;
@property(readonly) Class superclass;

@end

