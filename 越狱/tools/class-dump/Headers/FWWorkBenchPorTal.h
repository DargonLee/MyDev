//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;

@interface FWWorkBenchPorTal : MTLModel <MTLJSONSerializing>
{
    NSString *_portal_id;
    NSString *_portal_name;
    NSString *_client_type;
    NSString *_isdefault;
    NSString *_isuserset;
    NSString *_show_type;
    NSArray *_categorylist;
}

+ (id)JSONTransformerForKey:(id)arg1;
+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *categorylist; // @synthesize categorylist=_categorylist;
@property(copy, nonatomic) NSString *show_type; // @synthesize show_type=_show_type;
@property(copy, nonatomic) NSString *isuserset; // @synthesize isuserset=_isuserset;
@property(copy, nonatomic) NSString *isdefault; // @synthesize isdefault=_isdefault;
@property(copy, nonatomic) NSString *client_type; // @synthesize client_type=_client_type;
@property(copy, nonatomic) NSString *portal_name; // @synthesize portal_name=_portal_name;
@property(copy, nonatomic) NSString *portal_id; // @synthesize portal_id=_portal_id;

@end

