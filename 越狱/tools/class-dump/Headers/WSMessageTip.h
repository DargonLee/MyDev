//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface WSMessageTip : NSObject
{
    _Bool _fastDismiss;
    UIView *_bigShowView;
    UIView *_smallShowView;
}

+ (void)dismissWait:(id)arg1;
+ (void)showWait:(id)arg1;
+ (void)showSendFail:(id)arg1;
+ (void)showSendSuccess:(id)arg1 range:(struct _NSRange)arg2;
+ (void)dismiss;
+ (id)addAttDicWithString:(id)arg1;
+ (void)showResultAttributeMessage:(id)arg1 withImagePath:(id)arg2;
+ (void)showResultMessage:(id)arg1 withImagePath:(id)arg2;
+ (void)showNoNetMessage:(id)arg1;
+ (void)showFailMessage:(id)arg1;
+ (void)showSuccessMessage:(id)arg1;
+ (void)showMoveMessage:(id)arg1;
+ (void)showMessage:(id)arg1;
+ (id)share;
- (void).cxx_destruct;
@property(nonatomic) _Bool fastDismiss; // @synthesize fastDismiss=_fastDismiss;
@property(retain, nonatomic) UIView *smallShowView; // @synthesize smallShowView=_smallShowView;
@property(retain, nonatomic) UIView *bigShowView; // @synthesize bigShowView=_bigShowView;

@end

