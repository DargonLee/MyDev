//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, NSArray, NSData, NSMutableDictionary, NSObject, UIImage;
@protocol OS_dispatch_queue;

@interface LFMEGifView : UIView
{
    CADisplayLink *_displayLink;
    long long _index;
    long long _frameCount;
    double _timestamp;
    struct CGImageSource *_gifSourceRef;
    double _duration;
    UIImage *_image;
    NSData *_data;
    NSArray *_durations;
    NSMutableDictionary *_imageRefs;
    long long _orientation;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) NSMutableDictionary *imageRefs; // @synthesize imageRefs=_imageRefs;
@property(readonly, nonatomic) NSArray *durations; // @synthesize durations=_durations;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (float)frameDurationAtIndex:(unsigned long long)arg1;
- (void)displayGif;
- (void)unsetupDisplayLink;
- (void)setupDisplayLink;
- (void)playGif;
- (void)stopGif;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)freeData;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

