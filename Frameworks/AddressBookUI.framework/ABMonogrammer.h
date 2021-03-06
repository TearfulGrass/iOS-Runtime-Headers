/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, UIColor, UIFont, UIImage;

@interface ABMonogrammer : NSObject {
    UIColor *_backgroundColor;
    double _diameter;
    UIFont *_font;
    double _innerBorderWidth;
    UIImage *_knockoutMaskMonogram;
    long long _monogrammerStyle;
    UIImage *_questionMarkMonogram;
    double _scale;
    NSString *_silhouetteImageName;
    UIImage *_silhouetteMonogram;
    UIColor *_textColor;
    UIColor *_tintColor;
    bool_textKnockout;
}

@property(retain) UIColor * backgroundColor;
@property double diameter;
@property(retain) UIFont * font;
@property(retain) UIColor * textColor;
@property bool textKnockout;

- (void)_clearMonogramCache;
- (id)_copyMonogramWithImageData:(struct __CFData { }*)arg1;
- (id)_copyMonogramWithInitials:(id)arg1;
- (id)_copyMonogramWithKnockoutMask;
- (id)_copyMonogramWithSilhouette;
- (id)_initialsForFirstName:(id)arg1 lastName:(id)arg2;
- (id)_initialsForPerson:(void*)arg1;
- (id)backgroundColor;
- (void)dealloc;
- (id)defaultMonogram;
- (double)diameter;
- (id)font;
- (bool)hasImageOrInitialsForPerson:(void*)arg1;
- (bool)hasMonogramForPerson:(void*)arg1;
- (id)init;
- (id)initWithStyle:(long long)arg1 diameter:(double)arg2;
- (double)innerBorderWidth;
- (id)knockoutMaskMonogram;
- (id)maskForMonogram;
- (id)monogramForPerson:(void*)arg1 isPersonImage:(bool*)arg2;
- (id)monogramForPerson:(void*)arg1;
- (id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2;
- (void)monogramsAsFlatImages;
- (void)monogramsForStark;
- (void)monogramsWithTint:(id)arg1;
- (id)questionMarkMonogram;
- (void)setBackgroundColor:(id)arg1;
- (void)setDiameter:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextKnockout:(bool)arg1;
- (id)silhouetteImageName;
- (id)silhouetteMonogram;
- (id)textColor;
- (bool)textKnockout;

@end
