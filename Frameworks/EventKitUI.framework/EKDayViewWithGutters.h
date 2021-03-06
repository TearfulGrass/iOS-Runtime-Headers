/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKDayAllDayView, EKDayView, UIView;

@interface EKDayViewWithGutters : UIView {
    double _allDayHeight;
    EKDayView *_dayView;
    double _gutterWidth;
    EKDayAllDayView *_leftAllDayView;
    UIView *_leftGutter;
    EKDayAllDayView *_rightAllDayView;
    UIView *_rightGutter;
}

@property double allDayHeight;
@property(retain) EKDayView * dayView;
@property double gutterWidth;
@property(readonly) UIView * leftGutter;
@property(readonly) UIView * rightGutter;

- (void).cxx_destruct;
- (id)_createAllDayView;
- (double)allDayHeight;
- (id)dayView;
- (double)gutterWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 dayView:(id)arg2;
- (id)leftGutter;
- (id)rightGutter;
- (void)setAllDayHeight:(double)arg1;
- (void)setDayView:(id)arg1;
- (void)setGutterWidth:(double)arg1;

@end
