//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AgoraRtcVideoCanvas, FWVideoSessionView, NSDictionary, NSString;

@interface FWParticipant : NSObject
{
    _Bool _isFullSession;
    NSString *_name;
    NSString *_account;
    NSString *_source;
    NSDictionary *_avatar;
    unsigned long long _sourceType;
    unsigned long long _mode;
    unsigned long long _status;
    FWVideoSessionView *_videoSessionView;
    AgoraRtcVideoCanvas *_canvas;
    CDUnknownBlockType _callback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool isFullSession; // @synthesize isFullSession=_isFullSession;
@property(retain, nonatomic) AgoraRtcVideoCanvas *canvas; // @synthesize canvas=_canvas;
@property(retain, nonatomic) FWVideoSessionView *videoSessionView; // @synthesize videoSessionView=_videoSessionView;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSDictionary *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithAccount:(id)arg1;

@end

