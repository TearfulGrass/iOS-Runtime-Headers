/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class CKDClientContext, CKWatchdog, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, NSXPCConnection;

@interface CKDClientProxy : NSObject <CKDSystemAvailabilityWatcher, CKXPCDaemon> {
    NSOperationQueue *_backgroundOperationThrottleQueue;
    NSString *_bundleIdentifier;
    NSXPCConnection *_connection;
    CKDClientContext *_context;
    NSOperationQueue *_operationQueue;
    int _pid;
    NSString *_procName;
    NSObject<OS_dispatch_queue> *_setupQueue;
    CKWatchdog *_watchdog;
    bool_canOpenByID;
    bool_canUsePackages;
    bool_finishedSetup;
    bool_sandboxed;
}

@property(readonly) struct { unsigned int x1[8]; } auditToken;
@property(retain) NSOperationQueue * backgroundOperationThrottleQueue;
@property(retain) NSString * bundleIdentifier;
@property bool canOpenByID;
@property bool canUsePackages;
@property NSXPCConnection * connection;
@property(retain) CKDClientContext * context;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool finishedSetup;
@property(readonly) unsigned long long hash;
@property(retain) NSOperationQueue * operationQueue;
@property(readonly) int pid;
@property(readonly) NSString * procName;
@property(getter=isSandboxed) bool sandboxed;
@property(retain) NSObject<OS_dispatch_queue> * setupQueue;
@property(readonly) Class superclass;
@property(retain) CKWatchdog * watchdog;

+ (id)sharedClientThrottlingOperationQueue;

- (void).cxx_destruct;
- (long long)_applicationPermissionStatusFromUserPrivacySetting:(long long)arg1;
- (void)_checkAndAddOperation:(id)arg1;
- (id)_clientPrefixEntitlement;
- (id)_connectionIsAuthorizedForOperation:(id)arg1;
- (long long)_currentAccountStatus;
- (void)_finishSetup;
- (void)_globalStatusForApplicationPermission:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)_handleCompletionForOperation:(id)arg1 withBlock:(id)arg2;
- (void)_handleProgressForOperation:(id)arg1 withArguments:(id)arg2;
- (bool)_hasCustomAccountsEntitlement;
- (bool)_hasEntitlementForKey:(id)arg1;
- (bool)_hasEnvironmentEntitlement;
- (bool)_hasMasqueradingEntitlement;
- (void)_setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 completionHandler:(id)arg3;
- (void)_setupOperationQueues;
- (id)_startSetup;
- (void)accountChangedWithID:(id)arg1;
- (void)accountStatusWithCompletionHandler:(id)arg1;
- (void)accountsDidGrantAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsDidRevokeAccessToBundleID:(id)arg1 containerIdentifiers:(id)arg2;
- (void)accountsWillDeleteAccount:(id)arg1 completionHandler:(id)arg2;
- (id)apsEnvironmentEntitlement;
- (struct { unsigned int x1[8]; })auditToken;
- (id)backgroundOperationThrottleQueue;
- (id)bundleIdentifier;
- (bool)canOpenByID;
- (bool)canReadMMCSItem:(id)arg1 error:(id*)arg2;
- (bool)canUsePackages;
- (bool)canUsePackagesWithError:(id*)arg1;
- (void)cancelOperationWithIdentifier:(id)arg1;
- (void)clearAssetCacheWithDatabaseScope:(long long)arg1;
- (void)clearAuthTokensForRecordWithID:(id)arg1 inScope:(long long)arg2;
- (void)clearRecordCache;
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;
- (id)connection;
- (id)context;
- (void)currentUserIDWithCompletionHandler:(id)arg1;
- (void)dealloc;
- (bool)finishedSetup;
- (void)forceFinishSetup;
- (void)getBehaviorOptionForKey:(id)arg1 isContainerOption:(bool)arg2 completionHandler:(id)arg3;
- (void)getNewWebSharingIdentity:(id)arg1;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id)arg1;
- (bool)hasDeviceIdentifierEntitlement;
- (bool)hasProtectionDataEntitlement;
- (id)initWithConnection:(id)arg1;
- (bool)isSandboxed;
- (id)operationQueue;
- (void)performDiscoverAllContactsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performDiscoverUserInfosOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchLikesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchNotificationChangesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchRecordChangesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchRecordVersionsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchRecordZonesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchRecordsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchShareCommentsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchShareInvitationsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchSharesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchSubscriptionsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performFetchUserQuotaOperation:(id)arg1 withBlock:(id)arg2;
- (void)performLikeItemsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performMarkNotificationsReadOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifyBadgeOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifyRecordZonesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifyRecordsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifyShareCommentsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifySharesOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifySubscriptionsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performModifyWebSharingOperation:(id)arg1 withBlock:(id)arg2;
- (void)performPublishAssetsOperation:(id)arg1 withBlock:(id)arg2;
- (void)performQueryOperation:(id)arg1 withBlock:(id)arg2;
- (void)performShareInvitationResponseOperation:(id)arg1 withBlock:(id)arg2;
- (void)performUpdateUserPresenceOperation:(id)arg1 withBlock:(id)arg2;
- (int)pid;
- (id)procName;
- (void)repairZonePCSWithInfo:(id)arg1 withBlock:(id)arg2;
- (void)requestApplicationPermission:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)resetAllApplicationPermissionsWithCompletionHandler:(id)arg1;
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(id)arg1;
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(bool)arg2 completionHandler:(id)arg3;
- (void)setBackgroundOperationThrottleQueue:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCanOpenByID:(bool)arg1;
- (void)setCanUsePackages:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setContainerID:(id)arg1 bundleID:(id)arg2 accountInfoOverride:(id)arg3 withBlock:(id)arg4;
- (void)setContext:(id)arg1;
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;
- (void)setFinishedSetup:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setSandboxed:(bool)arg1;
- (void)setSetupQueue:(id)arg1;
- (void)setWatchdog:(id)arg1;
- (id)setupQueue;
- (void)statusForApplicationPermission:(unsigned long long)arg1 completionHandler:(id)arg2;
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(id)arg2;
- (id)statusReport;
- (void)systemAvailabilityChanged:(bool)arg1;
- (void)tearDown;
- (void)tossConfigWithCompletionHandler:(id)arg1;
- (void)updatePushTokens;
- (bool)usePublicTokenEntitlement;
- (id)watchdog;
- (void)wipeAllCachesAndDie;

@end
