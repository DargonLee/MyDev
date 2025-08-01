//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LFFilterImageView.h"

#import "AVPlayerItemOutputPullDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, CADisplayLink, NSString;

@interface LFFilterVideoView : LFFilterImageView <AVPlayerItemOutputPullDelegate>
{
    CADisplayLink *_displayLink;
    AVPlayerItemVideoOutput *_videoOutput;
    AVPlayerItem *_oldItem;
    id _timeObserver;
    _Bool _autoRotate;
    _Bool _shouldSuppressPlayerRendering;
    AVPlayer *_player;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldSuppressPlayerRendering; // @synthesize shouldSuppressPlayerRendering=_shouldSuppressPlayerRendering;
@property(nonatomic) _Bool autoRotate; // @synthesize autoRotate=_autoRotate;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)outputMediaDataWillChange:(id)arg1;
- (void)unsetupVideoOutputToItem:(id)arg1;
- (void)setupVideoOutputToItem:(id)arg1;
- (void)renderVideo:(double)arg1;
- (void)willRenderFrame:(id)arg1;
- (void)unsetupDisplayLink;
- (void)setupDisplayLink;
- (void)suspendDisplay;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeOldObservers;
- (void)initObservers;
@property(readonly, nonatomic) CDStruct_1b6d18a9 playableDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 itemDuration;
@property(readonly, nonatomic) _Bool isPlaying;
- (void)dealloc;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

