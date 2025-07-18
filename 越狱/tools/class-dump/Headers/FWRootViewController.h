//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "FWTabBarDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class FBKVOController, FWAppTheme, FWChatListViewController, FWDiscoverViewController, FWFriendsViewController, FWMineViewController, FWTabBar, NSArray, NSDate, NSMutableArray, NSString, UIView;

@interface FWRootViewController : UITabBarController <UITabBarControllerDelegate, FWTabBarDelegate>
{
    FBKVOController *_KVOController;
    _Bool _judgeVersion;
    _Bool _showExtenView;
    int _tabbarExpedHeight;
    FWTabBar *_mytabBar;
    FWChatListViewController *_conversationVC;
    UIView *_topRightView;
    NSMutableArray *_items;
    NSArray *_childVCArray;
    FWFriendsViewController *_friendsVC;
    FWDiscoverViewController *_discoverVC;
    FWMineViewController *_mineVC;
    NSMutableArray *_helpers;
    FWAppTheme *_theme;
    NSDate *_lastSelectedDate;
    NSArray *_localImages;
    id _observer;
    double _startHeight;
    double _tableViewDisH;
    UIView *_tabbgView;
    NSMutableArray *_dynamicViewControllers;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *dynamicViewControllers; // @synthesize dynamicViewControllers=_dynamicViewControllers;
@property(nonatomic) int tabbarExpedHeight; // @synthesize tabbarExpedHeight=_tabbarExpedHeight;
@property(nonatomic) __weak UIView *tabbgView; // @synthesize tabbgView=_tabbgView;
@property(nonatomic) double tableViewDisH; // @synthesize tableViewDisH=_tableViewDisH;
@property(nonatomic) double startHeight; // @synthesize startHeight=_startHeight;
@property(nonatomic) _Bool showExtenView; // @synthesize showExtenView=_showExtenView;
@property(retain, nonatomic) id observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSArray *localImages; // @synthesize localImages=_localImages;
@property(retain, nonatomic) NSDate *lastSelectedDate; // @synthesize lastSelectedDate=_lastSelectedDate;
@property(retain, nonatomic) FWAppTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) NSMutableArray *helpers; // @synthesize helpers=_helpers;
@property(retain, nonatomic) FWMineViewController *mineVC; // @synthesize mineVC=_mineVC;
@property(retain, nonatomic) FWDiscoverViewController *discoverVC; // @synthesize discoverVC=_discoverVC;
@property(retain, nonatomic) FWFriendsViewController *friendsVC; // @synthesize friendsVC=_friendsVC;
@property(retain, nonatomic) NSArray *childVCArray; // @synthesize childVCArray=_childVCArray;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool judgeVersion; // @synthesize judgeVersion=_judgeVersion;
@property(retain, nonatomic) UIView *topRightView; // @synthesize topRightView=_topRightView;
@property(retain, nonatomic) FWChatListViewController *conversationVC; // @synthesize conversationVC=_conversationVC;
@property(nonatomic) __weak FWTabBar *mytabBar; // @synthesize mytabBar=_mytabBar;
- (void)setSelectedIndexWithMoreNavigationController:(unsigned long long)arg1;
- (void)setViewControllersWithMoreNavigationController:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)addReachabilityChangedNotification;
- (void)isOrNotHorizontalScreenRotating;
- (void)addOrientationNotifications;
- (void)addtopRightViewForiphoneX;
- (void)fixDeviceOrientation;
- (void)handleDeviceOrientationDidChange:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)orientationChange:(_Bool)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)setGestureCheck;
- (void)setFaceIDCheck;
- (void)setFaceAwakeCheck:(id)arg1;
- (void)safeCheck;
- (_Bool)isDoubleClick;
- (void)removeUItabBarButton;
- (void)changeTabBarFrame;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (void)bgViewDidClick;
- (void)setupMyTabBarFrameWithHeight:(double)arg1;
- (void)tabBar:(id)arg1 scrollToDistance:(double)arg2 status:(long long)arg3;
- (void)tabBar:(id)arg1 didClickButtonFromIndex:(long long)arg2 toIndex:(long long)arg3;
- (_Bool)tabBar:(id)arg1 shouldSelectViewControllerInindex:(long long)arg2;
- (id)getTabChileVcWiththemNav:(id)arg1;
- (void)showNavgationRightItems:(id)arg1 inVc:(id)arg2;
- (void)setUpOneChildViewController:(id)arg1 ImageName:(id)arg2 selName:(id)arg3 title:(id)arg4;
- (void)navgationTextColorWith:(id)arg1 textColorStr:(id)arg2;
- (void)setupStatusBarColorWith:(id)arg1;
- (void)handleThemeDic:(id)arg1;
- (void)handleJointenanDataWith:(id)arg1;
- (void)setFontSize:(id)arg1;
- (void)setupLoginConfigAfterLoginWithDic:(id)arg1;
- (void)loadAllData;
- (void)judgeVersionWithDateDic:(id)arg1 key:(id)arg2 oldVersion:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)getVersionWithKey:(id)arg1;
- (void)changeCurrenTheme;
- (void)setupScreenshot;
- (void)setupObserverThemeWithKVO;
- (void)setDefaultThemeWithDic:(id)arg1;
- (void)startConfigDefaultTheme;
- (void)setupTabBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

