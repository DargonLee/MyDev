//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol RFollowTouchViewProtocol <NSObject>
- (void)moveTo:(struct CGPoint)arg1 fromPoint:(struct CGPoint)arg2 source:(long long)arg3;
- (void)moveDistance:(struct CGSize)arg1 source:(long long)arg2;
- (void)endMove;
- (void)beginMove;
- (void)touchBegin;
- (void)becomeActivate;
@end

