//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBCentralManager, CBPeripheral;
@protocol EsBLEKeyDelegate, EsBLEManagerDelegate, EsScanDelegate;

@protocol EsBLEManagerProtocol <NSObject>
@property(retain) CBCentralManager *CM;
- (void)cancelPeripheralConnection:(CBPeripheral *)arg1;
- (void)connectPeripheral:(CBPeripheral *)arg1 Delegate:(id <EsBLEKeyDelegate>)arg2 NotifyOnDisconnect:(_Bool)arg3;
- (void)stopScan;
- (int)scanBLEKey:(double)arg1 Delegate:(id <EsScanDelegate>)arg2 AllowDuplicatesKey:(_Bool)arg3;
- (int)scanBLEKey:(double)arg1 AllowDuplicatesKey:(_Bool)arg2;
- (int)controlSetup:(id <EsBLEManagerDelegate>)arg1;
@end

