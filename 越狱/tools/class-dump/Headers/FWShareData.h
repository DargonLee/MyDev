//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FWContactSelectViewControllerDelegate-Protocol.h"

@class EGOCache, FWBasePersonModel, FWCAConfig, FWChatListViewController, FWChatNetAndDataObject, FWGLobalConfig, FWHrmConfig, FWLoginConfing, FWMineConfig, FWSearchInfo, FWSyncInfo, FWSysInfo, FWTenantModel, FWThemeData, FWWaterConfig, FWWorkElement, FWWpsConfig, NSArray, NSData, NSDictionary, NSMutableArray, NSString, UIViewController, VPNSettingViewController, WKWebViewConfiguration;
@protocol OS_dispatch_queue;

@interface FWShareData : NSObject <FWContactSelectViewControllerDelegate>
{
    _Bool _refershLoginUI;
    _Bool _switchServer;
    _Bool _changeArgeeStatus;
    _Bool _changeTheme;
    _Bool _openETPush;
    _Bool _isOpenEsearchAuto;
    _Bool _enable_redpacket;
    _Bool _enable_msg;
    _Bool _enable_video;
    _Bool _containMsg;
    _Bool _openVPN;
    _Bool _faceIDCheck;
    _Bool _fingerPrintCheck;
    _Bool _gestureCheck;
    _Bool _gestureCheckForce;
    _Bool _faceIDCheckForce;
    _Bool _faceLogin;
    _Bool _ios_root_check;
    _Bool _isChangeNewAccountLogin;
    _Bool _isShowOrigImage;
    _Bool _secondAuthEnable;
    _Bool _qysLoginOpen;
    int _maxCount;
    int _leftTabBtn_x;
    int _leftTabBtnOffset;
    FWLoginConfing *_loginConfing;
    FWThemeData *_themeData;
    FWWaterConfig *_waterConfig;
    FWSyncInfo *_SyncInfo;
    FWSysInfo *_sysInfo;
    NSArray *_tenlists;
    NSArray *_searchExtendlists;
    FWSearchInfo *_searchInfo;
    FWGLobalConfig *_msgConfig;
    NSDictionary *_launchOptions;
    NSArray *_specToplists;
    NSArray *_specUndistrubLists;
    FWHrmConfig *_hrmConfig;
    FWMineConfig *_mineConfig;
    NSArray *_longMenus;
    NSArray *_tenantExtendList;
    long long _VoIPMaxCount;
    FWWorkElement *_currentWorkElement;
    FWChatNetAndDataObject *_chatNetAndData;
    FWBasePersonModel *_currentPerson;
    NSString *_currentUserId;
    NSMutableArray *_allPersonArray;
    NSString *_currentUserLoginUUID;
    VPNSettingViewController *_VPNVC;
    FWChatListViewController *_conversationVC;
    NSString *_ryudid;
    EGOCache *_egoPubilcItemCache;
    EGOCache *_egoPubilcCache;
    EGOCache *_egoPrivateConfigCache;
    EGOCache *_egoPrivateFileCache;
    EGOCache *_egoAllpersonConfigCache;
    FWTenantModel *_mainTenant;
    long long _tenantCount;
    NSString *_clientUserId;
    NSString *_clientToken;
    NSData *_deviceToken;
    NSString *_pushKitDeviceToken;
    NSString *_advertisingId;
    NSMutableArray *_selectPersonArray;
    NSArray *_willChoosePersons;
    NSDictionary *_draftDic;
    NSMutableArray *_commentDataSource;
    long long _face_biopsy;
    FWWpsConfig *_wpsConfig;
    FWCAConfig *_caConfig;
    WKWebViewConfiguration *_globalConfiguration;
    NSString *_showAccount;
    long long _globalFontSet;
    long long _tabarWillSelctIndex;
    unsigned long long _locationType;
    NSString *_client_log_report_flag;
    NSString *_authtag;
    UIViewController *_tempController;
    NSString *_currurlKey;
    NSObject<OS_dispatch_queue> *_processQueue;
}

