//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshBackFooter.h"

@class NSMutableDictionary, UILabel;

@interface MJRefreshBackStateFooter : MJRefreshBackFooter
{
    UILabel *_stateLabel;
    double _labelLeftInset;
    NSMutableDictionary *_stateTitles;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *stateTitles; // @synthesize stateTitles=_stateTitles;
@property(nonatomic) double labelLeftInset; // @synthesize labelLeftInset=_labelLeftInset;
- (void)setState:(long long)arg1;
- (void)placeSubviews;
- (void)prepare;
- (id)titleForState:(long long)arg1;
- (void)setTitle:(id)arg1 forState:(long long)arg2;
@property(readonly, nonatomic) __weak UILabel *stateLabel;

@end

