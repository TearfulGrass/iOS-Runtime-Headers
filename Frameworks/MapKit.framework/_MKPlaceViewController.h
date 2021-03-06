/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class <_MKPlaceViewControllerDelegate>, ABPeoplePickerNavigationController, CNContact, MKDistanceDetailProvider, MKMapItem, MKPlaceActionsViewController, MKPlaceHeaderView, MKPlaceInfoViewController, MKPlaceNearbyAppsMetricsCoordinator, MKSegmentedControlTabBarView, NSArray, NSMapTable, NSString, SKProductPageViewController, UITapGestureRecognizer;

@interface _MKPlaceViewController : MKStackingViewController <MKStackingViewControllerDelegate, MKActivityViewControllerDelegate, ABContactViewControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, SKProductPageViewControllerDelegate, MKPlaceNearbyAppsViewControllerDelegate, MKPlaceSharedAttributionDelegate, MKPlaceHeaderViewDelegate, MKPlaceCardPhotosControllerDelegate, MKPlaceCardReviewsControllerDelegate, MKPlaceInfoViewControllerDelegate, MKPlaceActionsViewControllerDelegate> {
    MKPlaceActionsViewController *_actionsViewController;
    NSMapTable *_additionalViewControllers;
    void *_addressBook;
    CNContact *_contact;
    ABPeoplePickerNavigationController *_contactsNavigationController;
    MKDistanceDetailProvider *_distanceMonitor;
    UITapGestureRecognizer *_flyoverTourTapRecognizer;
    double _headerHeight;
    NSString *_headerTitle;
    MKPlaceInfoViewController *_infoViewController;
    MKMapItem *_mapItem;
    MKPlaceNearbyAppsMetricsCoordinator *_metricsCoordinator;
    CNContact *_originalContact;
    void *_originalContactRecordCopy;
    MKPlaceHeaderView *_placeHeaderView;
    <_MKPlaceViewControllerDelegate> *_placeViewControllerDelegate;
    NSArray *_storeItems;
    SKProductPageViewController *_storePageViewController;
    MKSegmentedControlTabBarView *_tabBar;
    bool_disableReportAProblem;
    bool_hasCheckedDistanceAvailability;
    bool_hideDirectionsButtons;
    bool_hideInlineMap;
    bool_isSearchingForNearbyApps;
    bool_overrideDefaultShowRAP;
    bool_showContactActions;
    bool_showCreateReminder;
    bool_showEditButton;
    bool_showFlyoverTour;
    bool_showInlineMapInHeader;
    bool_showNearbyApps;
    bool_showOpenInSkyline;
    bool_showRemovePin;
    bool_showReportAProblem;
    bool_showRerouting;
    bool_showShareActionsButton;
    bool_showSimulateLocation;
    bool_showTitleBar;
}

@property(readonly) CNContact * contact;
@property ABPeoplePickerNavigationController * contactsNavigationController;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool disableReportAProblem;
@property(retain) MKDistanceDetailProvider * distanceMonitor;
@property bool hasCheckedDistanceAvailability;
@property(readonly) unsigned long long hash;
@property double headerHeight;
@property(copy) NSString * headerTitle;
@property bool hideDirectionsButtons;
@property bool hideInlineMap;
@property(retain) MKMapItem * mapItem;
@property(readonly) MKPlaceNearbyAppsMetricsCoordinator * metricsCoordinator;
@property(retain) CNContact * originalContact;
@property(retain) MKPlaceHeaderView * placeHeaderView;
@property <_MKPlaceViewControllerDelegate> * placeViewControllerDelegate;
@property bool showContactActions;
@property bool showCreateReminder;
@property bool showEditButton;
@property bool showFlyoverTour;
@property bool showInlineMapInHeader;
@property bool showNearbyApps;
@property bool showOpenInSkyline;
@property bool showRemovePin;
@property bool showReportAProblem;
@property bool showRerouting;
@property bool showShareActionsButton;
@property bool showSimulateLocation;
@property bool showTitleBar;
@property(readonly) Class superclass;
@property(retain) MKSegmentedControlTabBarView * tabBar;

