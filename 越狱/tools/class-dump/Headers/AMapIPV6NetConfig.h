//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMapCloudConfig.h"

@class NSNumber, NSString;

@interface AMapIPV6NetConfig : AMapCloudConfig
{
    _Bool _static_ip_direct_enable;
    _Bool _bgp_ip_direct_enable;
    _Bool _realtime_upload;
    _Bool _static_enable;
    _Bool _bgp_enable;
    int _static_retry;
    int _bgp_retry;
    NSNumber *_downgradeThreshold;
    NSString *_name;
    double _static_timeout;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bgp_enable; // @synthesize bgp_enable=_bgp_enable;
@property(nonatomic) _Bool static_enable; // @synthesize static_enable=_static_enable;
@property(nonatomic) int bgp_retry; // @synthesize bgp_retry=_bgp_retry;
@property(nonatomic) int static_retry; // @synthesize static_retry=_static_retry;
@property(nonatomic) double static_timeout; // @synthesize static_timeout=_static_timeout;
@property(nonatomic) _Bool realtime_upload; // @synthesize realtime_upload=_realtime_upload;
@property(nonatomic) _Bool bgp_ip_direct_enable; // @synthesize bgp_ip_direct_enable=_bgp_ip_direct_enable;
@property(nonatomic) _Bool static_ip_direct_enable; // @synthesize static_ip_direct_enable=_static_ip_direct_enable;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSNumber *downgradeThreshold; // @synthesize downgradeThreshold=_downgradeThreshold;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCloudConfig:(id)arg1;

@end

