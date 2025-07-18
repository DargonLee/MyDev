//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSDASHClientStateZwiebackMonitor-Protocol.h"
#import "GMSServicesNoQuotaHandler-Protocol.h"

@class GMSAPIClientParameters, GMSDASHConnection, GMSDisplayLink, GMSMapsClearcutClient, GMSNetworkMonitor, GMSServerResourceManager, GMSStyleTableService, GMSSystemClock, GMSTileRequestCoordinator, GMSVectorMapSharedResourceCache, GMSVersion, NSCache, NSMutableDictionary, NSString;
@protocol GMSCellularInfo, GMSDASHConnection, GMSMobileMapsPhotoService, GMSServicesZwiebackMonitor, GMSTileServiceRegistry;

@interface GMSServices : NSObject <GMSDASHClientStateZwiebackMonitor, GMSServicesNoQuotaHandler>
{
    GMSDASHConnection *_connection;
    NSMutableDictionary *_pendingEvents;
    NSMutableDictionary *_pendingClearcutEvents;
    GMSVersion *_priorCoreVersion;
    GMSMapsClearcutClient *_clearcutClient;
    CDUnknownBlockType _clientParametersCompletionBlock;
    id <GMSServicesZwiebackMonitor> _zwiebackMonitor;
    id <GMSMobileMapsPhotoService> _mobileMapsPhotoService;
    id <GMSTileServiceRegistry> _tileServiceRegistry;
    GMSTileRequestCoordinator *_tileRequestCoordinator;
    GMSStyleTableService *_styleTableService;
    GMSServerResourceManager *_resourceManager;
    GMSNetworkMonitor *_networkMonitor;
    GMSAPIClientParameters *_clientParameters;
    GMSDisplayLink *_displayLink;
    GMSVectorMapSharedResourceCache *_resourceCache;
    GMSSystemClock *_clock;
    id <GMSCellularInfo> _cellularInfo;
    NSCache *_coordToImageKeyCache;
}

+ (id)filterValidAPIOptions:(id)arg1;
+ (id)APIKey;
+ (void)checkServicePreconditions;
+ (id)mapsBundle;
+ (id)imageNamed:(id)arg1;
+ (void)openMapsWithParameters:(id)arg1 andWebFallback:(id)arg2 withApplication:(id)arg3;
+ (void)openMapsWithParameters:(id)arg1 andWebFallback:(id)arg2;
+ (void)openMapsAt:(id)arg1 application:(id)arg2;
+ (void)openMapsAt:(id)arg1;
+ (void)setOverrideConnectionClass:(Class)arg1;
+ (void)resetForTest;
+ (id)sharedServicesIfActive;
+ (id)sharedServicesSync;
+ (void)setAllowsCellularTileDownloads:(_Bool)arg1;
+ (void)provideExternalCache:(id)arg1;
+ (void)setZwiebackMonitor:(id)arg1;
+ (void)setZwiebackCookie:(id)arg1;
+ (void)provideAuthorizationProvider:(id)arg1;
+ (id)SDKLongVersion;
+ (id)SDKVersion;
+ (id)openSourceLicenseInfo;
+ (_Bool)provideAPIOptions:(id)arg1;
+ (_Bool)provideAPIKey:(id)arg1;
+ (id)sharedServices;
@property(readonly, nonatomic) NSCache *coordToImageKeyCache; // @synthesize coordToImageKeyCache=_coordToImageKeyCache;
@property(readonly, nonatomic) id <GMSCellularInfo> cellularInfo; // @synthesize cellularInfo=_cellularInfo;
@property(readonly, nonatomic) GMSSystemClock *clock; // @synthesize clock=_clock;
@property(readonly, nonatomic) GMSVectorMapSharedResourceCache *resourceCache; // @synthesize resourceCache=_resourceCache;
@property(readonly, nonatomic) GMSDisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(readonly, nonatomic) GMSAPIClientParameters *clientParameters; // @synthesize clientParameters=_clientParameters;
@property(readonly, nonatomic) GMSNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(readonly, nonatomic) GMSServerResourceManager *resourceManager; // @synthesize resourceManager=_resourceManager;
@property(readonly, nonatomic) GMSStyleTableService *styleTableService; // @synthesize styleTableService=_styleTableService;
@property(readonly, nonatomic) GMSTileRequestCoordinator *tileRequestCoordinator; // @synthesize tileRequestCoordinator=_tileRequestCoordinator;
@property(readonly, nonatomic) id <GMSTileServiceRegistry> tileServiceRegistry; // @synthesize tileServiceRegistry=_tileServiceRegistry;
@property(readonly, nonatomic) id <GMSMobileMapsPhotoService> mobileMapsPhotoService; // @synthesize mobileMapsPhotoService=_mobileMapsPhotoService;
@property(readonly, nonatomic) id <GMSDASHConnection> connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <GMSServicesZwiebackMonitor> zwiebackMonitor; // @synthesize zwiebackMonitor=_zwiebackMonitor;
- (void).cxx_destruct;
- (void)quotaRequestFailedWithErrorMessage:(id)arg1;
- (void)setClientParametersForTests:(id)arg1;
- (void)raiseClientParametersCompletedIfAvailable;
- (void)checkClientParametersWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleQuotaResponse:(id)arg1 noQuotaHandler:(id)arg2;
- (void)checkReadyForOffline;
- (void)checkVersion;
- (void)clientParametersUpdated:(id)arg1;
- (void)startupClientParameters;
- (id)cacheStorageDescriptorForName:(id)arg1 boundaryVersion:(id)arg2 cachesURL:(id)arg3;
- (void)ensureResourceCache;
- (void)updateServerURLString:(id)arg1;
- (void)clearOnDiskCache:(CDUnknownBlockType)arg1;
- (void)sendStreetViewCreateQuotaEventWithNoQuotaHandler:(id)arg1;
- (void)sendBaseMapCreateQuotaEvent;
- (void)terminateConnection;
- (void)sendQuotaEvent:(int)arg1;
- (void)sendQuotaEventWithType:(int)arg1 noQuotaHandler:(id)arg2;
- (void)addAPIEventClearcut:(int)arg1;
- (void)dealloc;
- (id)initWithDisplayLink:(id)arg1 resourceCache:(id)arg2;
- (id)init;
- (Class)connectionClass;
- (void)clientState:(id)arg1 zwiebackCookieChanged:(id)arg2;
- (id)zwiebackCookie;
- (void)sendRequestWithID:(long long)arg1 data:(id)arg2 handlerQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

