/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class IMHandle, NSDate;

@interface CKBalloonChatItem : CKChatItem {
}

@property(readonly) unsigned long long balloonCorners;
@property(readonly) BOOL balloonOrientation;
@property(readonly) Class balloonViewClass;
@property(readonly) bool failed;
@property(getter=isFromMe,readonly) bool fromMe;
@property(retain,readonly) IMHandle * sender;
@property(retain,readonly) NSDate * time;

- (unsigned long long)balloonCorners;
- (BOOL)balloonOrientation;
- (Class)balloonViewClass;
- (Class)cellClass;
- (id)cellIdentifier;
- (void)configureBalloonView:(id)arg1;
- (id)contactImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsets;
- (id)description;
- (bool)displayDuringSend;
- (bool)failed;
- (bool)isEditable;
- (bool)isFromMe;
- (struct CGSize { double x1; double x2; })loadSizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (id)loadTranscriptDrawerText;
- (id)sender;
- (id)time;
- (BOOL)transcriptOrientation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })transcriptTextAlignmentInsets;
- (bool)wantsDrawerLayout;

@end
