/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSMutableArray, PKPaymentAuthorizationLayout;

@interface PKPaymentAuthorizationSummaryItemsCell : UITableViewCell {
    NSMutableArray *_constraints;
    NSMutableArray *_labelViews;
    PKPaymentAuthorizationLayout *_layout;
    NSMutableArray *_valueViews;
}

- (id)_labelAttributedStringWithString:(id)arg1 total:(bool)arg2;
- (id)_valueAttributedStringWithString:(id)arg1 total:(bool)arg2;
- (void)addLabel:(id)arg1 value:(id)arg2 total:(bool)arg3;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateConstraints;

@end
