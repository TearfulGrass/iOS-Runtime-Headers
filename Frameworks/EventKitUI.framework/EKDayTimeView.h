/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKDayTimeViewDelegate>, EKCurrentTimeMarkerView, NSMutableArray, NSString, UIColor, UIView;

@interface EKDayTimeView : UIView <EKCurrentTimeMarkerViewUpdating> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    unsigned int _leftBorder : 1;
    unsigned int _rightBorder : 1;
    NSMutableArray *_contentViews;
    <EKDayTimeViewDelegate> *_delegate;
    double _designatorSize;
    double _highlightedHour;
    double _hourHeight;
    double _hourHeightScale;
    double _hourSize;
    double _hoursToPad;
    } _hoursToRender;
    long long _orientation;
    UIColor *_timeColor;
    EKCurrentTimeMarkerView *_timeMarker;
    UIView *_timeMarkerExtension;
    double _timeWidth;
    bool_showsTimeMarker;
    bool_showsTimeMarkerExtension;
    bool_usesLightText;
}

@property(copy,readonly) NSString * debugDescription;
@property(readonly) double defaultHeight;
@property <EKDayTimeViewDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property double highlightedHour;
@property(readonly) double hourHeight;
@property double hourHeightScale;
@property double hoursToPad;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } hoursToRender;
@property bool showsLeftBorder;
@property bool showsRightBorder;
@property bool showsTimeMarker;
@property bool showsTimeMarkerExtension;
@property(readonly) Class superclass;
@property(retain) UIColor * timeColor;
@property(readonly) EKCurrentTimeMarkerView * timeMarker;
@property bool usesLightText;

+ (id)_boldFontForOrientation:(long long)arg1;
+ (void)_calculateWidthForOrientation:(long long)arg1;
+ (double)_dynamicFontSizeForOrientation:(long long)arg1;
+ (double)_hourWidthForOrientation:(long long)arg1;
+ (void)_invalidateCachedValues;
+ (void)_invalidateWidth;
+ (id)_normalFontForOrientation:(long long)arg1;
+ (void)_registerForInvalidation;
+ (id)allDayLabelBoldFont;
+ (id)allDayLabelFont;
+ (double)defaultHeightForOrientation:(long long)arg1 withHourScale:(double)arg2;
+ (double)defaultHeightForOrientation:(long long)arg1;
+ (double)defaultHourScale;
+ (double)designatorSizeForOrientation:(long long)arg1;
+ (double)hourHeightForOrientation:(long long)arg1;
+ (double)hourSizeForOrientation:(long long)arg1;
+ (void)setVerticalPadding:(double)arg1;
+ (double)timeInsetForOrientation:(long long)arg1;
+ (double)timeVerticalInsetForOrientation:(long long)arg1;
+ (double)timeWidthForOrientation:(long long)arg1;
+ (id)unscaledAllDayLabelFont;
+ (double)verticalPadding;

- (void).cxx_destruct;
- (void)_fontSizeChanged;
- (void)_invalidateTimeWidth;
- (void)_localeChanged;
- (double)_positionOfSecond:(int)arg1;
- (double)_timeWidth;
- (void)dealloc;
- (double)defaultHeight;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forContentView:(id)arg2 withHourRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (double)highlightedHour;
- (double)hourHeight;
- (double)hourHeightScale;
- (double)hoursToPad;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })hoursToRender;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutFrames;
- (void)layoutSubviews;
- (double)scaledHourHeight;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightedHour:(double)arg1;
- (void)setHourHeightScale:(double)arg1;
- (void)setHoursToPad:(double)arg1;
- (void)setHoursToRender:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setNeedsDisplay;
- (void)setOpaque:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setShowsLeftBorder:(bool)arg1;
- (void)setShowsRightBorder:(bool)arg1;
- (void)setShowsTimeMarker:(bool)arg1;
- (void)setShowsTimeMarkerExtension:(bool)arg1;
- (void)setTimeColor:(id)arg1;
- (void)setUsesLightText:(bool)arg1;
- (bool)showsLeftBorder;
- (bool)showsRightBorder;
- (bool)showsTimeMarker;
- (bool)showsTimeMarkerExtension;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)timeColor;
- (id)timeMarker;
- (void)tintColorDidChange;
- (double)topPadding;
- (void)updateMarkerPosition;
- (bool)usesLightText;

@end
