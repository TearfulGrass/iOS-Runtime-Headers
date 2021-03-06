/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <MKLocationProvider>, <MKLocationRecorder>, CLHeading, CLLocation, GEOLocation, GEOLocationShifter, NSBundle, NSError, NSHashTable, NSMutableArray, NSString, NSTimer, _MKWiFiObserver;

@interface MKLocationManager : NSObject <_MKWiFiObserverDelegate, MKLocationProviderDelegate> {
    struct __SCPreferences { } *_airplaneModePrefs;
    double _applicationResumeTime;
    double _applicationSuspendTime;
    NSTimer *_coalesceTimer;
    int _consecutiveOutOfCourseCount;
    CLHeading *_heading;
    NSHashTable *_headingObservers;
    double _headingUpdateTime;
    CLLocation *_lastLocation;
    double _lastLocationReportTime;
    double _lastLocationUpdateTime;
    double _lastVehicleHeading;
    double _lastVehicleHeadingUpdateTime;
    double _lastVehicleSpeed;
    double _lastVehicleSpeedUpdateTime;
    double _locationAccuracyUpdateTime;
    id _locationCorrector;
    NSError *_locationError;
    NSHashTable *_locationListeners;
    NSHashTable *_locationObservers;
    <MKLocationProvider> *_locationProvider;
    <MKLocationRecorder> *_locationRecorder;
    GEOLocationShifter *_locationShifter;
    double _minimumLocationUpdateInterval;
    double _navCourse;
    id _networkActivity;
    NSMutableArray *_recentLocationUpdateIntervals;
    CLHeading *_throttledHeading;
    _MKWiFiObserver *_wifiObserver;
    bool_airplaneModeEnabled;
    bool_airplaneModeEnabledIsValid;
    bool_allowUpdateCoalescing;
    bool_continuedAfterBecomingInactive;
    bool_continuesWhileInactive;
    bool_enabled;
    bool_hasCustomDesiredAccuracy;
    bool_isLastLocationStale;
    bool_lastLocationPushed;
    bool_logStartStopLocationUpdates;
    bool_suspended;
    bool_trackingHeading;
    bool_trackingLocation;
    bool_useCourseForHeading;
}

@property long long activityType;
@property bool allowUpdateCoalescing;
@property(copy) id authorizationRequestBlock;
@property bool continuesWhileInactive;
@property(readonly) GEOLocation * courseCorrectedLocation;
@property(readonly) GEOLocation * currentLocation;
@property(readonly) double currentVehicleHeading;
@property(readonly) double currentVehicleSpeed;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property double desiredAccuracy;
@property double distanceFilter;
@property(retain) NSBundle * effectiveBundle;
@property(copy) NSString * effectiveBundleIdentifier;
@property(getter=isEnabled) bool enabled;
@property(readonly) double expectedGpsUpdateInterval;
@property(readonly) GEOLocation * gridSnappedCurrentLocation;
@property(readonly) bool hasLocation;
@property(readonly) unsigned long long hash;
@property(readonly) CLHeading * heading;
@property long long headingOrientation;
@property(readonly) double headingUpdateTimeInterval;
@property(readonly) bool isAirplaneModeBlockingLocation;
@property(readonly) bool isHeadingServicesAvailable;
@property(readonly) bool isLastLocationStale;
@property(readonly) bool isLocationServicesApproved;
@property(readonly) bool isLocationServicesAvailable;
@property(readonly) bool isLocationServicesDenied;
@property(readonly) bool isLocationServicesEnabled;
@property(readonly) bool isLocationServicesPossiblyAvailable;
@property(readonly) bool isLocationServicesRestricted;
@property(readonly) bool isWiFiEnabled;
@property(readonly) CLLocation * lastLocation;
@property(getter=wasLastLocationPushed,readonly) bool lastLocationPushed;
@property(readonly) int lastLocationSource;
@property(copy) id locationCorrector;
@property(readonly) NSError * locationError;
@property(retain) <MKLocationProvider> * locationProvider;
@property(retain) <MKLocationRecorder> * locationRecorder;
@property(getter=isLocationServicesAuthorizationNeeded,readonly) bool locationServicesAuthorizationNeeded;
@property(getter=isLocationServicesPreferencesDialogEnabled) bool locationServicesPreferencesDialogEnabled;
@property(readonly) bool locationShiftEnabled;
@property bool logStartStopLocationUpdates;
@property bool matchInfoEnabled;
@property double minimumLocationUpdateInterval;
@property(readonly) double navigationCourse;
@property(copy) id networkActivity;
@property(readonly) Class superclass;
@property(retain) CLHeading * throttledHeading;
@property bool useCourseForHeading;
@property(readonly) double vehicleHeadingOrCourse;

