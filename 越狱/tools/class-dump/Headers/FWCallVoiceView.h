//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AgoraRtcEngineDelegate-Protocol.h"
#import "AgoraRtmChannelDelegate-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"

@class AgoraRtcEngineKit, AgoraRtmChannel, AgoraRtmRemoteInvitation, FWCallAvatarView, FWCallOpenView, FWCallOperationView, NSMutableArray, NSMutableSet, NSString, NSTimer, UIButton, UILabel;

@interface FWCallVoiceView : UIView <AgoraRtcEngineDelegate, CAAnimationDelegate, AgoraRtmChannelDelegate>
{
    _Bool _isIncomingCall;
    _Bool _didEnd;
    _Bool _toVoiceMeeting;
    _Bool _accept;
    _Bool _systemApplication;
    NSString *_callId;
    NSString *_localId;
    NSString *_peerId;
    NSString *_phoneNum;
    NSString *_channelName;
    unsigned long long _sourceType;
    CDUnknownBlockType _callback;
    AgoraRtmRemoteInvitation *_remoteInvitation;
    FWCallOperationView *_quietView;
    FWCallOperationView *_hangUpView;
    FWCallOperationView *_speakerView;
    FWCallOperationView *_rejectView;
    FWCallOperationView *_answerView;
    FWCallOpenView *_openView;
    AgoraRtcEngineKit *_agoraKit;
    UIButton *_packUpBtn;
    UIButton *_meetingBtn;
    FWCallAvatarView *_remoteAvatarView;
    UILabel *_statusLabel;
    UILabel *_actionLabel;
    NSTimer *_actionTimer;
    NSMutableArray *_memberList;
    long long _status;
    NSTimer *_timer;
    long long _second;
    long long _sentTime;
    NSMutableSet *_accountSet;
    AgoraRtmChannel *_rtmChannel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AgoraRtmChannel *rtmChannel; // @synthesize rtmChannel=_rtmChannel;
@property(retain, nonatomic) NSMutableSet *accountSet; // @synthesize accountSet=_accountSet;
@property(nonatomic) _Bool systemApplication; // @synthesize systemApplication=_systemApplication;
@property(nonatomic) _Bool accept; // @synthesize accept=_accept;
@property(nonatomic) _Bool toVoiceMeeting; // @synthesize toVoiceMeeting=_toVoiceMeeting;
@property(nonatomic) _Bool didEnd; // @synthesize didEnd=_didEnd;
@property(nonatomic) long long sentTime; // @synthesize sentTime=_sentTime;
@property(nonatomic) long long second; // @synthesize second=_second;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableArray *memberList; // @synthesize memberList=_memberList;
@property(retain, nonatomic) NSTimer *actionTimer; // @synthesize actionTimer=_actionTimer;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) FWCallAvatarView *remoteAvatarView; // @synthesize remoteAvatarView=_remoteAvatarView;
@property(retain, nonatomic) UIButton *meetingBtn; // @synthesize meetingBtn=_meetingBtn;
@property(retain, nonatomic) UIButton *packUpBtn; // @synthesize packUpBtn=_packUpBtn;
@property(retain, nonatomic) AgoraRtcEngineKit *agoraKit; // @synthesize agoraKit=_agoraKit;
@property(retain, nonatomic) FWCallOpenView *openView; // @synthesize openView=_openView;
@property(retain, nonatomic) FWCallOperationView *answerView; // @synthesize answerView=_answerView;
@property(retain, nonatomic) FWCallOperationView *rejectView; // @synthesize rejectView=_rejectView;
@property(retain, nonatomic) FWCallOperationView *speakerView; // @synthesize speakerView=_speakerView;
@property(retain, nonatomic) FWCallOperationView *hangUpView; // @synthesize hangUpView=_hangUpView;
@property(retain, nonatomic) FWCallOperationView *quietView; // @synthesize quietView=_quietView;
@property(retain, nonatomic) AgoraRtmRemoteInvitation *remoteInvitation; // @synthesize remoteInvitation=_remoteInvitation;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool isIncomingCall; // @synthesize isIncomingCall=_isIncomingCall;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(copy, nonatomic) NSString *peerId; // @synthesize peerId=_peerId;
@property(copy, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(copy, nonatomic) NSString *callId; // @synthesize callId=_callId;
- (void)buildUI;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)openAction;
- (void)packupAction;
- (void)postMeetingDataForSaveCall;
- (void)postDataForSaveCallWithCallStatus:(unsigned long long)arg1 attendType:(unsigned long long)arg2 attendMemberId:(id)arg3;
- (void)redialBtnAction;
- (void)switchToMeetingViewWithTargetIdArray:(id)arg1 channelName:(id)arg2 hostId:(id)arg3 peerId:(id)arg4 invitedIdArray:(id)arg5;
- (void)meetingBtnAction;
- (void)answerAction;
- (void)rejectAction;
- (void)removeShowingView;
- (void)hangUpAction;
- (void)speakerAction:(id)arg1;
- (void)quietAction:(id)arg1;
- (void)hideActionInfo;
- (void)showActionInfo:(id)arg1;
- (void)updateSentTime;
- (void)startTimer;
- (void)voiceConnected;
- (void)onCallEvents:(id)arg1;
- (void)calling;
- (void)show;
- (void)rtcEngineConnectionDidBanned:(id)arg1;
- (void)rtcEngineConnectionDidLost:(id)arg1;
- (void)rtcEngineConnectionDidInterrupted:(id)arg1;
- (void)rtcEngine:(id)arg1 didOccurError:(long long)arg2;
- (void)rtcEngine:(id)arg1 didOfflineOfUid:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)rtcEngine:(id)arg1 didRejoinChannel:(id)arg2 withUid:(unsigned long long)arg3 elapsed:(long long)arg4;
- (void)rtcEngine:(id)arg1 didJoinedOfUid:(unsigned long long)arg2 elapsed:(long long)arg3;
- (void)rtcEngine:(id)arg1 firstRemoteAudioFrameOfUid:(unsigned long long)arg2 elapsed:(long long)arg3;
- (void)joinChannel;
- (void)initializeAgoraEngine;
- (void)destroyChannel;
- (void)channel:(id)arg1 memberCount:(int)arg2;
- (void)channel:(id)arg1 memberLeft:(id)arg2;
- (void)channel:(id)arg1 memberJoined:(id)arg2;
- (void)channel:(id)arg1 messageReceived:(id)arg2 fromMember:(id)arg3;
- (id)convertFWParticipant:(id)arg1;
- (id)fetchParticipantOfAccount:(id)arg1;
- (id)participantOfAccount:(id)arg1;
- (void)handleDeviceOrientationDidChange:(id)arg1;
- (void)userInfoDidLoad:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

