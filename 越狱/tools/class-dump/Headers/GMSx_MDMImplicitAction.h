//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSString;

@interface GMSx_MDMImplicitAction : NSObject
{
    _Bool _hadPresentationLayer;
    id _initialModelValue;
    id _initialPresentationValue;
    NSString *_keyPath;
    CALayer *_layer;
}

@property(readonly, nonatomic) CALayer *layer; // @synthesize layer=_layer;
@property(readonly, copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(readonly, nonatomic) id initialPresentationValue; // @synthesize initialPresentationValue=_initialPresentationValue;
@property(readonly, nonatomic) _Bool hadPresentationLayer; // @synthesize hadPresentationLayer=_hadPresentationLayer;
@property(readonly, nonatomic) id initialModelValue; // @synthesize initialModelValue=_initialModelValue;
- (void).cxx_destruct;
- (id)initWithLayer:(id)arg1 keyPath:(id)arg2;

@end

