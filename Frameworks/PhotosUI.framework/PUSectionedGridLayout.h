/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PUCollectionViewLayoutTransitioningDelegate>, <PUSectionedGridLayoutDelegate>, NSArray, NSDictionary, NSIndexPath, NSIndexSet, NSPointerArray, NSSet, NSString, PULayoutAnimationsHelper, PULayoutSampledSectioning, PUSectionedGridLayoutInvalidationContext, UICollectionViewLayout, UICollectionViewLayoutAttributes;

@interface PUSectionedGridLayout : UICollectionViewLayout <PUReorderableLayout, PUPhotosGridTransitioningLayout, PUCollectionViewLayoutDelegating, PUGridLayoutProtocol> {
    struct CGSize { 
        double width; 
        double height; 
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGPoint { 
        double x; 
        double y; 
    struct CGSize { 
        double width; 
        double height; 
    struct CGSize { 
        double width; 
        double height; 
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    PUSectionedGridLayoutInvalidationContext *_cachedFloatingHeaderInvalidationContext;
    long long _cachedFloatingHeaderInvalidationContextNewVisualSection;
    } _cachedLayoutAttributesLastKnownRect;
    NSArray *_cachedNonHeaderLayoutAttributesInRect;
    long long _columnsPerRow;
    } _contentSize;
    double _cropAmount;
    long long _cropType;
    <PUSectionedGridLayoutDelegate> *_delegate;
    NSSet *_deletedItemIndexPaths;
    NSIndexSet *_deletedSections;
    long long _floatingHeaderVisualSectionIndex;
    double _globalBottomPadding;
    UICollectionViewLayoutAttributes *_globalFooterAttributes;
    double _globalFooterHeight;
    UICollectionViewLayoutAttributes *_globalHeaderAttributes;
    double _globalHeaderHeight;
    double _globalTopPadding;
    NSSet *_hiddenItemIndexPaths;
    } _interItemSpacing;
    } _itemSize;
    PULayoutSampledSectioning *_layoutSectioning;
    long long *_realSectionItemCounts;
    NSPointerArray *_realToVisualSections;
    NSString *_renderedStripsElementKind;
    NSIndexPath *_reorderingInsertedIndexPath;
    NSIndexPath *_reorderingSourceIndexPath;
    NSIndexPath *_reorderingTargetIndexPath;
    NSPointerArray *_samplingHelpersByVisualSection;
    double _sectionBottomPadding;
    } _sectionContentInset;
    NSString *_sectionHeaderElementKind;
    double _sectionHeaderHeight;
    double _sectionTopPadding;
    NSSet *_supplementaryViewKinds;
    long long _totalRealSections;
    long long _totalVisualSections;
    long long _transitionAnchorColumnOffset;
    id _transitionAnimationEndCleanupBlock;
    PULayoutAnimationsHelper *_transitionAnimationsHelper;
    } _transitionEffectiveContentOrigin;
    } _transitionEndContentOffset;
    NSIndexPath *_transitionExplicitAnchorItemIndexPath;
    NSIndexPath *_transitionFirstVisibleRowVisualPath;
    NSIndexPath *_transitionLastVisibleRowVisualPath;
    UICollectionViewLayout *_transitionLayout;
    NSDictionary *_transitionSectionInfosByTransitionSection;
    NSDictionary *_transitionSectionInfosByVisualSection;
    } _transitionStartContentOffset;
    <PUCollectionViewLayoutTransitioningDelegate> *_transitioningDelegate;
    NSIndexPath *_viewSizeTransitionAnchorItem;
    double _viewSizeTransitionAnchorItemNormalizedYOffset;
    long long *_visualSectionMaxRows;
    double *_visualSectionStartYs;
    NSArray *_visualToRealSectionIndexes;
    bool_delegateSupportsAnchorItemForContentOffset;
    bool_delegateSupportsDidInvalidateWithContext;
    bool_delegateSupportsGroupedSections;
    bool_delegateSupportsTransitionAutoContentOffsetEnabled;
    bool_floatingHeadersLayoutIsValid;
    bool_floatingSectionHeadersEnabled;
    bool_hasFloatingHeaders;
    bool_layoutDataIsValid;
    bool_samplingDataIsValid;
    bool_sectioningDataIsValid;
    bool_transitionAnchorShiftsColumns;
    bool_transitionApplyingEffectiveContentOrigin;
    bool_transitionIsAnimated;
    bool_transitionIsAppearing;
    bool_transitionZoomingOut;
    bool_usesRenderedStripTopExtendersForTransitions;
    bool_usesRenderedStrips;
}

