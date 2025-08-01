//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface RCaptureRawPoint : NSObject <NSCopying>
{
    int _tag;
    int _pageNumber;
    int _pdfIndex;
    NSArray *_pointArray;
    double _transformA;
    double _zoomScale;
    long long _ownerUid;
    double _penThickness;
}

- (void).cxx_destruct;
@property(nonatomic) double penThickness; // @synthesize penThickness=_penThickness;
@property(nonatomic) long long ownerUid; // @synthesize ownerUid=_ownerUid;
@property(nonatomic) double zoomScale; // @synthesize zoomScale=_zoomScale;
@property(nonatomic) double transformA; // @synthesize transformA=_transformA;
@property(nonatomic) int pdfIndex; // @synthesize pdfIndex=_pdfIndex;
@property(nonatomic) int pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) int tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSArray *pointArray; // @synthesize pointArray=_pointArray;

@end

