//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IFlyParam.h"

#import "IFlyParamMapProtocol-Protocol.h"

@class NSString;

@interface IFlyISRParam : IFlyParam <IFlyParamMapProtocol>
{
    unsigned long long _parseCategory;
}

@property(nonatomic) unsigned long long parseCategory; // @synthesize parseCategory=_parseCategory;
- (_Bool)isVaild:(id)arg1;
- (id)map:(id)arg1;
- (id)toString:(_Bool)arg1;
- (id)valueForKey:(id)arg1;
- (_Bool)setValue:(id)arg1 forKey:(id)arg2;
- (void)setDefault;
- (_Bool)isLegalUrl:(id)arg1;
- (_Bool)needSaveAudioFile;
- (void)mapDicInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

