/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@class <CLLocationManagerDelegate>, NSTimer, CLLocationManager, NSDate;

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate> {
    NSTimer *_automaticLocationUpdateTimer;
    NSTimer *_accuracyFallbackTimer;
    int _authorizationStatus;
    double _oldestAcceptedTime;
    double _lastLocationUpdateTime;
    double _nextPlannedUpdate;
    BOOL _activelyTrackingLocation;
    NSDate *_lastLocationTimeStamp;
    struct { 
        double latitude; 
        double longitude; 
    } _lastLocationCoord;
    <CLLocationManagerDelegate> *_delegate;
    float _lastLocationAccuracy;
    CLLocationManager *_locationManager;
    BOOL _locationTrackingIsReady;
}

@property(retain) CLLocationManager * locationManager;
@property(copy) NSDate * lastLocationTimeStamp;
@property float lastLocationAccuracy;
@property struct { double x1; double x2; } lastLocationCoord;
@property <CLLocationManagerDelegate> * delegate;
@property BOOL locationTrackingIsReady;
@property BOOL activelyTrackingLocation;
@property int authorizationStatus;

+ (void)clearSharedLocationManager;
+ (id)sharedWeatherLocationManager;

- (int)authorizationStatus;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (id)location;
- (void)setLocationTrackingIsReady:(BOOL)arg1;
- (BOOL)locationTrackingIsReady;
- (void)setActivelyTrackingLocation:(BOOL)arg1;
- (BOOL)activelyTrackingLocation;
- (struct { double x1; double x2; })lastLocationCoord;
- (double)_lastLocationUpdateTime;
- (double)_nextPlannedUpdate;
- (BOOL)isLocalStaleOrOutOfDate;
- (BOOL)localWeatherAuthorized;
- (void)clearLocalWeatherUpdateState;
- (BOOL)loadAndPrepareLocationTrackingState;
- (void)forceLocationUpdate;
- (void)setLastLocationCoord:(struct { double x1; double x2; })arg1;
- (void)_updateLocation:(id)arg1;
- (void)setLastLocationAccuracy:(float)arg1;
- (void)setLastLocationTimeStamp:(id)arg1;
- (id)lastLocationTimeStamp;
- (float)lastLocationAccuracy;
- (int)forceLoadingAuthorizationStatus;
- (void)_setUpLocationTimerWithInterval:(float)arg1;
- (void)updateLocation:(id)arg1;
- (void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2;
- (void)setLocationTrackingActive:(BOOL)arg1;
- (void)_clearLastLocUpdateTime;
- (void)_cleanupLocationTimer;
- (void)_cleanupAccuracyFallbackTimer;
- (void)setAuthorizationStatus:(int)arg1;
- (void)setLocationManager:(id)arg1;
- (id)locationManager;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;

@end