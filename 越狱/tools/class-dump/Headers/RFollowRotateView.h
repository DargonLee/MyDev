//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RFollowTouchView.h"

@protocol RFollowRotateViewProtocol;

@interface RFollowRotateView : RFollowTouchView
{
    id <RFollowRotateViewProtocol> _rotateDelegate;
}

+ (id)viewWithDelegate:(id)arg1 rotateView:(id)arg2 position:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <RFollowRotateViewProtocol> rotateDelegate; // @synthesize rotateDelegate=_rotateDelegate;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)rotate:(double)arg1;
- (void)rotateHandle:(id)arg1;

@end

