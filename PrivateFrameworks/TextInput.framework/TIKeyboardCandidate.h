/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIKeyboardCandidate : NSObject <NSCopying, NSSecureCoding, TIKeyboardCandidateCoding> {
    NSString *_alternativeText;
}

@property(copy) NSString * alternativeText;
@property(readonly) NSString * candidate;
@property(getter=isCompletionCandidate,readonly) bool completionCandidate;
@property(copy,readonly) NSString * debugDescription;
@property(readonly) unsigned long long deleteCount;
@property(copy,readonly) NSString * description;
@property(getter=isEmojiCandidate,readonly) bool emojiCandidate;
@property(getter=isExtensionCandidate,readonly) bool extensionCandidate;
@property(getter=isFullwidthCandidate,readonly) bool fullwidthCandidate;
@property(readonly) unsigned long long hash;
@property(getter=isInlineCompletionCandidate,readonly) bool inlineCompletionCandidate;
@property(readonly) NSString * input;
@property(readonly) bool isAutocorrection;
@property(readonly) bool isForShortcutConversion;
@property(readonly) NSString * label;
@property(readonly) Class superclass;
@property(readonly) unsigned int usageTrackingMask;
@property(readonly) unsigned long long wordOriginFeedbackID;

+ (bool)supportsSecureCoding;
+ (int)type;

- (id)alternativeText;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)deleteCount;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (bool)isAutocorrection;
- (bool)isCompletionCandidate;
- (bool)isEmojiCandidate;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionCandidate;
- (bool)isForShortcutConversion;
- (bool)isFullwidthCandidate;
- (bool)isInlineCompletionCandidate;
- (id)label;
- (void)setAlternativeText:(id)arg1;
- (unsigned int)usageTrackingMask;
- (unsigned long long)wordOriginFeedbackID;

@end
