/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSData, NSFetchRequest, NSOrderedSet, NSPredicate, NSString;

@interface PLFetchingAlbum : _PLFetchingAlbum {
    NSPredicate *_ALAssetsGroupFilterPredicate;
    NSArray *_cachedKeyAssets;
    unsigned long long _countForDisplay;
    int _emptyState;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
}

@property(retain) NSPredicate * ALAssetsGroupFilterPredicate;
@property(retain) NSData * customQueryParameters;
@property(retain) NSString * customQueryType;
@property(retain,readonly) NSPredicate * extraFilterPredicate;
@property(retain) NSFetchRequest * fetchRequest;
@property(retain) NSOrderedSet * fetchedAssets;
@property(readonly) bool hasAssetsCache;

+ (id)_panoramasAlbumPredicate;
+ (bool)contextShouldIgnoreChangesForALAssetsGroupFilterPredicate;
+ (bool)contextShouldIgnoreChangesForFetchRequest;
+ (bool)contextShouldIgnoreChangesForFetchedAssets;
+ (bool)contextShouldIgnoreChangesForFetchedAssetsSet;
+ (id)predicateForAlbumKind:(int)arg1;
+ (id)sortDescriptorsForAlbumKind:(int)arg1;

- (id)ALAssetsGroupFilterPredicate;
- (id)_cachedKeyAssets;
- (unsigned long long)_fetchedCountForAssetsOfKind:(short)arg1;
- (id)_performFetchWithRequest:(id)arg1;
- (unsigned long long)approximateCount;
- (id)assets;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)batchFetchAssets:(id)arg1;
- (unsigned long long)batchSize;
- (bool)canPerformEditOperation:(unsigned long long)arg1;
- (unsigned long long)count;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (void)dealloc;
- (void)didTurnIntoFault;
- (id)extraFilterPredicate;
- (id)fastPointerAccessSetForAssets:(id)arg1;
- (id)fetchRequest;
- (id)filteredIndexesForPredicate:(id)arg1;
- (bool)hasAssetsCache;
- (bool)isEmpty;
- (id)keyAsset;
- (bool)mayHaveAssetsInCommon:(id)arg1;
- (id)mutableAssets;
- (id)primitiveAssets;
- (id)secondaryKeyAsset;
- (void)setALAssetsGroupFilterPredicate:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setSecondaryKeyAsset:(id)arg1;
- (void)setTertiaryKeyAsset:(id)arg1;
- (void)setupFetchRequest;
- (id)tertiaryKeyAsset;
- (void)updateSnapshotAndClearCaches:(id)arg1;

@end