+ (void)setCanMonitorWiFiStatus:(bool)arg1;
+ (id)sharedLocationManager;

- (void).cxx_destruct;
- (void)_airplaneModeChanged;
- (bool)_isTimeToResetOnResume;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)_refreshAirplaneMode;
- (void)_reportHeadingFailureWithError:(id)arg1;
- (void)_reportHeadingSuccess;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationSuccess;
- (void)_setTrackingHeading:(bool)arg1;
- (void)_setTrackingLocation:(bool)arg1;
- (bool)_shouldAllowLocationUpdateInterval:(double)arg1;
- (void)_startCoalescingUpdates:(int)arg1;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (void)_stopCoalescingUpdates;
- (void)_suspend;
- (void)_syncLocationProviderWithTracking;
- (void)_useCoreLocationProvider;
- (long long)activityType;
- (bool)allowUpdateCoalescing;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)authorizationRequestBlock;
- (bool)continuesWhileInactive;
- (id)courseCorrectedLocation;
- (id)currentLocation;
- (double)currentVehicleHeading;
- (double)currentVehicleSpeed;
- (void)dampenGPSLocationAccuracy:(id*)arg1 oldLocationSource:(int)arg2;
- (void)dealloc;
- (double)desiredAccuracy;
- (void)dismissHeadingCalibrationDisplay;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (id)gridSnappedCurrentLocation;
- (bool)hasLocation;
- (id)heading;
- (long long)headingOrientation;
- (double)headingUpdateTimeInterval;
- (id)init;
- (bool)isAirplaneModeBlockingLocation;
- (bool)isEnabled;
- (bool)isHeadingServicesAvailable;
- (bool)isLastLocationStale;
- (bool)isLocationServicesApproved;
- (bool)isLocationServicesAuthorizationNeeded;
- (bool)isLocationServicesAvailable;
- (bool)isLocationServicesDenied;
- (bool)isLocationServicesEnabled;
- (bool)isLocationServicesPossiblyAvailable:(id*)arg1;
- (bool)isLocationServicesPossiblyAvailable;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isLocationServicesRestricted;
- (bool)isWiFiEnabled;
- (id)lastLocation;
- (int)lastLocationSource;
- (void)listenForLocationUpdates:(id)arg1;
- (id)locationCorrector;
- (id)locationError;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2 lastKnownNavCourse:(double)arg3;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (id)locationProvider;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (bool)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (id)locationRecorder;
- (bool)locationShiftEnabled;
- (bool)logStartStopLocationUpdates;
- (bool)matchInfoEnabled;
- (double)minimumLocationUpdateInterval;
- (double)navigationCourse;
- (id)networkActivity;
- (void)pushLocation:(id)arg1;
- (void)reportCoalescedUpdated;
- (void)reset;
- (void)resetAfterResumeIfNecessary;
- (void)setActivityType:(long long)arg1;
- (void)setAllowUpdateCoalescing:(bool)arg1;
- (void)setAuthorizationRequestBlock:(id)arg1;
- (void)setCoalesceTimer:(id)arg1;
- (void)setContinuesWhileInactive:(bool)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHeading:(id)arg1;
- (void)setHeadingOrientation:(long long)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocationCorrector:(id)arg1;
- (void)setLocationProvider:(id)arg1;
- (void)setLocationRecorder:(id)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setLogStartStopLocationUpdates:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)setMinimumLocationUpdateInterval:(double)arg1;
- (void)setNetworkActivity:(id)arg1;
- (void)setThrottledHeading:(id)arg1;
- (void)setUseCourseForHeading:(bool)arg1;
- (bool)shouldCoalesceUpdates;
- (bool)shouldStartCoalescingLocation:(id)arg1;
- (bool)shouldStopCoalescingLocation:(id)arg1;
- (id)singleLocationUpdateWithDesiredAccuracy:(double)arg1 handler:(id)arg2;
- (id)singleLocationUpdateWithHandler:(id)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)startVehicleHeadingUpdate;
- (void)startVehicleSpeedUpdate;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)stopVehicleHeadingUpdate;
- (void)stopVehicleSpeedUpdate;
- (id)throttledHeading;
- (bool)useCourseForHeading;
- (double)vehicleHeadingOrCourse;
- (bool)wasLastLocationPushed;
- (void)wiFiObserverDidChangeEnabled:(id)arg1;

@end