- (void).cxx_destruct;
- (void)_commonInit;
- (bool)_defaultShowReportAProblem;
- (void)_displayAppWithMetadata:(id)arg1;
- (void)_findNearbyAppsAtCoordinate:(struct { double x1; double x2; })arg1;
- (id)_mapTableKeyForSectionPosition:(long long)arg1;
- (void)_openAppWithBundleID:(id)arg1;
- (void)_openInfoAttribution;
- (bool)_removeMapsDataFromContactWithRecordID:(int)arg1;
- (void)_searchForNearbyApps;
- (void)_searchForNearbyAppsIfNecessary;
- (long long)_sectionPositionForMapTableKey:(id)arg1;
- (void)_setHeaderSubtitleWithDistanceInfo:(id)arg1 numberOfReviews:(unsigned long long)arg2;
- (void)_setViewControllersWithInformationViewControllers:(id)arg1;
- (void)_setupHeaderView;
- (void)_showEditSheet:(id)arg1;
- (void)_showShareSheet:(id)arg1;
- (void)_switchToTabAtIndex:(long long)arg1;
- (void)_tappedForFlyoverTour;
- (void)_updateViewControllers;
- (void)actionsViewControllerAddContactToExistingContact:(id)arg1;
- (void)actionsViewControllerCreateNewContact:(id)arg1;
- (void)actionsViewControllerCreateReminder:(id)arg1;
- (void)actionsViewControllerOpenInSkyline:(id)arg1;
- (void)actionsViewControllerRemovePin:(id)arg1;
- (void)actionsViewControllerReportAProblem:(id)arg1;
- (void)actionsViewControllerShare:(id)arg1;
- (void)actionsViewControllerSimulateLocation:(id)arg1;
- (void)addAdditionalViewController:(id)arg1 atPosition:(long long)arg2;
- (id)additionalViewControllersAtPosition:(long long)arg1;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)contact;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)contactViewController:(id)arg1 didDeleteContact:(id)arg2;
- (id)contactsNavigationController;
- (void)dealloc;
- (bool)disableReportAProblem;
- (id)distanceMonitor;
- (bool)hasCheckedDistanceAvailability;
- (double)headerHeight;
- (id)headerTitle;
- (void)headerView:(id)arg1 didFinishLoadingBackgroundViewOfType:(long long)arg2;
- (bool)headerViewshouldShowTitleSubtitleAndStarRatings:(id)arg1;
- (bool)hideDirectionsButtons;
- (bool)hideInlineMap;
- (void)infoViewController:(id)arg1 didSelectDeal:(id)arg2;
- (id)init;
- (id)initWithContact:(id)arg1 mapItem:(id)arg2;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (void)mapkitActivityViewController:(id)arg1 postCompletedActivityOfType:(id)arg2 completed:(bool)arg3;
- (void)mapkitActivityViewController:(id)arg1 preCompletedActivityOfType:(id)arg2 completed:(bool)arg3;
- (id)metricsCoordinator;
- (void)nearbyAppsController:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsController:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (void)openInfoAttribution;
- (id)originalContact;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)placeCardPhotosController:(id)arg1 didSelectViewPhotoWithID:(id)arg2;
- (void)placeCardPhotosControllerDidSelectAddPhoto:(id)arg1;
- (void)placeCardPhotosControllerDidSelectViewAllPhotos:(id)arg1;
- (void)placeCardReviewsController:(id)arg1 didSelectViewReviewWithID:(id)arg2;
- (void)placeCardReviewsControllerDidSelectCheckIn:(id)arg1;
- (void)placeCardReviewsControllerDidSelectViewAllReviews:(id)arg1;
- (void)placeCardReviewsControllerDidSelectWriteReview:(id)arg1;
- (id)placeHeaderView;
- (id)placeViewControllerDelegate;
- (long long)preferredStatusBarStyle;
- (void)presentHeaderView;
- (void)removeAdditionalViewController:(id)arg1;
- (void)resetHeaderView;
- (void)resetHeaderViewAnimations;
- (void)restartHeaderViewAnimations;
- (void)setContact:(id)arg1;
- (void)setContactsNavigationController:(id)arg1;
- (void)setDisableReportAProblem:(bool)arg1;
- (void)setDistanceMonitor:(id)arg1;
- (void)setHasCheckedDistanceAvailability:(bool)arg1;
- (void)setHeaderHeight:(double)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setHideDirectionsButtons:(bool)arg1;
- (void)setHideInlineMap:(bool)arg1;
- (void)setMapItem:(id)arg1 contact:(id)arg2 updateOriginalContact:(bool)arg3;
- (void)setMapItem:(id)arg1;
- (void)setOriginalContact:(id)arg1;
- (void)setPlaceHeaderView:(id)arg1;
- (void)setPlaceViewControllerDelegate:(id)arg1;
- (void)setShowContactActions:(bool)arg1;
- (void)setShowCreateReminder:(bool)arg1;
- (void)setShowEditButton:(bool)arg1;
- (void)setShowFlyoverTour:(bool)arg1;
- (void)setShowInlineMapInHeader:(bool)arg1;
- (void)setShowNearbyApps:(bool)arg1;
- (void)setShowOpenInSkyline:(bool)arg1;
- (void)setShowRemovePin:(bool)arg1;
- (void)setShowReportAProblem:(bool)arg1;
- (void)setShowRerouting:(bool)arg1;
- (void)setShowShareActionsButton:(bool)arg1;
- (void)setShowSimulateLocation:(bool)arg1;
- (void)setShowTitleBar:(bool)arg1;
- (void)setTabBar:(id)arg1;
- (bool)shouldShowDirectionsForInfoViewController:(id)arg1;
- (bool)shouldShowFlyoverTourForInfoViewController:(id)arg1;
- (bool)shouldShowInlineMapForInfoViewController:(id)arg1;
- (bool)shouldShowReroutingForInfoViewController:(id)arg1;
- (bool)showContactActions;
- (bool)showCreateReminder;
- (bool)showEditButton;
- (bool)showFlyoverTour;
- (bool)showInlineMapInHeader;
- (bool)showNearbyApps;
- (bool)showOpenInSkyline;
- (bool)showRemovePin;
- (bool)showReportAProblem;
- (bool)showRerouting;
- (bool)showShareActionsButton;
- (bool)showSimulateLocation;
- (bool)showTitleBar;
- (void)stackingViewController:(id)arg1 calculatedTransformForHeaderView:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg2;
- (id)stackingViewController:(id)arg1 scrollViewForViewController:(id)arg2;
- (bool)stackingViewController:(id)arg1 showsTitleForViewController:(id)arg2;
- (void)stackingViewController:(id)arg1 willSelectViewController:(id)arg2;
- (void)stackingViewControllerDidEndScroll:(id)arg1;
- (double)stackingViewControllerHeightForHeaderView:(id)arg1;
- (void)stackingViewControllerWillBeginScroll:(id)arg1;
- (id)tabBar;
- (void)updateActionVisibility;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
