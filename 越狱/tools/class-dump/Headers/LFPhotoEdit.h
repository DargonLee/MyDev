//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, UIImage;

@interface LFPhotoEdit : NSObject
{
    UIImage *_editPosterImage;
    UIImage *_editPreviewImage;
    NSData *_editPreviewData;
    NSArray *_durations;
    UIImage *_editImage;
    NSDictionary *_editData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *editData; // @synthesize editData=_editData;
@property(readonly, nonatomic) UIImage *editImage; // @synthesize editImage=_editImage;
@property(readonly, nonatomic) NSArray *durations; // @synthesize durations=_durations;
@property(readonly, nonatomic) NSData *editPreviewData; // @synthesize editPreviewData=_editPreviewData;
@property(readonly, nonatomic) UIImage *editPreviewImage; // @synthesize editPreviewImage=_editPreviewImage;
@property(readonly, nonatomic) UIImage *editPosterImage; // @synthesize editPosterImage=_editPosterImage;
- (void)setEditingImage:(id)arg1 durations:(id)arg2;
- (id)initWithEditImage:(id)arg1 previewImage:(id)arg2 durations:(id)arg3 data:(id)arg4;
- (id)initWithEditImage:(id)arg1 previewImage:(id)arg2 data:(id)arg3;

@end

