//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSMutableArray, NSString, SPInterfaceActionItemSeparatorView, SPInterfaceActionSequenceView, SPInterfaceHeaderScrollView, UIColor, UIFont, UIImage, UIView;
@protocol SPAlertControllerDelegate;

@interface SPAlertController : UIViewController <UIViewControllerTransitioningDelegate>
{
    _Bool _needDialogBlur;
    _Bool _tapBackgroundViewDismiss;
    _Bool _isForceLayout;
    _Bool _isForceOffset;
    NSString *_title;
    NSString *_message;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedMessage;
    UIImage *_image;
    UIColor *_titleColor;
    UIFont *_titleFont;
    UIColor *_messageColor;
    UIFont *_messageFont;
    long long _textAlignment;
    UIColor *_imageTintColor;
    long long _actionAxis;
    double _minDistanceToEdges;
    double _cornerRadius;
    id <SPAlertControllerDelegate> _delegate;
    long long _preferredStyle;
    long long _animationType;
    double _cornerRadiusForAlert;
    double _maxTopMarginForActionSheet;
    double _maxMarginForAlert;
    long long _maxNumberOfActionHorizontalArrangementForAlert;
    double _offsetYForAlert;
    UIView *_alertControllerView;
    UIView *_containerView;
    UIView *_alertView;
    UIView *_customAlertView;
    SPInterfaceHeaderScrollView *_headerView;
    UIView *_customHeaderView;
    SPInterfaceActionSequenceView *_actionSequenceView;
    UIView *_customActionSequenceView;
    UIView *_componentView;
    SPInterfaceActionItemSeparatorView *_headerActionLine;
    NSMutableArray *_headerActionLineConstraints;
    SPInterfaceActionItemSeparatorView *_componentActionLine;
    NSMutableArray *_componentViewConstraints;
    NSMutableArray *_componentActionLineConstraints;
    UIView *_dimmingKnockoutBackdropView;
    NSMutableArray *_alertControllerViewConstraints;
    NSMutableArray *_headerViewConstraints;
    NSMutableArray *_actionSequenceViewConstraints;
    long long _backgroundViewAppearanceStyle;
    double _backgroundViewAlpha;
    NSArray *_actions;
    NSArray *_textFields;
    NSMutableArray *_otherActions;
    struct CGSize _imageLimitSize;
    struct CGPoint _offsetForAlert;
    struct CGSize _customViewSize;
}

