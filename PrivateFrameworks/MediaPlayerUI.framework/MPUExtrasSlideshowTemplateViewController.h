/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@class IKSlideshowElement, MPUExtrasSlideshowViewController, NSArray, NSString, UITapGestureRecognizer;

@interface MPUExtrasSlideshowTemplateViewController : MPUExtrasTemplateViewController <MPUExtrasSlideshowViewControllerDataSource, MPUExtrasZoomingImageTransitionParticipant> {
    NSArray *_imageElements;
    MPUExtrasSlideshowViewController *_slideshowViewController;
    UITapGestureRecognizer *_tapGestureRecognizer;
    bool_preventNavbarAutohide;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSArray * imageElements;
@property(retain) MPUExtrasSlideshowViewController * slideshowViewController;
@property(readonly) Class superclass;
@property(retain) UITapGestureRecognizer * tapGestureRecognizer;
@property(readonly) IKSlideshowElement * templateElement;

- (void).cxx_destruct;
- (void)_firstImageLoadedHideNavigationBar;
- (void)_handleTap:(id)arg1;
- (void)_toggleVisibilityOfNavigationBar;
- (void)dealloc;
- (void)finalizeZoomingImageTransitionWithContext:(id)arg1 transitionFinished:(bool)arg2;
- (id)imageElements;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (unsigned long long)numberOfImagesForSlideshowViewController:(id)arg1;
- (void)performZoomingImageTransitionWithContext:(id)arg1;
- (bool)prefersStatusBarHidden;
- (void)prepareZoomingImageTransitionWithContext:(id)arg1;
- (void)setImageElements:(id)arg1;
- (void)setSlideshowViewController:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (bool)shouldPerformZoomingImageTransitionFromImageElement:(id)arg1 toImageAtIndex:(unsigned long long)arg2;
- (bool)showsPlaceholder;
- (void)slideshowViewController:(id)arg1 loadImageAtIndex:(unsigned long long)arg2 withCompletionHandler:(id)arg3;
- (id)slideshowViewController;
- (id)tapGestureRecognizer;
- (id)templateElement;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
