/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPAVRoutingViewControllerDelegate>, MPAVRoutingController, MPWeakTimer, NSArray, NSString, UIColor, UITableView;

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate> {
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    unsigned long long _avItemType;
    NSArray *_cachedRoutes;
    <MPAVRoutingViewControllerDelegate> *_delegate;
    MPAVRoutingController *_routingController;
    unsigned long long _style;
    UIColor *_tableCellsBackgroundColor;
    UITableView *_tableView;
    MPWeakTimer *_updateTimer;
    bool_airPlayPasswordAlertDidAppearTokenIsValid;
    bool_allowMirroring;
    bool_cachedShowAirPlayDebugButton;
    bool_hasCachedAirPlayDebugButtonStatus;
    bool_needsDisplayedRoutesUpdate;
}

@property bool allowMirroring;
@property(setter=setAVItemType:) unsigned long long avItemType;
@property(copy,readonly) NSString * debugDescription;
@property <MPAVRoutingViewControllerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) unsigned long long style;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_debugButtonTableViewIndex;
- (id)_displayedRoutes;
- (double)_expandedCellHeight;
- (double)_normalCellHeight;
- (void)_pickRoute:(id)arg1;
- (unsigned long long)_routeIndexForTableViewIndex:(unsigned long long)arg1;
- (id)_routesWhereMirroringIsPreferred;
- (void)_serviceWillPresentAuthenticationPromptNotification:(id)arg1;
- (void)_setNeedsDisplayedRoutesUpdate;
- (void)_setTableCellsBackgroundColor:(id)arg1;
- (void)_setupUpdateTimerIfNecessary;
- (bool)_shouldShowAirPlayDebugButton;
- (bool)_shouldShowMirroringCellForRoute:(id)arg1;
- (void)_showAirPlayDebug;
- (id)_tableCellsBackgroundColor;
- (id)_tableView;
- (double)_tableViewHeightAccordingToDataSource;
- (unsigned long long)_tableViewIndexForRouteIndex:(unsigned long long)arg1;
- (void)_updateDisplayedRoutes;
- (bool)allowMirroring;
- (unsigned long long)avItemType;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(bool)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)setAVItemType:(unsigned long long)arg1;
- (void)setAllowMirroring:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (unsigned long long)style;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
