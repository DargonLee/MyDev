//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSFeature-Protocol.h"

@class GMSRenderOpInfo, NSArray, NSString;

@interface GMSStripifiedMesh : NSObject <GMSFeature>
{
    vector_5a6265c0 _vertices;
    vector_42289879 _normals;
    vector_12bd641b _edgeIndices;
    vector_12bd641b _normalIndices;
    short _rank;
    unsigned int _attributes;
    GMSRenderOpInfo *_renderOpInfo;
    NSArray *_strips;
    struct StyleID _stylingID;
}

+ (id)unpackedMeshWithProto:(id)arg1 wireContext:(id)arg2;
@property(readonly, nonatomic) unsigned int attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) short rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) struct StyleID stylingID; // @synthesize stylingID=_stylingID;
@property(readonly, nonatomic) NSArray *strips; // @synthesize strips=_strips;
@property(readonly, nonatomic) GMSRenderOpInfo *renderOpInfo; // @synthesize renderOpInfo=_renderOpInfo;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isClickable;
- (unsigned int)type;
@property(readonly, copy) NSString *description;
- (unsigned long long)numberOfEdges;
- (unsigned long long)numberOfTriangles;
- (_Bool)isSmoothShaded;
- (_Bool)hasIndoorData;
- (STLRange_5078e726)normals;
- (STLRange_4dbe973e)vertices;
- (STLRange_9491c893)normalIndices;
- (STLRange_9491c893)edgeIndices;
- (id)initWithRenderOpInfo:(id)arg1 vertices:(vector_5a6265c0 *)arg2 strips:(id)arg3 edgeIndices:(vector_12bd641b *)arg4 normals:(vector_42289879 *)arg5 normalIndices:(vector_12bd641b *)arg6 stylingID:(const struct StyleID *)arg7 rank:(short)arg8 attributes:(unsigned int)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

