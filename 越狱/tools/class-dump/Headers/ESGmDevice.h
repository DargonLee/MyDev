//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ESGmSkfApi.h"

@class ESBleKey;

@interface ESGmDevice : ESGmSkfApi
{
    ESBleKey *bleKey;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ESBleKey *bleKey; // @synthesize bleKey;
- (void)onDriverDisconnected:(id)arg1;
- (_Bool)isConnected;
- (_Bool)disconnect;
- (_Bool)connect:(id)arg1;
- (id)sdkConfig;
- (id)init;

@end

