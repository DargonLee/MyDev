//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MGSwipeAnimation : NSObject
{
    double _duration;
    long long _easingFunction;
}

@property(nonatomic) long long easingFunction; // @synthesize easingFunction=_easingFunction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (double)value:(double)arg1 duration:(double)arg2 from:(double)arg3 to:(double)arg4;
- (id)init;

@end

