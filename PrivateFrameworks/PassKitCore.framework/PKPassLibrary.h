/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class <PKPassLibraryDelegate>, NSXPCConnection, PKAsyncCache, PKPassLibraryExportedProxy;

@interface PKPassLibrary : NSObject <PKPassLibraryExportedInterface> {
    NSXPCConnection *_connection;
    <PKPassLibraryDelegate> *_delegate;
    PKPassLibraryExportedProxy *_exportedProxy;
    PKAsyncCache *_libraryCache;
}

@property <PKPassLibraryDelegate> * delegate;

+ (void)_tearDownPassLibraryConnection:(id)arg1 exportedProxy:(id)arg2;
+ (bool)isPassLibraryAvailable;
+ (bool)isPaymentPassActivationAvailable;

- (void)_applyDataAccessorToObject:(id)arg1;
- (void)_applyDataAccessorToObjects:(id)arg1;
- (id)_errorHandlerWithCompletion:(id)arg1;
- (id)_errorHandlerWithSemaphore:(id)arg1;
- (void)_establishPassLibraryConnection;
- (void)_getArchivedObjectWithUniqueID:(id)arg1 completion:(id)arg2;
- (void)_getPassWithUniqueID:(id)arg1 completion:(id)arg2;
- (void)_getPassesAndCatalog:(bool)arg1 withRetries:(unsigned long long)arg2 withHandler:(id)arg3;
- (bool)_isPaymentPassActivationAvailable;
- (id)_passesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2;
- (id)_passesWithRetries:(unsigned long long)arg1;
- (void)_postLibraryChangeWithUserInfo:(id)arg1;
- (void)_registerForApplicationLifeCycleNotifications;
- (void)_sendResumed;
- (void)_sendSuspended;
- (void)_tearDownPassLibraryConnection;
- (void)_unregisterForApplicationLifeCycleNotifications;
- (void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(id)arg3;
- (void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(id)arg3;
- (void)addFakeBulletin;
- (void)addPasses:(id)arg1 withCompletionHandler:(id)arg2;
- (id)archiveForObjectWithUniqueID:(id)arg1;
- (bool)canAddPassOfType:(unsigned long long)arg1;
- (void)catalogChanged:(id)arg1 withNewPasses:(id)arg2;
- (bool)containsPass:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)diffForPassBulletinWithRecordID:(id)arg1;
- (void)fetchContentForUniqueID:(id)arg1 withCompletion:(id)arg2;
- (void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 withCompletion:(id)arg4;
- (void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(id)arg2;
- (void)getPassesAndCatalog:(bool)arg1 withHandler:(id)arg2;
- (void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(id)arg2;
- (void)hasInAppPaymentPassesForNetworks:(id)arg1 withHandler:(id)arg2;
- (bool)hasPassesOfType:(unsigned long long)arg1;
- (void)inAppPaymentPassesForNetworks:(id)arg1 withHandler:(id)arg2;
- (void)ingestPassData:(id)arg1 settings:(id)arg2 completion:(id)arg3;
- (id)init;
- (void)introduceDatabaseIntegrityProblem;
- (void)logDelayExitReasons;
- (bool)migrateData;
- (void)noteAccountChanged;
- (void)noteAccountDeleted;
- (void)noteObjectSharedWithUniqueID:(id)arg1;
- (void)nukeDatabaseAndExit;
- (void)passAdded:(id)arg1;
- (void)passRemoved:(id)arg1;
- (void)passUpdated:(id)arg1;
- (id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)passWithUniqueID:(id)arg1;
- (id)passes;
- (id)passesOfType:(unsigned long long)arg1;
- (void)recomputeRelevantPassesWithSearchMode:(long long)arg1;
- (void)removePass:(id)arg1;
- (void)removePassWithUniqueID:(id)arg1;
- (void)removePassesOfType:(unsigned long long)arg1;
- (bool)replacePassWithPass:(id)arg1;
- (void)requestUpdateOfObjectWithUniqueID:(id)arg1 completion:(id)arg2;
- (void)sendPassbookUIServiceLaunched;
- (void)sendUserEditedCatalog:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)shuffleGroups:(int)arg1;
- (void)updateSettings:(long long)arg1 forObjectWithUniqueID:(id)arg2;

@end
