//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FWVoicePlayerObserver-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class FWFavoriteModel, NSString, NSTimer, UIImageView, UILabel, UITextView, UIView;

@interface FWFavoriteDetailViewController : UIViewController <FWVoicePlayerObserver, UITextViewDelegate>
{
    int _animationIndex;
    FWFavoriteModel *_favoriteModel;
    UIImageView *_iconView;
    UILabel *_descLabel;
    UITextView *_textView;
    UIView *_bgView;
    NSTimer *_animationTimer;
}

- (void).cxx_destruct;
@property(nonatomic) int animationIndex; // @synthesize animationIndex=_animationIndex;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) FWFavoriteModel *favoriteModel; // @synthesize favoriteModel=_favoriteModel;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)resetActiveEventInBackgroundMode;
- (void)dealloc;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1;
- (void)PlayerDidFinishPlaying:(_Bool)arg1;
- (void)disableCurrentAnimationTimer;
- (void)scheduleAnimationOperation;
- (void)enableCurrentAnimationTimer;
- (void)startPlayingVoiceData;
- (void)bgViewDidClick;
- (void)setupData;
- (void)setupContentView;
- (void)setupHeadTitle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

