//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSDate, NSError, NSTimer;
@protocol AMapLocationRequestDelegate;

@interface AMapLocationRequest : NSObject
{
    _Bool _needReGeocode;
    id <AMapLocationRequestDelegate> _delegate;
    long long _status;
    CLLocation *_location;
    CDUnknownBlockType _block;
    NSError *_locateError;
    double _locationTimeout;
    double _desiredAccuracy;
    NSDate *_requestStartTime;
    NSTimer *_locationTimeoutTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *locationTimeoutTimer; // @synthesize locationTimeoutTimer=_locationTimeoutTimer;
@property(retain, nonatomic) NSDate *requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(nonatomic) _Bool needReGeocode; // @synthesize needReGeocode=_needReGeocode;
@property(nonatomic) double locationTimeout; // @synthesize locationTimeout=_locationTimeout;
@property(copy, nonatomic) NSError *locateError; // @synthesize locateError=_locateError;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <AMapLocationRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopLocationTimeoutTimer;
- (void)locationTimeoutTimerFired:(id)arg1;
- (void)cancel;
- (void)forceCompleteAndCleanLocationForError:(id)arg1;
- (void)forceTimedOutWithLocateError:(id)arg1;
- (void)finishReGeocode:(id)arg1 error:(id)arg2;
- (void)startLocationTimeoutTimerIfNeeded;
- (void)dealloc;
- (void)initProperties;
- (id)init;

@end

