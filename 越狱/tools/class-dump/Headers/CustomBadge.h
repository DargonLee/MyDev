//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface CustomBadge : UIView
{
    NSString *badgeText;
    UIColor *badgeTextColor;
    UIColor *badgeInsetColor;
    UIColor *badgeFrameColor;
    _Bool badgeFrame;
    _Bool badgeShining;
    double badgeCornerRoundness;
    double badgeScaleFactor;
}

+ (id)customBadgeWithString:(id)arg1 withStringColor:(id)arg2 withInsetColor:(id)arg3 withBadgeFrame:(_Bool)arg4 withBadgeFrameColor:(id)arg5 withScale:(double)arg6 withShining:(_Bool)arg7;
+ (id)customBadgeWithString:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool badgeShining; // @synthesize badgeShining;
@property(nonatomic) double badgeScaleFactor; // @synthesize badgeScaleFactor;
@property(nonatomic) double badgeCornerRoundness; // @synthesize badgeCornerRoundness;
@property(nonatomic) _Bool badgeFrame; // @synthesize badgeFrame;
@property(retain, nonatomic) UIColor *badgeFrameColor; // @synthesize badgeFrameColor;
@property(retain, nonatomic) UIColor *badgeInsetColor; // @synthesize badgeInsetColor;
@property(retain, nonatomic) UIColor *badgeTextColor; // @synthesize badgeTextColor;
@property(retain, nonatomic) NSString *badgeText; // @synthesize badgeText;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawFrameWithContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)drawShineWithContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)drawRoundedRectWithContext:(struct CGContext *)arg1 withRect:(struct CGRect)arg2;
- (void)autoBadgeSizeWithString:(id)arg1;
- (id)initWithString:(id)arg1 withStringColor:(id)arg2 withInsetColor:(id)arg3 withBadgeFrame:(_Bool)arg4 withBadgeFrameColor:(id)arg5 withScale:(double)arg6 withShining:(_Bool)arg7;
- (id)initWithString:(id)arg1 withScale:(double)arg2 withShining:(_Bool)arg3;

@end

