//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MGSwipeAnimation;

@interface MGSwipeSettings : NSObject
{
    _Bool _expandLastButtonBySafeAreaInsets;
    _Bool _keepButtonsSwiped;
    _Bool _onlySwipeButtons;
    _Bool _enableSwipeBounces;
    _Bool _allowsButtonsWithDifferentWidth;
    long long _transition;
    double _threshold;
    double _offset;
    double _topMargin;
    double _bottomMargin;
    double _buttonsDistance;
    MGSwipeAnimation *_showAnimation;
    MGSwipeAnimation *_hideAnimation;
    MGSwipeAnimation *_stretchAnimation;
    double _swipeBounceRate;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsButtonsWithDifferentWidth; // @synthesize allowsButtonsWithDifferentWidth=_allowsButtonsWithDifferentWidth;
@property(nonatomic) double swipeBounceRate; // @synthesize swipeBounceRate=_swipeBounceRate;
@property(nonatomic) _Bool enableSwipeBounces; // @synthesize enableSwipeBounces=_enableSwipeBounces;
@property(nonatomic) _Bool onlySwipeButtons; // @synthesize onlySwipeButtons=_onlySwipeButtons;
@property(nonatomic) _Bool keepButtonsSwiped; // @synthesize keepButtonsSwiped=_keepButtonsSwiped;
@property(retain, nonatomic) MGSwipeAnimation *stretchAnimation; // @synthesize stretchAnimation=_stretchAnimation;
@property(retain, nonatomic) MGSwipeAnimation *hideAnimation; // @synthesize hideAnimation=_hideAnimation;
@property(retain, nonatomic) MGSwipeAnimation *showAnimation; // @synthesize showAnimation=_showAnimation;
@property(nonatomic) _Bool expandLastButtonBySafeAreaInsets; // @synthesize expandLastButtonBySafeAreaInsets=_expandLastButtonBySafeAreaInsets;
@property(nonatomic) double buttonsDistance; // @synthesize buttonsDistance=_buttonsDistance;
@property(nonatomic) double bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(nonatomic) double topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(nonatomic) long long transition; // @synthesize transition=_transition;
@property(nonatomic) double animationDuration;
- (id)init;

@end

