//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol QYSBluetoothSealBridgeDelegate;

@interface QYSBluetoothSealBridge : NSObject
{
    _Bool _debugLog;
    id <QYSBluetoothSealBridgeDelegate> _delegate;
}

+ (id)bridge;
- (void).cxx_destruct;
@property(nonatomic) _Bool debugLog; // @synthesize debugLog=_debugLog;
@property(nonatomic) __weak id <QYSBluetoothSealBridgeDelegate> delegate; // @synthesize delegate=_delegate;
- (void)resignJSAPI;
- (void)registerJSAPIAtWebView:(id)arg1;

@end

