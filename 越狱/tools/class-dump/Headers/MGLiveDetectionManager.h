//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MGLivenessProtocolDelegate-Protocol.h"

@class CMMotionManager, MGLiveActionManager, MGLiveErrorManager, MGLivenessDetectionFrame, MGLivenessDetector, NSString;
@protocol MGLiveDetectionDelegate, OS_dispatch_queue;

@interface MGLiveDetectionManager : NSObject <MGLivenessProtocolDelegate>
{
    double _motionY;
    struct {
        float faceQuality;
        MGLivenessDetectionFrame *faceFrame;
    } _bestFrame;
    _Bool _canDetectImage;
    NSObject<OS_dispatch_queue> *_detectionQueue;
    id <MGLiveDetectionDelegate> _delegate;
    MGLiveErrorManager *_errorManager;
    long long _detectionType;
    MGLivenessDetector *_livenessDetector;
    MGLiveActionManager *_actionManager;
    CMMotionManager *_motionManager;
    unsigned long long _actionTimeOut;
    unsigned long long _currentActionStep;
    unsigned long long _liveActionCount;
    long long _currentLiveStep;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) _Bool canDetectImage; // @synthesize canDetectImage=_canDetectImage;
@property(nonatomic) long long currentLiveStep; // @synthesize currentLiveStep=_currentLiveStep;
@property(nonatomic) unsigned long long liveActionCount; // @synthesize liveActionCount=_liveActionCount;
@property(nonatomic) unsigned long long currentActionStep; // @synthesize currentActionStep=_currentActionStep;
@property(nonatomic) unsigned long long actionTimeOut; // @synthesize actionTimeOut=_actionTimeOut;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) MGLiveActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) MGLivenessDetector *livenessDetector; // @synthesize livenessDetector=_livenessDetector;
@property(nonatomic) long long detectionType; // @synthesize detectionType=_detectionType;
@property(readonly, nonatomic) MGLiveErrorManager *errorManager; // @synthesize errorManager=_errorManager;
@property(nonatomic) id <MGLiveDetectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *detectionQueue; // @synthesize detectionQueue=_detectionQueue;
- (int)onDetectionSuccess:(id)arg1;
- (void)onDetectionFailed:(int)arg1;
- (void)onFrameDetected:(id)arg1 andTimeout:(float)arg2;
- (void)detectionTypeQualityFinish;
- (id)getAlgorithmLog;
- (id)getBestQualityFrame;
- (id)getFaceIDData;
- (id)getFaceIDDataWithMaxImageSize:(int)arg1;
- (id)getValidFrame;
- (void)detectionWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (void)starDetectionWithStep:(long long)arg1;
- (void)stopDetection;
- (void)recoveryData:(long long)arg1;
- (void)stopDetectionQuality;
- (void)starDetection;
- (void)changeErrorManager:(id)arg1;
- (id)initWithActionTimeOut:(unsigned long long)arg1 andActionManager:(id)arg2;
- (id)initWithActionTime:(unsigned long long)arg1 actionManager:(id)arg2 errorManager:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

