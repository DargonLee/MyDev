//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GMSProjection : NSObject
{
    reffed_ptr_329922e5 _camera;
    struct UIEdgeInsets _padding;
}

@property(readonly, nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) reffed_ptr_329922e5 camera; // @synthesize camera=_camera;
- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_165487e6)visibleRegion;
- (_Bool)containsCoordinate:(struct CLLocationCoordinate2D)arg1;
- (double)pointsForMeters:(double)arg1 atCoordinate:(struct CLLocationCoordinate2D)arg2;
- (struct CLLocationCoordinate2D)coordinateForPoint:(struct CGPoint)arg1;
- (struct CGPoint)pointForCoordinate:(struct CLLocationCoordinate2D)arg1;
- (id)initWithCamera:(const reffed_ptr_329922e5 *)arg1 padding:(const struct UIEdgeInsets *)arg2;

@end

