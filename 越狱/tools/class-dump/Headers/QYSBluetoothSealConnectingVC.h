//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYSBluetoothSealViewController.h"

@class NSString, QYSBluetoothSealConnectingView;

@interface QYSBluetoothSealConnectingVC : QYSBluetoothSealViewController
{
    CDUnknownBlockType _didStopConnecting;
    QYSBluetoothSealConnectingView *_connectingView;
    NSString *_bluetooth;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bluetooth; // @synthesize bluetooth=_bluetooth;
@property(retain, nonatomic) QYSBluetoothSealConnectingView *connectingView; // @synthesize connectingView=_connectingView;
@property(copy, nonatomic) CDUnknownBlockType didStopConnecting; // @synthesize didStopConnecting=_didStopConnecting;
- (void)stopConnecting;
- (void)startConnecting:(id)arg1;
- (void)initSubviews;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

