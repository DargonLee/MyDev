//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertController.h>

@class NSMutableArray;

@interface JXTAlertController : UIAlertController
{
    _Bool _jxt_setAlertAnimated;
    CDUnknownBlockType _alertDidShown;
    CDUnknownBlockType _alertDidDismiss;
    double _toastStyleDuration;
    NSMutableArray *_jxt_alertActionArray;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool jxt_setAlertAnimated; // @synthesize jxt_setAlertAnimated=_jxt_setAlertAnimated;
@property(retain, nonatomic) NSMutableArray *jxt_alertActionArray; // @synthesize jxt_alertActionArray=_jxt_alertActionArray;
@property(nonatomic) double toastStyleDuration; // @synthesize toastStyleDuration=_toastStyleDuration;
@property(copy, nonatomic) CDUnknownBlockType alertDidDismiss; // @synthesize alertDidDismiss=_alertDidDismiss;
@property(copy, nonatomic) CDUnknownBlockType alertDidShown; // @synthesize alertDidShown=_alertDidShown;
- (CDUnknownBlockType)addActionDestructiveTitle;
- (CDUnknownBlockType)addActionCancelTitle;
- (CDUnknownBlockType)addActionDefaultTitle;
- (void)alertAnimateDisabled;
- (id)initAlertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
- (CDUnknownBlockType)alertActionsConfig;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

