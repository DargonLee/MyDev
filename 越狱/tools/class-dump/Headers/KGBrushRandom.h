//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KGBrushRandom : NSObject
{
    unsigned int MT_[624];
    int ix_;
}

- (float)nextSign;
- (float)nextFloatMin:(float)arg1 max:(float)arg2;
- (float)nextFloat;
- (unsigned int)nextInt;
- (void)generateNumbers;
- (id)initWithSeed:(unsigned int)arg1;

@end

