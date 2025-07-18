//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface QRView : UIView
{
    UIImageView *_line;
    _Bool isStop;
    struct CGSize _transparentArea;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize transparentArea; // @synthesize transparentArea=_transparentArea;
- (void)addLine:(struct CGPoint *)arg1 pointB:(struct CGPoint *)arg2 ctx:(struct CGContext *)arg3;
- (void)addCornerLineWithContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)addWhiteRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)addCenterClearRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)addScreenFillRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)stopScan;
- (void)startScan;
- (void)startAnimation;
- (void)layoutLine;
- (id)initWithFrame:(struct CGRect)arg1 transparentArea:(struct CGSize)arg2;

@end

