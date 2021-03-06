/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFMessage, MFMessageLibrary, NSString;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory> {
    MFMessageLibrary *_library;
    MFMessage *_message;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) MFMessageLibrary * library;
@property(retain) MFMessage * message;
@property(readonly) Class superclass;

- (id)dataConsumerForPart:(id)arg1;
- (void)dealloc;
- (id)library;
- (id)message;
- (void)setLibrary:(id)arg1;
- (void)setMessage:(id)arg1;

@end
