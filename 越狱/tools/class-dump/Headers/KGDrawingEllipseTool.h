//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KGDrawingTool-Protocol.h"

@class NSString, UIColor;

@interface KGDrawingEllipseTool : NSObject <KGDrawingTool>
{
    _Bool _isFill;
    UIColor *color;
    double width;
    double alpha;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) _Bool isFill; // @synthesize isFill=_isFill;
@property(nonatomic) double alpha; // @synthesize alpha;
@property(nonatomic) double width; // @synthesize width;
@property(retain, nonatomic) UIColor *color; // @synthesize color;
- (void).cxx_destruct;
- (void)draw;
- (void)moveFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (void)initialPoint:(struct CGPoint)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

