//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, MBProgressHUD, NSString, NSTimer, NSURLSessionDownloadTask, UIButton, UIImageView, UILabel, UISlider, UIView;

@interface FWPlayer : UIViewController <UIAlertViewDelegate>
{
    float _videoLength;
    NSString *_fileName;
    AVPlayer *_player;
    AVPlayerLayer *_playerLayer;
    AVPlayerItem *_item;
    UIButton *_playButton;
    UILabel *_startTime;
    UILabel *_endTime;
    UISlider *_progressSlider;
    UISlider *_volume;
    UIButton *_backButton;
    UIView *_backView;
    NSTimer *_timer;
    UIImageView *_timaImage;
    UILabel *_timeLabel;
    MBProgressHUD *_progresshud;
    NSString *_urlString;
    id _timeObser;
    NSString *_localPath;
    NSString *_fullPath;
    NSURLSessionDownloadTask *_download;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionDownloadTask *download; // @synthesize download=_download;
@property(retain, nonatomic) NSString *fullPath; // @synthesize fullPath=_fullPath;
@property(retain, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) id timeObser; // @synthesize timeObser=_timeObser;
@property(nonatomic) float videoLength; // @synthesize videoLength=_videoLength;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(retain, nonatomic) MBProgressHUD *progresshud; // @synthesize progresshud=_progresshud;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *timaImage; // @synthesize timaImage=_timaImage;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UISlider *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) UISlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(retain, nonatomic) UILabel *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) UILabel *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) AVPlayerItem *item; // @synthesize item=_item;
@property(retain, nonatomic) AVPlayerLayer *playerLayer; // @synthesize playerLayer=_playerLayer;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void)downloadFile;
- (void)removeVideoTimerObserver;
- (void)addVideoTimerObserver;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeNotification;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)addNotification;
- (void)removeVideoKVO;
- (void)addVideoKVO;
- (void)backAction;
- (void)changeVauleCancel:(id)arg1;
- (void)changeValueBegin:(id)arg1;
- (void)valueChange:(id)arg1 other:(id)arg2;
- (void)playAction:(id)arg1;
- (void)tapAction;
- (void)showPlayer:(id)arg1;
- (void)willShowPlayer;
- (void)createUI;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

