//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AgoraRtcEngineDelegate-Protocol.h"
#import "AgoraRtmChannelDelegate-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"
#import "FWContactSelectViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class AgoraRtcEngineKit, AgoraRtmChannel, AgoraRtmRemoteInvitation, FWCallAvatarView, FWCallOpenView, FWCallOperationView, FWParticipant, NSArray, NSMutableArray, NSMutableSet, NSString, NSTimer, UIButton, UICollectionView, UILabel, UIView, UIWindow;

@interface FWVideoMeetingViewController : UIViewController <AgoraRtcEngineDelegate, UICollectionViewDelegate, UICollectionViewDataSource, FWContactSelectViewControllerDelegate, CAAnimationDelegate, AgoraRtmChannelDelegate>
{
    _Bool _isIncomingCall;
    _Bool _fromVideoView;
    _Bool _allMute;
    _Bool _allClose;
    _Bool _didEnd;
    _Bool _systemApplication;
    _Bool _isPackup;
    NSString *_callId;
    NSString *_localId;
    NSString *_peerId;
    NSString *_channelName;
    NSString *_hostId;
    NSMutableArray *_memberList;
    unsigned long long _sourceType;
    CDUnknownBlockType _callback;
    long long _second;
    AgoraRtmRemoteInvitation *_remoteInvitation;
    FWCallOperationView *_quietView;
    FWCallOperationView *_speakerView;
    FWCallOperationView *_cameraView;
    FWCallOperationView *_flipCameraView;
    FWCallOperationView *_rejectView;
    FWCallOperationView *_answerView;
    FWCallOpenView *_openView;
    NSArray *_operationViews;
    FWCallAvatarView *_localAvatarView;
    FWCallAvatarView *_remoteAvatarView;
    AgoraRtcEngineKit *_agoraKit;
    UIButton *_packUpBtn;
    UIButton *_endBtn;
    UIView *_containerView;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIView *_participantCountView;
    UILabel *_onlineCountLabel;
    UILabel *_invitedCountLabel;
    long long _onlineCount;
    long long _invitedCount;
    UICollectionView *_participantListView;
    NSMutableArray *_videoSessions;
    FWParticipant *_fullSession;
    UIWindow *_alertWindow;
    NSMutableSet *_memberHistoryList;
    long long _status;
    NSTimer *_timer;
    NSMutableSet *_accountSet;
    AgoraRtmChannel *_rtmChannel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AgoraRtmChannel *rtmChannel; // @synthesize rtmChannel=_rtmChannel;
@property(retain, nonatomic) NSMutableSet *accountSet; // @synthesize accountSet=_accountSet;
@property(nonatomic) _Bool isPackup; // @synthesize isPackup=_isPackup;
@property(nonatomic) _Bool systemApplication; // @synthesize systemApplication=_systemApplication;
@property(nonatomic) _Bool didEnd; // @synthesize didEnd=_didEnd;
@property(nonatomic) _Bool allClose; // @synthesize allClose=_allClose;
@property(nonatomic) _Bool allMute; // @synthesize allMute=_allMute;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSMutableSet *memberHistoryList; // @synthesize memberHistoryList=_memberHistoryList;
@property(retain, nonatomic) UIWindow *alertWindow; // @synthesize alertWindow=_alertWindow;
@property(retain, nonatomic) FWParticipant *fullSession; // @synthesize fullSession=_fullSession;
@property(retain, nonatomic) NSMutableArray *videoSessions; // @synthesize videoSessions=_videoSessions;
@property(retain, nonatomic) UICollectionView *participantListView; // @synthesize participantListView=_participantListView;
@property(nonatomic) long long invitedCount; // @synthesize invitedCount=_invitedCount;
@property(nonatomic) long long onlineCount; // @synthesize onlineCount=_onlineCount;
@property(retain, nonatomic) UILabel *invitedCountLabel; // @synthesize invitedCountLabel=_invitedCountLabel;
@property(retain, nonatomic) UILabel *onlineCountLabel; // @synthesize onlineCountLabel=_onlineCountLabel;
@property(retain, nonatomic) UIView *participantCountView; // @synthesize participantCountView=_participantCountView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIButton *endBtn; // @synthesize endBtn=_endBtn;
@property(retain, nonatomic) UIButton *packUpBtn; // @synthesize packUpBtn=_packUpBtn;
@property(retain, nonatomic) AgoraRtcEngineKit *agoraKit; // @synthesize agoraKit=_agoraKit;
@property(retain, nonatomic) FWCallAvatarView *remoteAvatarView; // @synthesize remoteAvatarView=_remoteAvatarView;
@property(retain, nonatomic) FWCallAvatarView *localAvatarView; // @synthesize localAvatarView=_localAvatarView;
@property(retain, nonatomic) NSArray *operationViews; // @synthesize operationViews=_operationViews;
@property(retain, nonatomic) FWCallOpenView *openView; // @synthesize openView=_openView;
@property(retain, nonatomic) FWCallOperationView *answerView; // @synthesize answerView=_answerView;
@property(retain, nonatomic) FWCallOperationView *rejectView; // @synthesize rejectView=_rejectView;
@property(retain, nonatomic) FWCallOperationView *flipCameraView; // @synthesize flipCameraView=_flipCameraView;
@property(retain, nonatomic) FWCallOperationView *cameraView; // @synthesize cameraView=_cameraView;
@property(retain, nonatomic) FWCallOperationView *speakerView; // @synthesize speakerView=_speakerView;
@property(retain, nonatomic) FWCallOperationView *quietView; // @synthesize quietView=_quietView;
@property(retain, nonatomic) AgoraRtmRemoteInvitation *remoteInvitation; // @synthesize remoteInvitation=_remoteInvitation;
@property(nonatomic) long long second; // @synthesize second=_second;
@property(nonatomic) _Bool fromVideoView; // @synthesize fromVideoView=_fromVideoView;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) _Bool isIncomingCall; // @synthesize isIncomingCall=_isIncomingCall;
@property(retain, nonatomic) NSMutableArray *memberList; // @synthesize memberList=_memberList;
@property(copy, nonatomic) NSString *hostId; // @synthesize hostId=_hostId;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(copy, nonatomic) NSString *peerId; // @synthesize peerId=_peerId;
@property(copy, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property(copy, nonatomic) NSString *callId; // @synthesize callId=_callId;
- (id)getCollectionViewFlowLayout;
- (void)buildUI;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)switchCountAction;
- (void)openAction;
- (void)packupAction;
- (void)postDataForSaveCallWithCallStatus:(unsigned long long)arg1 attendType:(unsigned long long)arg2 attendMemberId:(id)arg3 attendTargetIds:(id)arg4;
- (void)reloadItemAtIndexPathWithParticipant:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)onMultiSelectGroupReturn:(id)arg1 mode:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)onMultiSelectGroupCancel;
- (void)inviteAction;
- (void)muteAllAction:(_Bool)arg1;
- (void)closeAllAction:(_Bool)arg1;
- (void)endBtnAction;
- (void)answerAction;
- (void)rejectAction;
- (void)removeShowingView;
- (void)hangUpAction;
- (void)switchCameraWithSelected:(_Bool)arg1;
- (void)switchCameraAction:(id)arg1;
- (void)flipCameraAction:(id)arg1;
- (void)speakerAction:(id)arg1;
- (void)quietAction:(id)arg1;
- (void)startTimer;
- (void)videoConnected;
- (void)onCallEvents:(id)arg1;
- (void)showVideoMeetingView;
- (void)rtcEngineConnectionDidBanned:(id)arg1;
- (void)rtcEngineConnectionDidLost:(id)arg1;
- (void)rtcEngineConnectionDidInterrupted:(id)arg1;
- (void)rtcEngine:(id)arg1 didOccurError:(long long)arg2;
- (void)rtcEngine:(id)arg1 didOfflineOfUid:(unsigned long long)arg2 reason:(unsigned long long)arg3;
- (void)rtcEngine:(id)arg1 didRejoinChannel:(id)arg2 withUid:(unsigned long long)arg3 elapsed:(long long)arg4;
- (void)rtcEngine:(id)arg1 didJoinedOfUid:(unsigned long long)arg2 elapsed:(long long)arg3;
- (void)rtcEngine:(id)arg1 firstRemoteVideoDecodedOfUid:(unsigned long long)arg2 size:(struct CGSize)arg3 elapsed:(long long)arg4;
- (void)rtcEngine:(id)arg1 firstRemoteAudioFrameOfUid:(unsigned long long)arg2 elapsed:(long long)arg3;
- (void)joinChannel;
- (void)setupVideo;
- (void)initializeAgoraEngine;
- (void)destroyChannel;
- (void)channelGetMembers;
- (void)channel:(id)arg1 memberCount:(int)arg2;
- (void)channel:(id)arg1 memberLeft:(id)arg2;
- (void)channel:(id)arg1 memberJoined:(id)arg2;
- (void)channel:(id)arg1 messageReceived:(id)arg2 fromMember:(id)arg3;
- (void)updateInterface;
- (id)convertFWParticipant:(id)arg1;
- (id)fetchParticipantOfAccount:(id)arg1;
- (id)participantOfAccount:(id)arg1;
- (void)removeAccountInAccountSet:(id)arg1;
- (id)getMemberIdListWithoutHost:(_Bool)arg1;
- (_Bool)isHost;
- (void)channelSetAttr;
- (id)getMembersStatusArray;
- (void)monitorMemberList;
- (void)handleDeviceOrientationDidChange:(id)arg1;
- (void)userInfoDidLoad:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