@property long long columnsPerRow;
@property double cropAmount;
@property long long cropType;
@property(copy,readonly) NSString * debugDescription;
@property <PUSectionedGridLayoutDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property bool floatingSectionHeadersEnabled;
@property double globalBottomPadding;
@property double globalFooterHeight;
@property(readonly) NSIndexPath * globalFooterIndexPath;
@property(readonly) UICollectionViewLayoutAttributes * globalHeaderAttributes;
@property double globalHeaderHeight;
@property(readonly) NSIndexPath * globalHeaderIndexPath;
@property double globalTopPadding;
@property(readonly) unsigned long long hash;
@property(copy) NSSet * hiddenItemIndexPaths;
@property struct CGSize { double x1; double x2; } interItemSpacing;
@property struct CGSize { double x1; double x2; } itemSize;
@property(readonly) long long itemsPerRow;
@property(readonly) PULayoutSampledSectioning * layoutSectioning;
@property(readonly) long long numberOfVisualSections;
@property(copy) NSString * renderedStripsElementKind;
@property double sectionBottomPadding;
@property struct UIEdgeInsets { double x1; double x2; double x3; double x4; } sectionContentInset;
@property(copy) NSString * sectionHeaderElementKind;
@property double sectionHeaderHeight;
@property double sectionTopPadding;
@property(readonly) Class superclass;
@property(readonly) struct CGSize { double x1; double x2; } transitionActualContentSize;
@property(readonly) long long transitionAnchorColumnOffset;
@property bool transitionAnchorShiftsColumns;
@property struct CGPoint { double x1; double x2; } transitionEffectiveContentOrigin;
@property(readonly) struct CGPoint { double x1; double x2; } transitionEndContentOffset;
@property(copy) NSIndexPath * transitionExplicitAnchorItemIndexPath;
@property(copy,readonly) NSIndexPath * transitionFirstVisibleRowVisualPath;
@property bool transitionIsAnimated;
@property(readonly) bool transitionIsAppearing;
@property(copy,readonly) NSIndexPath * transitionLastVisibleRowVisualPath;
@property(readonly) UICollectionViewLayout * transitionLayout;
@property struct CGPoint { double x1; double x2; } transitionStartContentOffset;
@property bool transitionZoomingOut;
@property <PUCollectionViewLayoutTransitioningDelegate> * transitioningDelegate;
@property bool usesRenderedStripTopExtendersForTransitions;

+ (Class)invalidationContextClass;

