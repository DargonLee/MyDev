//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "FWSafeKeyBoardDelegate-Protocol.h"

@class FWSafeKeyBoard, NSString;

@interface FWSafeTextFiled : UITextField <FWSafeKeyBoardDelegate>
{
    _Bool _isInWebView;
    _Bool _isFirstRes;
    CDUnknownBlockType _doneBtnHaveClick;
    CDUnknownBlockType _inputBlock;
    FWSafeKeyBoard *_keyboard;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstRes; // @synthesize isFirstRes=_isFirstRes;
@property(retain, nonatomic) FWSafeKeyBoard *keyboard; // @synthesize keyboard=_keyboard;
@property(nonatomic) _Bool isInWebView; // @synthesize isInWebView=_isInWebView;
@property(copy, nonatomic) CDUnknownBlockType inputBlock; // @synthesize inputBlock=_inputBlock;
@property(copy, nonatomic) CDUnknownBlockType doneBtnHaveClick; // @synthesize doneBtnHaveClick=_doneBtnHaveClick;
- (void)safeKeyBoard:(id)arg1 didClickCharButton:(id)arg2 isDeleteChar:(_Bool)arg3;
- (_Bool)resignFirstResponder;
- (void)hideSafeKeyBoardInWebView;
- (void)showSafeKeyBoardInWebView;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

