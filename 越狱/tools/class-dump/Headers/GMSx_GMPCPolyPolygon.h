//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPBFloatArray, GMSx_GPBInt32Array, NSData;

@interface GMSx_GMPCPolyPolygon : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int clientSideTessellateStartIndex; // @dynamic clientSideTessellateStartIndex;
@property(nonatomic) _Bool hasClientSideTessellateStartIndex; // @dynamic hasClientSideTessellateStartIndex;
@property(nonatomic) _Bool hasLoopData; // @dynamic hasLoopData;
@property(nonatomic) _Bool hasTriangleFanStartIndex; // @dynamic hasTriangleFanStartIndex;
@property(nonatomic) _Bool hasTriangleFanVertices; // @dynamic hasTriangleFanVertices;
@property(nonatomic) _Bool hasTriangleStripVertices; // @dynamic hasTriangleStripVertices;
@property(nonatomic) _Bool hasVertexCount; // @dynamic hasVertexCount;
@property(retain, nonatomic) GMSx_GPBInt32Array *loopBreakArray; // @dynamic loopBreakArray;
@property(readonly, nonatomic) unsigned long long loopBreakArray_Count; // @dynamic loopBreakArray_Count;
@property(copy, nonatomic) NSData *loopData; // @dynamic loopData;
@property(retain, nonatomic) GMSx_GPBFloatArray *textureCoordinatesArray; // @dynamic textureCoordinatesArray;
@property(readonly, nonatomic) unsigned long long textureCoordinatesArray_Count; // @dynamic textureCoordinatesArray_Count;
@property(retain, nonatomic) GMSx_GPBInt32Array *triangleFanBreaksArray; // @dynamic triangleFanBreaksArray;
@property(readonly, nonatomic) unsigned long long triangleFanBreaksArray_Count; // @dynamic triangleFanBreaksArray_Count;
@property(nonatomic) int triangleFanStartIndex; // @dynamic triangleFanStartIndex;
@property(copy, nonatomic) NSData *triangleFanVertices; // @dynamic triangleFanVertices;
@property(retain, nonatomic) GMSx_GPBInt32Array *triangleIndexArray; // @dynamic triangleIndexArray;
@property(readonly, nonatomic) unsigned long long triangleIndexArray_Count; // @dynamic triangleIndexArray_Count;
@property(retain, nonatomic) GMSx_GPBInt32Array *triangleStripBreaksArray; // @dynamic triangleStripBreaksArray;
@property(readonly, nonatomic) unsigned long long triangleStripBreaksArray_Count; // @dynamic triangleStripBreaksArray_Count;
@property(copy, nonatomic) NSData *triangleStripVertices; // @dynamic triangleStripVertices;
@property(retain, nonatomic) GMSx_GPBInt32Array *unstrokedEdgeArray; // @dynamic unstrokedEdgeArray;
@property(readonly, nonatomic) unsigned long long unstrokedEdgeArray_Count; // @dynamic unstrokedEdgeArray_Count;
@property(nonatomic) int vertexCount; // @dynamic vertexCount;

@end

