//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSIndoorStateListener-Protocol.h"

@class GMSIndoorState, GMSIndoorVectorTileProvider, NSArray, NSString;

@interface GMSIndoorTileAnimation : NSObject <GMSIndoorStateListener>
{
    struct reffed_ptr<(anonymous namespace)::IndoorTileAnimationBehavior> _tileAnimationBehavior;
    GMSIndoorState *_indoorState;
    struct GMSFeatureID _lastLevelChangeFrom;
    struct GMSFeatureID _lastLevelChangeTo;
    NSArray *_animatingTiles;
    GMSIndoorVectorTileProvider *_indoorTileProvider;
    reffed_ptr_57016b98 _animationEndedState;
}

@property(readonly, nonatomic) reffed_ptr_57016b98 animationEndedState; // @synthesize animationEndedState=_animationEndedState;
@property(nonatomic) __weak GMSIndoorVectorTileProvider *indoorTileProvider; // @synthesize indoorTileProvider=_indoorTileProvider;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)indoorState:(id)arg1 didChangeActiveLevel:(struct GMSFeatureID)arg2 fromLevel:(struct GMSFeatureID)arg3;
- (void)abortAnimationWithRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1;
- (void)startAnimationIfNeededWithRenderer:(objc_metadata_hider_ptr_a1c2b231)arg1 entityResources:(id)arg2;
- (id)animatingTiles;
@property(readonly, nonatomic) _Bool animationInProgress;
- (id)initWithIndoorState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

