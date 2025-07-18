//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KGBrushTool.h"

@class KGBrushBezierNode, KGBrushCanvas, KGBrushRandom, NSMutableArray;

@interface KGBrushFreehandTool : KGBrushTool
{
    _Bool firstEver_;
    struct CGPoint lastLocation_;
    float lastRemainder_;
    _Bool clearBuffer_;
    struct CGRect strokeBounds_;
    NSMutableArray *accumulatedStrokePoints_;
    KGBrushBezierNode *pointsToFit_[5];
    int pointsIndex_;
    KGBrushRandom *randomizer_;
    _Bool realPressure;
    _Bool _eraseMode;
    KGBrushCanvas *_canvas;
    unsigned long long _brushType;
}

@property(nonatomic) unsigned long long brushType; // @synthesize brushType=_brushType;
@property(nonatomic) _Bool eraseMode; // @synthesize eraseMode=_eraseMode;
@property(nonatomic) __weak KGBrushCanvas *canvas; // @synthesize canvas=_canvas;
@property(nonatomic) _Bool realPressure; // @synthesize realPressure;
- (void).cxx_destruct;
- (void)paintPath:(id)arg1 inCanvas:(id)arg2;
- (void)gestureCanceled:(id)arg1;
- (void)gestureEnded:(id)arg1;
- (void)gestureMoved:(id)arg1;
- (void)gestureBegan:(id)arg1;
- (void)paintFittedPoints:(id)arg1;
- (void)averagePointsFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (struct CGPoint)documentLocationFromRecognizer:(id)arg1;
- (id)init;
- (void)gestureEndedWithMoved:(_Bool)arg1 inCanvas:(id)arg2;
- (void)gestureMovedWithPoint:(struct CGPoint)arg1 pressure:(double)arg2 inCanvas:(id)arg3;
- (void)gestureBeganWithPoint:(struct CGPoint)arg1;

@end