+ (int)getSelectCount;
+ (id)shareInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;
@property(copy, nonatomic) NSString *currurlKey; // @synthesize currurlKey=_currurlKey;
@property(retain, nonatomic) UIViewController *tempController; // @synthesize tempController=_tempController;
@property(nonatomic) _Bool qysLoginOpen; // @synthesize qysLoginOpen=_qysLoginOpen;
@property(copy, nonatomic) NSString *authtag; // @synthesize authtag=_authtag;
@property(nonatomic) _Bool secondAuthEnable; // @synthesize secondAuthEnable=_secondAuthEnable;
@property(copy, nonatomic) NSString *client_log_report_flag; // @synthesize client_log_report_flag=_client_log_report_flag;
@property(nonatomic) unsigned long long locationType; // @synthesize locationType=_locationType;
@property(nonatomic) int leftTabBtnOffset; // @synthesize leftTabBtnOffset=_leftTabBtnOffset;
@property(nonatomic) int leftTabBtn_x; // @synthesize leftTabBtn_x=_leftTabBtn_x;
@property(nonatomic) long long tabarWillSelctIndex; // @synthesize tabarWillSelctIndex=_tabarWillSelctIndex;
@property(nonatomic) long long globalFontSet; // @synthesize globalFontSet=_globalFontSet;
@property(nonatomic) _Bool isShowOrigImage; // @synthesize isShowOrigImage=_isShowOrigImage;
@property(copy, nonatomic) NSString *showAccount; // @synthesize showAccount=_showAccount;
@property(nonatomic) _Bool isChangeNewAccountLogin; // @synthesize isChangeNewAccountLogin=_isChangeNewAccountLogin;
@property(retain, nonatomic) WKWebViewConfiguration *globalConfiguration; // @synthesize globalConfiguration=_globalConfiguration;
@property(retain, nonatomic) FWCAConfig *caConfig; // @synthesize caConfig=_caConfig;
@property(retain, nonatomic) FWWpsConfig *wpsConfig; // @synthesize wpsConfig=_wpsConfig;
@property(nonatomic) _Bool ios_root_check; // @synthesize ios_root_check=_ios_root_check;
@property(nonatomic) long long face_biopsy; // @synthesize face_biopsy=_face_biopsy;
@property(nonatomic) _Bool faceLogin; // @synthesize faceLogin=_faceLogin;
@property(nonatomic) _Bool faceIDCheckForce; // @synthesize faceIDCheckForce=_faceIDCheckForce;
@property(nonatomic) _Bool gestureCheckForce; // @synthesize gestureCheckForce=_gestureCheckForce;
@property(nonatomic) _Bool gestureCheck; // @synthesize gestureCheck=_gestureCheck;
@property(nonatomic) _Bool fingerPrintCheck; // @synthesize fingerPrintCheck=_fingerPrintCheck;
@property(nonatomic) _Bool faceIDCheck; // @synthesize faceIDCheck=_faceIDCheck;
@property(retain, nonatomic) NSMutableArray *commentDataSource; // @synthesize commentDataSource=_commentDataSource;
@property(copy, nonatomic) NSDictionary *draftDic; // @synthesize draftDic=_draftDic;
@property(nonatomic) int maxCount; // @synthesize maxCount=_maxCount;
@property(retain, nonatomic) NSArray *willChoosePersons; // @synthesize willChoosePersons=_willChoosePersons;
@property(retain, nonatomic) NSMutableArray *selectPersonArray; // @synthesize selectPersonArray=_selectPersonArray;
@property(copy, nonatomic) NSString *advertisingId; // @synthesize advertisingId=_advertisingId;
@property(copy, nonatomic) NSString *pushKitDeviceToken; // @synthesize pushKitDeviceToken=_pushKitDeviceToken;
@property(retain, nonatomic) NSData *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(copy, nonatomic) NSString *clientToken; // @synthesize clientToken=_clientToken;
@property(copy, nonatomic) NSString *clientUserId; // @synthesize clientUserId=_clientUserId;
@property(nonatomic) long long tenantCount; // @synthesize tenantCount=_tenantCount;
@property(retain, nonatomic) FWTenantModel *mainTenant; // @synthesize mainTenant=_mainTenant;
@property(retain, nonatomic) EGOCache *egoAllpersonConfigCache; // @synthesize egoAllpersonConfigCache=_egoAllpersonConfigCache;
@property(retain, nonatomic) EGOCache *egoPrivateFileCache; // @synthesize egoPrivateFileCache=_egoPrivateFileCache;
@property(retain, nonatomic) EGOCache *egoPrivateConfigCache; // @synthesize egoPrivateConfigCache=_egoPrivateConfigCache;
@property(retain, nonatomic) EGOCache *egoPubilcCache; // @synthesize egoPubilcCache=_egoPubilcCache;
@property(retain, nonatomic) EGOCache *egoPubilcItemCache; // @synthesize egoPubilcItemCache=_egoPubilcItemCache;
@property(retain, nonatomic) NSString *ryudid; // @synthesize ryudid=_ryudid;
@property(nonatomic) __weak FWChatListViewController *conversationVC; // @synthesize conversationVC=_conversationVC;
@property(retain, nonatomic) VPNSettingViewController *VPNVC; // @synthesize VPNVC=_VPNVC;
@property(nonatomic) _Bool openVPN; // @synthesize openVPN=_openVPN;
@property(copy, nonatomic) NSString *currentUserLoginUUID; // @synthesize currentUserLoginUUID=_currentUserLoginUUID;
@property(retain, nonatomic) NSMutableArray *allPersonArray; // @synthesize allPersonArray=_allPersonArray;
@property(retain, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(retain, nonatomic) FWBasePersonModel *currentPerson; // @synthesize currentPerson=_currentPerson;
@property(retain, nonatomic) FWChatNetAndDataObject *chatNetAndData; // @synthesize chatNetAndData=_chatNetAndData;
@property(nonatomic) _Bool containMsg; // @synthesize containMsg=_containMsg;
@property(retain, nonatomic) FWWorkElement *currentWorkElement; // @synthesize currentWorkElement=_currentWorkElement;
@property(nonatomic) long long VoIPMaxCount; // @synthesize VoIPMaxCount=_VoIPMaxCount;
@property(nonatomic) _Bool enable_video; // @synthesize enable_video=_enable_video;
@property(nonatomic) _Bool enable_msg; // @synthesize enable_msg=_enable_msg;
@property(nonatomic) _Bool enable_redpacket; // @synthesize enable_redpacket=_enable_redpacket;
@property(nonatomic) _Bool isOpenEsearchAuto; // @synthesize isOpenEsearchAuto=_isOpenEsearchAuto;
@property(retain, nonatomic) NSArray *tenantExtendList; // @synthesize tenantExtendList=_tenantExtendList;
@property(retain, nonatomic) NSArray *longMenus; // @synthesize longMenus=_longMenus;
@property(retain, nonatomic) FWMineConfig *mineConfig; // @synthesize mineConfig=_mineConfig;
@property(retain, nonatomic) FWHrmConfig *hrmConfig; // @synthesize hrmConfig=_hrmConfig;
@property(retain, nonatomic) NSArray *specUndistrubLists; // @synthesize specUndistrubLists=_specUndistrubLists;
@property(retain, nonatomic) NSArray *specToplists; // @synthesize specToplists=_specToplists;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(nonatomic, getter=isCanOpenETPush) _Bool openETPush; // @synthesize openETPush=_openETPush;
@property(retain, nonatomic) FWGLobalConfig *msgConfig; // @synthesize msgConfig=_msgConfig;
@property(retain, nonatomic) FWSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) NSArray *searchExtendlists; // @synthesize searchExtendlists=_searchExtendlists;
@property(retain, nonatomic) NSArray *tenlists; // @synthesize tenlists=_tenlists;
@property(retain, nonatomic) FWSysInfo *sysInfo; // @synthesize sysInfo=_sysInfo;
@property(retain, nonatomic) FWSyncInfo *SyncInfo; // @synthesize SyncInfo=_SyncInfo;
@property(retain, nonatomic) FWWaterConfig *waterConfig; // @synthesize waterConfig=_waterConfig;
@property(retain, nonatomic) FWThemeData *themeData; // @synthesize themeData=_themeData;
@property(retain, nonatomic) FWLoginConfing *loginConfing; // @synthesize loginConfing=_loginConfing;
@property(nonatomic) _Bool changeTheme; // @synthesize changeTheme=_changeTheme;
@property(nonatomic) _Bool changeArgeeStatus; // @synthesize changeArgeeStatus=_changeArgeeStatus;
@property(nonatomic) _Bool switchServer; // @synthesize switchServer=_switchServer;
@property(nonatomic) _Bool refershLoginUI; // @synthesize refershLoginUI=_refershLoginUI;
- (void)loadAllPhonelist;
- (void)onMultiSelectGroupReturn:(id)arg1 mode:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createDiscussionWithController:(id)arg1 users:(id)arg2;
- (void)voipOfVideoMeetingWithTargetIdArray:(id)arg1 channelName:(id)arg2 hostId:(id)arg3 invitedIdArray:(id)arg4 completed:(CDUnknownBlockType)arg5;
- (void)voipOfVoiceMeetingWithTargetIdArray:(id)arg1 channelName:(id)arg2 hostId:(id)arg3 invitedIdArray:(id)arg4 completed:(CDUnknownBlockType)arg5;
- (void)voipOfTelWithTargetId:(id)arg1 phoneNum:(id)arg2 userName:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (void)voipOfSipWithTargetId:(id)arg1 phoneNum:(id)arg2 channelName:(id)arg3 redial:(_Bool)arg4 completed:(CDUnknownBlockType)arg5;
- (void)voipOfVideoWithTargetId:(id)arg1 channelName:(id)arg2 redial:(_Bool)arg3 completed:(CDUnknownBlockType)arg4;
- (void)voipOfVoiceWithTargetId:(id)arg1 channelName:(id)arg2 redial:(_Bool)arg3 completed:(CDUnknownBlockType)arg4;
- (void)logoutSignal;
- (void)loginSignal;
- (void)clearSelectArray;
- (void)clearCookies;
- (void)clearCache;
- (void)clearWebCache;
- (void)clearFileCache;
- (void)clearMemoryCache;
- (void)securityCheck;
- (void)loadPriviteConfig:(id)arg1;
- (void)insertLeastPerson:(id)arg1;
- (id)readPerson;
- (id)lastPersonPath;
- (id)getPrivateConfigPath;
- (id)getPrivateFilePath;
- (id)getWCDBPath;
- (id)getPrivateFilePathWithoutUser;
- (id)getEnvCaChePath;
- (id)getPubilcPath;
- (void)updateCurrentPerson:(id)arg1;
- (id)getAllpersonPath;
- (void)changeWCDBPathWithPath:(id)arg1;
- (void)willTerminate;
- (void)reset;
- (id)getUserIdKey;
- (void)initPrivateCache;
- (void)refreshEnvItemCache;
- (void)initPublicCache;
- (void)setupShareDataWithUserid:(id)arg1 person:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

