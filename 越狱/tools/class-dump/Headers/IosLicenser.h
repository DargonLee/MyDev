//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LicenseReader;

@interface IosLicenser : NSObject
{
    _Bool is_remote_authorize;
    struct Licenser *_licenser;
    LicenseReader *_reader;
    int _state;
}

+ (id)get_env_device_id;
- (void).cxx_destruct;
- (id)get_env_signature_md5;
- (id)get_env_package_name;
- (id)get_license_device_id;
- (id)get_license_algorithm;
- (id)get_license_api_key;
- (id)get_license_signature_md5;
- (id)get_license_package_name;
- (id)get_license_info:(id)arg1;
- (id)get_decrypted_license;
- (long long)get_expire_time;
- (int)remote_authenticate;
- (int)authenticate;
- (int)init:(id)arg1 license_path:(id)arg2 algorithm_id:(int)arg3;
- (int)init:(id)arg1 license_path:(id)arg2;
- (id)init;

@end

