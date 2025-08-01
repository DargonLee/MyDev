//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RPageLineData.h"

#import "NSCoding-Protocol.h"

@class NSNumber, NSString, NSValue, UIImage;

@interface RWriteTempletModel : RPageLineData <NSCoding>
{
    _Bool _isSelect;
    _Bool _showMode;
    NSNumber *_whScale;
    UIImage *_signSnap;
    UIImage *_selectSnap;
    NSValue *_bornRectSize;
    NSString *_name;
    double _itemH;
    NSString *_localFilePath;
    double _editTime;
    NSString *_ownerName;
    long long _ownerUid;
    NSString *_desc;
}

+ (id)templetFromString2:(id)arg1;
+ (id)modelCustomPropertyMapper;
+ (id)writeTempletWithBornSize:(struct CGSize)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) long long ownerUid; // @synthesize ownerUid=_ownerUid;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(nonatomic) double editTime; // @synthesize editTime=_editTime;
@property(retain, nonatomic) NSString *localFilePath; // @synthesize localFilePath=_localFilePath;
@property(nonatomic) double itemH; // @synthesize itemH=_itemH;
@property(nonatomic) _Bool showMode; // @synthesize showMode=_showMode;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSValue *bornRectSize; // @synthesize bornRectSize=_bornRectSize;
@property(retain, nonatomic) UIImage *selectSnap; // @synthesize selectSnap=_selectSnap;
@property(retain, nonatomic) UIImage *signSnap; // @synthesize signSnap=_signSnap;
@property(retain, nonatomic) NSNumber *whScale; // @synthesize whScale=_whScale;
- (long long)getOwnerUid;
- (id)getOwnerName;
- (id)getDesc;
- (int)coverToColor:(float)arg1 b:(float)arg2 c:(float)arg3;
- (id)transTo:(struct CGSize)arg1 from:(struct CGRect)arg2 rotateCenter:(struct CGPoint)arg3 trans:(struct CGAffineTransform)arg4;
- (void)moveOriginTo:(struct CGPoint)arg1;
- (struct CGRect)minRect;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