+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 animationType:(long long)arg4 customFooterView:(id)arg5;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 animationType:(long long)arg4 customCenterView:(id)arg5;
+ (id)alertControllerWithPreferredStyle:(long long)arg1 animationType:(long long)arg2 customHeaderView:(id)arg3;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 animationType:(long long)arg4 customView:(id)arg5;
+ (id)alertControllerWithCustomActionSequenceView:(id)arg1 title:(id)arg2 message:(id)arg3 preferredStyle:(long long)arg4 animationType:(long long)arg5;
+ (id)alertControllerWithCustomHeaderView:(id)arg1 preferredStyle:(long long)arg2 animationType:(long long)arg3;
+ (id)alertControllerWithCustomAlertView:(id)arg1 preferredStyle:(long long)arg2 animationType:(long long)arg3;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3 animationType:(long long)arg4;
+ (id)alertControllerWithTitle:(id)arg1 message:(id)arg2 preferredStyle:(long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isForceOffset; // @synthesize isForceOffset=_isForceOffset;
@property(nonatomic) _Bool isForceLayout; // @synthesize isForceLayout=_isForceLayout;
@property(retain, nonatomic) NSMutableArray *otherActions; // @synthesize otherActions=_otherActions;
@property(retain, nonatomic) NSArray *textFields; // @synthesize textFields=_textFields;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) double backgroundViewAlpha; // @synthesize backgroundViewAlpha=_backgroundViewAlpha;
@property(nonatomic) long long backgroundViewAppearanceStyle; // @synthesize backgroundViewAppearanceStyle=_backgroundViewAppearanceStyle;
@property(retain, nonatomic) NSMutableArray *actionSequenceViewConstraints; // @synthesize actionSequenceViewConstraints=_actionSequenceViewConstraints;
@property(retain, nonatomic) NSMutableArray *headerViewConstraints; // @synthesize headerViewConstraints=_headerViewConstraints;
@property(retain, nonatomic) NSMutableArray *alertControllerViewConstraints; // @synthesize alertControllerViewConstraints=_alertControllerViewConstraints;
@property(retain, nonatomic) UIView *dimmingKnockoutBackdropView; // @synthesize dimmingKnockoutBackdropView=_dimmingKnockoutBackdropView;
@property(retain, nonatomic) NSMutableArray *componentActionLineConstraints; // @synthesize componentActionLineConstraints=_componentActionLineConstraints;
@property(retain, nonatomic) NSMutableArray *componentViewConstraints; // @synthesize componentViewConstraints=_componentViewConstraints;
@property(nonatomic) __weak SPInterfaceActionItemSeparatorView *componentActionLine; // @synthesize componentActionLine=_componentActionLine;
@property(retain, nonatomic) NSMutableArray *headerActionLineConstraints; // @synthesize headerActionLineConstraints=_headerActionLineConstraints;
@property(nonatomic) __weak SPInterfaceActionItemSeparatorView *headerActionLine; // @synthesize headerActionLine=_headerActionLine;
@property(nonatomic) struct CGSize customViewSize; // @synthesize customViewSize=_customViewSize;
@property(retain, nonatomic) UIView *componentView; // @synthesize componentView=_componentView;
@property(retain, nonatomic) UIView *customActionSequenceView; // @synthesize customActionSequenceView=_customActionSequenceView;
@property(nonatomic) __weak SPInterfaceActionSequenceView *actionSequenceView; // @synthesize actionSequenceView=_actionSequenceView;
@property(retain, nonatomic) UIView *customHeaderView; // @synthesize customHeaderView=_customHeaderView;
@property(nonatomic) __weak SPInterfaceHeaderScrollView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *customAlertView; // @synthesize customAlertView=_customAlertView;
@property(nonatomic) __weak UIView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *alertControllerView; // @synthesize alertControllerView=_alertControllerView;
@property(nonatomic) double offsetYForAlert; // @synthesize offsetYForAlert=_offsetYForAlert;
@property(nonatomic) long long maxNumberOfActionHorizontalArrangementForAlert; // @synthesize maxNumberOfActionHorizontalArrangementForAlert=_maxNumberOfActionHorizontalArrangementForAlert;
@property(nonatomic) double maxMarginForAlert; // @synthesize maxMarginForAlert=_maxMarginForAlert;
@property(nonatomic) double maxTopMarginForActionSheet; // @synthesize maxTopMarginForActionSheet=_maxTopMarginForActionSheet;
@property(nonatomic) double cornerRadiusForAlert; // @synthesize cornerRadiusForAlert=_cornerRadiusForAlert;
@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
@property(nonatomic) long long preferredStyle; // @synthesize preferredStyle=_preferredStyle;
@property(nonatomic) __weak id <SPAlertControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool tapBackgroundViewDismiss; // @synthesize tapBackgroundViewDismiss=_tapBackgroundViewDismiss;
@property(nonatomic) _Bool needDialogBlur; // @synthesize needDialogBlur=_needDialogBlur;
@property(nonatomic) struct CGPoint offsetForAlert; // @synthesize offsetForAlert=_offsetForAlert;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double minDistanceToEdges; // @synthesize minDistanceToEdges=_minDistanceToEdges;
@property(nonatomic) long long actionAxis; // @synthesize actionAxis=_actionAxis;
@property(retain, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(nonatomic) struct CGSize imageLimitSize; // @synthesize imageLimitSize=_imageLimitSize;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *messageFont; // @synthesize messageFont=_messageFont;
@property(retain, nonatomic) UIColor *messageColor; // @synthesize messageColor=_messageColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSAttributedString *attributedMessage; // @synthesize attributedMessage=_attributedMessage;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)setIconLimitSize:(struct CGSize)arg1;
- (void)setIcon:(id)arg1;
- (void)keyboardFrameWillChange:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (struct CGSize)sizeForCustomView:(id)arg1;
- (void)makeViewOffsetWithAnimated:(_Bool)arg1;
- (void)setupActionAxis;
- (void)updateActionAxis;
- (void)textFieldDidEndOnExit:(id)arg1;
- (void)setupPreferredMaxLayoutWidthForLabel:(id)arg1;
- (void)configureHeaderView;
- (void)handleIQKeyboardManager;
- (void)handleIncompleteTextDisplay;
- (double)maxWidth;
- (void)layoutActionSequenceView;
- (void)layoutComponentActionLine;
- (void)layoutComponentView;
- (void)layoutHeaderActionLine;
- (void)layoutHeaderView;
- (void)layoutChildViews;
- (void)layoutAlertControllerViewForAnimationTypeWithHV:(id)arg1 equalAttribute:(long long)arg2 notEqualAttribute:(long long)arg3 lessOrGreaterRelation:(long long)arg4;
- (void)layoutAlertControllerViewForActionSheetStyle;
- (void)layoutAlertControllerViewForAlertStyle;
- (void)layoutAlertControllerView;
- (void)initialize;
- (id)init;
- (id)initWithTitle:(id)arg1 message:(id)arg2 customAlertView:(id)arg3 customHeaderView:(id)arg4 customActionSequenceView:(id)arg5 componentView:(id)arg6 preferredStyle:(long long)arg7 animationType:(long long)arg8;
- (void)updateCustomViewSize:(struct CGSize)arg1;
- (void)setBackgroundViewAppearanceStyle:(long long)arg1 alpha:(double)arg2;
- (double)customSpacingAfterAction:(id)arg1;
- (void)setCustomSpacing:(double)arg1 afterAction:(id)arg2;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;
- (void)addAction:(id)arg1;
- (void)insertComponentView:(id)arg1;
- (void)setOffsetForAlert:(struct CGPoint)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

