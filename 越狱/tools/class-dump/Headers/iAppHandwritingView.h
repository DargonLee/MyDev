//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KGBrushCanvas, NSArray, UIColor;

@interface iAppHandwritingView : UIView
{
    long long _handwritingType;
    double _handwritingWidth;
    UIColor *_handwritingColor;
    KGBrushCanvas *_canvasView;
    NSArray *_brushPaths;
}

@property(copy, nonatomic) NSArray *brushPaths; // @synthesize brushPaths=_brushPaths;
@property(retain, nonatomic) KGBrushCanvas *canvasView; // @synthesize canvasView=_canvasView;
@property(copy, nonatomic) UIColor *handwritingColor; // @synthesize handwritingColor=_handwritingColor;
@property(nonatomic) double handwritingWidth; // @synthesize handwritingWidth=_handwritingWidth;
@property(nonatomic) long long handwritingType; // @synthesize handwritingType=_handwritingType;
- (void).cxx_destruct;
- (void)initViews;
- (void)saveHandwritingSignatureWithCompletion:(CDUnknownBlockType)arg1;
- (void)renderViewWithPaths:(id)arg1;
- (void)clean;
- (void)redo;
- (void)undo;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

