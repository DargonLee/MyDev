//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMPCAreaRenderOpGroup, GMSx_GMPCLabelRenderOpGroup, GMSx_GMPCLineRenderOpGroup, GMSx_GMPCProviderTable, GMSx_GMPCRasterRenderOpGroup, GMSx_GMPCShaderRenderOpGroup, GMSx_GMPCVolumeRenderOpGroup, NSMutableArray;

@interface GMSx_GMPCClientVectorOps : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMPCAreaRenderOpGroup *areaGroup; // @dynamic areaGroup;
@property(nonatomic) _Bool hasAreaGroup; // @dynamic hasAreaGroup;
@property(nonatomic) _Bool hasLabelGroup; // @dynamic hasLabelGroup;
@property(nonatomic) _Bool hasLineGroup; // @dynamic hasLineGroup;
@property(nonatomic) _Bool hasProviderTable; // @dynamic hasProviderTable;
@property(nonatomic) _Bool hasRasterGroup; // @dynamic hasRasterGroup;
@property(nonatomic) _Bool hasShaderGroup; // @dynamic hasShaderGroup;
@property(nonatomic) _Bool hasVertexEncoding; // @dynamic hasVertexEncoding;
@property(nonatomic) _Bool hasVolumeGroup; // @dynamic hasVolumeGroup;
@property(retain, nonatomic) GMSx_GMPCLabelRenderOpGroup *labelGroup; // @dynamic labelGroup;
@property(retain, nonatomic) GMSx_GMPCLineRenderOpGroup *lineGroup; // @dynamic lineGroup;
@property(retain, nonatomic) NSMutableArray *multiZoomStyleTableArray; // @dynamic multiZoomStyleTableArray;
@property(readonly, nonatomic) unsigned long long multiZoomStyleTableArray_Count; // @dynamic multiZoomStyleTableArray_Count;
@property(retain, nonatomic) GMSx_GMPCProviderTable *providerTable; // @dynamic providerTable;
@property(retain, nonatomic) GMSx_GMPCRasterRenderOpGroup *rasterGroup; // @dynamic rasterGroup;
@property(retain, nonatomic) GMSx_GMPCShaderRenderOpGroup *shaderGroup; // @dynamic shaderGroup;
@property(nonatomic) int vertexEncoding; // @dynamic vertexEncoding;
@property(retain, nonatomic) GMSx_GMPCVolumeRenderOpGroup *volumeGroup; // @dynamic volumeGroup;

@end

