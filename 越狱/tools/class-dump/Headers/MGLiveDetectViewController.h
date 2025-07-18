//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLiveBaseDetectViewController.h"

#import "MGLiveDetectionDelegate-Protocol.h"
#import "MGVideoDelegate-Protocol.h"

@class MGBaseBottomManager, NSString, UIImageView;

@interface MGLiveDetectViewController : MGLiveBaseDetectViewController <MGLiveDetectionDelegate, MGVideoDelegate>
{
    double _topViewHeight;
    MGBaseBottomManager *_bottomView;
    UIImageView *_headerView;
    CDUnknownBlockType _settingError;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType settingError; // @synthesize settingError=_settingError;
@property(retain, nonatomic) UIImageView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) MGBaseBottomManager *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) double topViewHeight; // @synthesize topViewHeight=_topViewHeight;
- (void)liveDetectionFinish:(int)arg1 checkOK:(_Bool)arg2 liveDetectionType:(long long)arg3;
- (void)starAnimation:(int)arg1 step:(long long)arg2 timeOut:(unsigned long long)arg3;
- (void)setUpCameraLayer;
- (void)qualitayErrorMessage:(id)arg1;
- (void)liveFaceDetection;
- (void)creatView;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)MGSettingErrorAlarm;
- (long long)checkLiveDetectionSetting;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

