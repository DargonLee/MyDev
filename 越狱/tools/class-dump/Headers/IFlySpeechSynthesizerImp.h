//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "IFlyAudioPlayerDelegate-Protocol.h"
#import "TTSServiceDelegate-Protocol.h"

@class IFlyPcmPlayer, IFlyTTSParam, IFlyTTSService, NSMutableArray, NSString;
@protocol IFlySpeechSynthesizerDelegate;

@interface IFlySpeechSynthesizerImp : NSOperation <TTSServiceDelegate, IFlyAudioPlayerDelegate>
{
    IFlyTTSService *_ttsService;
    IFlyPcmPlayer *_pcmPlayer;
    NSString *_playText;
    NSMutableArray *_ttsDataArray;
    int _errorCode;
    int _bufferProgress;
    int _playProgress;
    _Bool _autoPlay;
    _Bool _isPlayerFinish;
    _Bool _isPlayerNoStartPause;
    _Bool _isPreTTS;
    NSString *_preVcnName;
    NSString *_preText;
    _Bool _isTranslate;
    id <IFlySpeechSynthesizerDelegate> _delegate;
    IFlyTTSParam *_sessionConfig;
}

@property(nonatomic) _Bool isTranslate; // @synthesize isTranslate=_isTranslate;
@property(readonly, retain, nonatomic) IFlyTTSParam *sessionConfig; // @synthesize sessionConfig=_sessionConfig;
@property(nonatomic) id <IFlySpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAudioQueuePlayPercent:(int)arg1 beginPos:(int)arg2 endPos:(int)arg3;
- (void)onAudioQueuePlay;
- (void)onAudioQueueResume;
- (void)onAudioQueuePaused;
- (void)onAudioQueueStop:(int)arg1;
- (void)onTTSAudioBuffer:(const void *)arg1 length:(unsigned int)arg2 status:(int)arg3;
- (void)clearPcmBuffer;
- (void)savePcmToBuffer:(void *)arg1 length:(int)arg2 ced:(int)arg3;
- (_Bool)savePcmToFile;
- (_Bool)sendBufferToPlayer:(_Bool)arg1;
- (void)movePreToNormal:(_Bool)arg1;
- (_Bool)startPlayer;
- (void)main;
- (_Bool)checkPreTTS:(id)arg1 text:(id)arg2;
- (void)setPreTTS:(id)arg1 text:(id)arg2;
- (void)resume;
- (void)pause;
- (void)stopSpeaking;
- (int)playText:(id)arg1 config:(id)arg2;
- (void)dealloc;
- (id)init;

@end

