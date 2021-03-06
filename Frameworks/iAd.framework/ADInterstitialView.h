/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADInterstitialAd, ADTapGestureRecognizer, UIView, _UIRemoteView;

@interface ADInterstitialView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    UIView *_dimmerView;
    } _dismissButtonRect;
    ADTapGestureRecognizer *_gestureRecognizer;
    ADInterstitialAd *_interstitialAd;
    _UIRemoteView *_remoteView;
    ADTapGestureRecognizer *_tapGestureRecognizer;
    bool_dimmed;
}

@property bool dimmed;
@property(retain) UIView * dimmerView;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } dismissButtonRect;
@property(retain) ADTapGestureRecognizer * gestureRecognizer;
@property(retain) _UIRemoteView * remoteView;
@property(readonly) ADTapGestureRecognizer * tapGestureRecognizer;

- (void)_gestureHandler:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (bool)dimmed;
- (id)dimmerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dismissButtonRect;
- (id)gestureRecognizer;
- (id)initForInterstitialAd:(id)arg1;
- (id)interstitialAd;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)remoteView;
- (void)removeFromSuperview;
- (void)setAlpha:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDimmed:(bool)arg1;
- (void)setDimmerView:(id)arg1;
- (void)setDismissButtonRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setGestureRecognizer:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setHostedWindowHostingHandle:(id)arg1;
- (void)setRemoteView:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (id)tapGestureRecognizer;

@end
