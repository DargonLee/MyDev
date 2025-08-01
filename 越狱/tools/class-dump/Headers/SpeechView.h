//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "AVAudioRecorderDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class AVAudioPlayer, AVAudioRecorder, NSData, NSDate, NSString, NSTimer, SCListener, UIButton, UIImageView, UILabel;
@protocol speechDelegate;

@interface SpeechView : UIView <AVAudioPlayerDelegate, UIAlertViewDelegate, AVAudioRecorderDelegate>
{
    AVAudioRecorder *recorder;
    AVAudioPlayer *player;
    SCListener *listener;
    UIImageView *view;
    UILabel *label;
    UIImageView *powerIcon;
    UIButton *rightBtn;
    UIButton *cancelBtn;
    UIImageView *hr1;
    UIImageView *hr2;
    NSTimer *timer;
    NSDate *timerToDate;
    NSDate *timerStart;
    double timerPause;
    _Bool isPlaying;
    _Bool isPlayed;
    NSString *uploadKey;
    int leftBtnState;
    int rightBtnState;
    _Bool isFromECommunication;
    UILabel *swipeUplabel;
    _Bool didClearSucess;
    NSData *forReUpload;
    NSString *uploadKeyForReUpload;
    NSString *keyFromNewRecord;
    _Bool isFailed;
    _Bool _playFromRecord;
    _Bool _isRecording;
    NSData *forECommunication;
    id <speechDelegate> delegate;
    UIButton *leftBtn;
    double _timeLimit;
    double _totalTime;
    NSString *_base64;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *base64; // @synthesize base64=_base64;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double timeLimit; // @synthesize timeLimit=_timeLimit;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(nonatomic) _Bool playFromRecord; // @synthesize playFromRecord=_playFromRecord;
@property(retain, nonatomic) UIButton *leftBtn; // @synthesize leftBtn;
@property(retain, nonatomic) UILabel *swipeUplabel; // @synthesize swipeUplabel;
@property(nonatomic) __weak id <speechDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSData *forECommunication; // @synthesize forECommunication;
- (void)dealloc;
- (void)processData;
- (id)converToMp3:(id)arg1;
- (void)preserveRecordData;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)pauseSpeech;
- (void)rightBtnPressed:(id)arg1;
- (void)leftBtnPressed:(id)arg1;
- (void)startRecord;
- (void)timeFire:(id)arg1;
- (void)start:(id)arg1;
- (void)play:(id)arg1 key:(id)arg2 from:(id)arg3;
- (void)play:(id)arg1 key:(id)arg2;
- (void)showView;
- (void)preoareRecord;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

