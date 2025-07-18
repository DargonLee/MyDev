//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;
@protocol OS_dispatch_semaphore;

@interface YYImageDecoder : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    _Bool _sourceTypeDetected;
    struct CGImageSource *_source;
    struct {
        struct {
            unsigned int _field1;
            unsigned int _field2;
            unsigned char _field3;
            unsigned char _field4;
            unsigned char _field5;
            unsigned char _field6;
            unsigned char _field7;
        } _field1;
        CDStruct_183601bc *_field2;
        unsigned int _field3;
        CDStruct_183601bc *_field4;
        unsigned int _field5;
        unsigned int _field6;
        unsigned int *_field7;
        unsigned int _field8;
        unsigned int _field9;
        unsigned int _field10;
        _Bool _field11;
    } *_apngSource;
    long long _orientation;
    NSObject<OS_dispatch_semaphore> *_framesLock;
    NSArray *_frames;
    _Bool _needBlend;
    unsigned long long _blendFrameIndex;
    struct CGContext *_blendCanvas;
    _Bool _finalized;
    NSData *_data;
    unsigned long long _type;
    double _scale;
    unsigned long long _frameCount;
    unsigned long long _loopCount;
    unsigned long long _width;
    unsigned long long _height;
}

+ (id)decoderWithData:(id)arg1 scale:(double)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isFinalized) _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) unsigned long long height; // @synthesize height=_height;
@property(readonly, nonatomic) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) unsigned long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, nonatomic) unsigned long long frameCount; // @synthesize frameCount=_frameCount;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
- (struct CGImage *)_newBlendedImageWithFrame:(id)arg1;
- (void)_blendImageWithFrame:(id)arg1;
- (_Bool)_createBlendContextIfNeeded;
- (struct CGImage *)_newUnblendedImageAtIndex:(unsigned long long)arg1 extendToCanvas:(_Bool)arg2 decoded:(_Bool *)arg3;
- (void)_updateSourceImageIO;
- (void)_updateSourceAPNG;
- (void)_updateSourceWebP;
- (void)_updateSource;
- (id)_imageProperties;
- (id)_framePropertiesAtIndex:(unsigned long long)arg1;
- (id)_frameAtIndex:(unsigned long long)arg1 decodeForDisplay:(_Bool)arg2;
- (_Bool)_updateData:(id)arg1 final:(_Bool)arg2;
- (id)imageProperties;
- (id)framePropertiesAtIndex:(unsigned long long)arg1;
- (double)frameDurationAtIndex:(unsigned long long)arg1;
- (id)frameAtIndex:(unsigned long long)arg1 decodeForDisplay:(_Bool)arg2;
- (_Bool)updateData:(id)arg1 final:(_Bool)arg2;
- (id)initWithScale:(double)arg1;
- (id)init;
- (void)dealloc;

@end

