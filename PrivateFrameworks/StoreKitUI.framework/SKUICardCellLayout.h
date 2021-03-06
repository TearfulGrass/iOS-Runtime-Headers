/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSString, SKUIBadgeLabel, SKUISearchAppBundleView, UIImage, UIImageView, UILabel;

@interface SKUICardCellLayout : SKUIItemCellLayout {
    SKUISearchAppBundleView *_appBundleView;
    UILabel *_artistLabel;
    SKUIBadgeLabel *_editorialBadgeLabel;
    UILabel *_hasInAppPurchasesLabel;
    long long _numberOfUserRatings;
    UIImageView *_screenshotImageView;
    UILabel *_titleLabel;
    double _userRating;
    UIImageView *_userRatingImageView;
    UILabel *_userRatingLabel;
    bool_appBundle;
    bool_hasInAppPurchases;
}

@property bool appBundle;
@property(readonly) SKUISearchAppBundleView * appBundleView;
@property(copy) NSString * artistName;
@property(copy) NSString * editorialBadge;
@property bool hasInAppPurchases;
@property long long numberOfUserRatings;
@property(retain) UIImage * screenshotImage;
@property(copy) NSString * title;
@property double userRating;

- (void).cxx_destruct;
- (bool)appBundle;
- (id)appBundleView;
- (id)artistName;
- (id)editorialBadge;
- (bool)hasInAppPurchases;
- (void)layoutForItemOfferChange;
- (void)layoutSubviews;
- (long long)numberOfUserRatings;
- (void)prepareForReuse;
- (void)resetLayout;
- (id)screenshotImage;
- (void)setAppBundle:(bool)arg1;
- (void)setArtistName:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setEditorialBadge:(id)arg1;
- (void)setHasInAppPurchases:(bool)arg1;
- (void)setNumberOfUserRatings:(long long)arg1;
- (void)setScreenshotImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserRating:(double)arg1;
- (id)title;
- (double)userRating;

@end