- (void).cxx_destruct;
- (void)_adjustGridTransitionLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 outTargetRowExists:(bool*)arg3 isAppearing:(bool)arg4;
- (void)_adjustItemLayoutAttributesForReordering:(id)arg1;
- (void)_adjustRenderedStripLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 isAppearing:(bool)arg3;
- (void)_adjustSectionHeaderLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 isAppearing:(bool)arg3;
- (id)_animationForReusableView:(id)arg1 toLayoutAttributes:(id)arg2 type:(unsigned long long)arg3;
- (void)_clearLayoutCaches;
- (void)_clearRetainedCaches;
- (void)_clearSamplingCaches;
- (void)_clearSectioningCaches;
- (struct CGPoint { double x1; double x2; })_currentVisibleRectOrigin;
- (void)_didFinishLayoutTransitionAnimations:(bool)arg1;
- (void)_enumerateVisualItemFramesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 usingBlock:(id)arg2;
- (long long)_firstVisualItemIndexForRenderedStripIndex:(long long)arg1;
- (long long)_floatingHeaderVisualSectionForVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameByAdjustingOffScreenEnteringFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forRowAtVisualIndexPath:(struct PUSimpleIndexPath { long long x1; long long x2; })arg2 transitionSectionInfo:(id)arg3 toOrFromGridLayout:(id)arg4 isAppearing:(bool)arg5;
- (id)_gridTransitionLayout;
- (double)_heightOfSectionAtVisualIndex:(long long)arg1;
- (void)_invalidateFloatingHeadersLayout;
- (void)_invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateSupplementaryViewKinds;
- (bool)_isSupportedSupplementaryViewKind:(id)arg1;
- (bool)_isTransitionForeignSupplementaryViewKind:(id)arg1;
- (struct PUSimpleIndexPath { long long x1; long long x2; })_itemVisualIndexPathAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)_layoutAttributesForItemAtVisualIndexPath:(struct PUSimpleIndexPath { long long x1; long long x2; })arg1 realIndexPath:(id)arg2 isMainRealItem:(bool)arg3;
- (id)_layoutAttributesForSupplementaryViewOfKind:(id)arg1 forVisualSection:(long long)arg2 supplementaryViewIndex:(long long)arg3;
- (void)_prepareFloatingHeadersLayoutIfNeeded;
- (void)_prepareForTransitionFromStackedLayout:(id)arg1;
- (void)_prepareForTransitionToOrFromGridLayout:(id)arg1 isAppearing:(bool)arg2;
- (void)_prepareLayoutIfNeeded;
- (void)_prepareSamplingDataIfNeeded;
- (void)_prepareSectioningDataIfNeeded;
- (id)_realItemIndexPathClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withTest:(id)arg3;
- (long long)_renderedStripIndexForSectionRowIndex:(long long)arg1;
- (double)_sectionWidth;
- (void)_setColumnsPerRow:(long long)arg1;
- (double)_startYOfContentAtVisualSectionIndex:(long long)arg1;
- (double)_startYOfVisualSectionAtIndex:(long long)arg1;
- (id)_supplementaryViewKinds;
- (bool)_supportsAdvancedTransitionAnimations;
- (struct CGPoint { double x1; double x2; })_targetContentOffsetWithAnchorItemIndexPath:(id)arg1 isRotation:(bool)arg2 orTransitionFromLayout:(id)arg3 keepAnchorStable:(bool)arg4;
- (struct PUGridCoordinates { long long x1; long long x2; })_targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates { long long x1; long long x2; })arg1 atVisualSection:(long long)arg2 transitionSectionInfo:(id)arg3;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })_transformToConvertRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 referenceCenter:(struct CGPoint { double x1; double x2; })arg3;
- (void)_updateHasFloatingHeaders;
- (struct CGPoint { double x1; double x2; })_visibleRectOriginForScrollOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct PUSimpleIndexPath { long long x1; long long x2; })_visualIndexPathForTransitionCoordinates:(struct PUGridCoordinates { long long x1; long long x2; })arg1 inTransitionSection:(long long)arg2;
- (struct PUSimpleIndexPath { long long x1; long long x2; })_visualRowPathForTransitionRowIndex:(long long)arg1 transitionSectionInfo:(id)arg2;
- (long long)_visualSectionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_visualSectionsMatchTransitionSectionsToOrFromLayout:(id)arg1;
- (void)adjustEffectiveContentOriginForTransitionEndContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)assetIndexPathsForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)beginInsertingItemAtIndexPath:(id)arg1;
- (void)beginReorderingItemAtIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (long long)columnsPerRow;
- (double)cropAmount;
- (long long)cropType;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endInsertingItem;
- (void)endReordering;
- (void)enumerateItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 usingBlock:(id)arg3;
- (void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (void)finalizeCollectionViewUpdates;
- (void)finalizeLayoutTransition;
- (void)finalizeViewTransitionToSize;
- (bool)floatingSectionHeadersEnabled;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtGridCoordinates:(struct PUGridCoordinates { long long x1; long long x2; })arg1 inTransitionSection:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtGridCoordinates:(struct PUGridCoordinates { long long x1; long long x2; })arg1 inVisualSection:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSectionHeaderAtVisualSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForSectionHeaderOfRealItem:(id)arg1;
- (void)getVisualSectionIndex:(long long*)arg1 visualItemRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 forRenderStripAtIndexPath:(id)arg3;
- (double)globalBottomPadding;
- (double)globalFooterHeight;
- (id)globalFooterIndexPath;
- (id)globalHeaderAttributes;
- (double)globalHeaderHeight;
- (id)globalHeaderIndexPath;
- (double)globalTopPadding;
- (struct PUGridCoordinates { long long x1; long long x2; })gridCoordinatesInSectionForItemAtVisualIndex:(long long)arg1;
- (struct PUGridCoordinates { long long x1; long long x2; })gridCoordinatesInTransitionSectionForItemAtIndexPath:(id)arg1;
- (struct PUGridCoordinates { long long x1; long long x2; })gridCoordinatesInVisualSectionForItemAtIndexPath:(id)arg1;
- (bool)hasItemAtGridCoordinates:(struct PUGridCoordinates { long long x1; long long x2; })arg1 inTransitionSection:(long long)arg2;
- (id)hiddenItemIndexPaths;
- (id)init;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })interItemSpacing;
- (void)invalidateLayoutForMetricsChange;
- (void)invalidateLayoutForVerticalScroll;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemIndexPathAtCenterOfRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemIndexPathAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)itemIndexPathClosestToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })itemSize;
- (long long)itemsPerRow;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })layoutItemSizeForColumn:(long long)arg1;
- (id)layoutSectioning;
- (id)mainRealIndexPathAtGridCoordinates:(struct PUGridCoordinates { long long x1; long long x2; })arg1 inTransitionSection:(long long)arg2;
- (long long)mainRealSectionForVisualSection:(long long)arg1;
- (long long)maximumNumberOfItemsInVisualSection:(long long)arg1 withNumberOfRealItems:(long long)arg2 forSectioning:(id)arg3;
- (long long)numberOfColumnsForWidth:(double)arg1;
- (long long)numberOfContiguousRowsInTransitionSection:(long long)arg1;
- (long long)numberOfItemsInRealSection:(long long)arg1 forSectioning:(id)arg2;
- (long long)numberOfRealItemsInRealSection:(long long)arg1;
- (long long)numberOfRealItemsInVisualSection:(long long)arg1;
- (long long)numberOfRealSections;
- (long long)numberOfRealSectionsForSectioning:(id)arg1;
- (long long)numberOfRowsInVisualSection:(long long)arg1;
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;
- (long long)numberOfVisualSections;
- (long long)numberOfVisualSectionsForSectioning:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareForViewTransitionToSize:(struct CGSize { double x1; double x2; })arg1;
- (void)prepareLayout;
- (id)pu_debugRows;
- (id)pu_layoutAttributesForElementClosestToPoint:(struct CGPoint { double x1; double x2; })arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 passingTest:(id)arg3;
- (id)realSectionsForVisualSection:(long long)arg1 forSectioning:(id)arg2;
- (id)renderedStripsElementKind;
- (id)reorderedIndexPath:(id)arg1;
- (double)sectionBottomPadding;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })sectionContentInset;
- (id)sectionHeaderElementKind;
- (double)sectionHeaderHeight;
- (double)sectionTopPadding;
- (void)setCropAmount:(double)arg1;
- (void)setCropType:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFloatingSectionHeadersEnabled:(bool)arg1;
- (void)setGlobalBottomPadding:(double)arg1;
- (void)setGlobalFooterHeight:(double)arg1;
- (void)setGlobalHeaderHeight:(double)arg1;
- (void)setGlobalTopPadding:(double)arg1;
- (void)setHiddenItemIndexPaths:(id)arg1;
- (void)setInterItemSpacing:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRenderedStripsElementKind:(id)arg1;
- (void)setSectionBottomPadding:(double)arg1;
- (void)setSectionContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionHeaderElementKind:(id)arg1;
- (void)setSectionHeaderHeight:(double)arg1;
- (void)setSectionTopPadding:(double)arg1;
- (void)setTransitionAnchorShiftsColumns:(bool)arg1;
- (void)setTransitionEffectiveContentOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionExplicitAnchorItemIndexPath:(id)arg1;
- (void)setTransitionIsAnimated:(bool)arg1;
- (void)setTransitionStartContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTransitionZoomingOut:(bool)arg1;
- (void)setTransitioningDelegate:(id)arg1;
- (void)setUsesRenderedStripTopExtendersForTransitions:(bool)arg1;
- (bool)shouldHideVisualSection:(long long)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)supplementaryViewIndexPathForVisualSection:(long long)arg1 supplementaryViewItemIndex:(long long)arg2;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForProposedContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })targetContentOffsetForTransitionFromGridLayout:(id)arg1;
- (struct PUGridCoordinates { long long x1; long long x2; })targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates { long long x1; long long x2; })arg1 atVisualSection:(long long)arg2 outTransitionSection:(long long*)arg3;
- (id)targetTransitionRealIndexPathForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })transitionActualContentSize;
- (long long)transitionAnchorColumnOffset;
- (id)transitionAnchorIndexPathForTransitionSection:(long long)arg1;
- (bool)transitionAnchorShiftsColumns;
- (struct CGPoint { double x1; double x2; })transitionEffectiveContentOrigin;
- (struct CGPoint { double x1; double x2; })transitionEndContentOffset;
- (id)transitionExplicitAnchorItemIndexPath;
- (id)transitionFirstVisibleRowVisualPath;
- (bool)transitionIsAnimated;
- (bool)transitionIsAppearing;
- (id)transitionLastVisibleRowVisualPath;
- (id)transitionLayout;
- (id)transitionSectionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toOrFromGridLayout:(id)arg2;
- (struct CGPoint { double x1; double x2; })transitionStartContentOffset;
- (bool)transitionZoomingOut;
- (id)transitioningDelegate;
- (void)updateReorderingTargetIndexPath:(id)arg1;
- (bool)usesRenderedStripTopExtendersForTransitions;
- (struct PUGridCoordinates { long long x1; long long x2; })visualGridCoordsForTransitionGridCoords:(struct PUGridCoordinates { long long x1; long long x2; })arg1 atTransitionSection:(long long)arg2 outVisualSection:(long long*)arg3;
- (long long)visualIndexForItemAtGridCoordinates:(struct PUGridCoordinates { long long x1; long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visualRowsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inVisualSection:(long long)arg2 totalVisualSectionRows:(long long*)arg3;
- (long long)visualSectionForHeaderIndexPath:(id)arg1;
- (long long)visualSectionForRealSection:(long long)arg1;
- (long long)visualSectionForSupplementaryViewIndexPath:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visualSectionsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
