//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIScrollView, UITextField;

@interface FWRsetPwdViewController : UIViewController <UIScrollViewDelegate, UITextFieldDelegate>
{
    UITextField *_oldTextFiled;
    UITextField *_newdTextFiled;
    UITextField *_againTextFiled;
    UIScrollView *_scrollView;
    UIButton *_confimBtn;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIButton *confimBtn; // @synthesize confimBtn=_confimBtn;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak UITextField *againTextFiled; // @synthesize againTextFiled=_againTextFiled;
@property(nonatomic) __weak UITextField *newdTextFiled; // @synthesize newdTextFiled=_newdTextFiled;
@property(nonatomic) __weak UITextField *oldTextFiled; // @synthesize oldTextFiled=_oldTextFiled;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)confrimBtnClick:(id)arg1;
- (void)textfiledidChange:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)dealloc;
- (void)setupsubViews;
- (void)setupContentView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

