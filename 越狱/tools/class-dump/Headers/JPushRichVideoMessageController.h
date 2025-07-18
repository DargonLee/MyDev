//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JPushRichVideoMessageWebViewControllerDelegate-Protocol.h"

@class JPushRichVideoMessageWebViewController, NSDictionary, NSString, UIWindow;
@protocol JPushRichVideoMessageControllerDelegate;

@interface JPushRichVideoMessageController : NSObject <JPushRichVideoMessageWebViewControllerDelegate>
{
    UIWindow *_window;
    JPushRichVideoMessageWebViewController *_webController;
    id <JPushRichVideoMessageControllerDelegate> _delegate;
    NSDictionary *_remoteInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *remoteInfo; // @synthesize remoteInfo=_remoteInfo;
@property(nonatomic) __weak id <JPushRichVideoMessageControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JPushRichVideoMessageWebViewController *webController; // @synthesize webController=_webController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)richVideoMessageWebViewControllerClose:(id)arg1;
- (void)removeWindow;
- (void)removeWindowWithAnimate;
- (void)showRichMessageWithcRemoteInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

