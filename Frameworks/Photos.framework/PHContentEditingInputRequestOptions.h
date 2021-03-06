/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface PHContentEditingInputRequestOptions : NSObject {
    id _canHandleAdjustmentData;
    id _progressHandler;
    bool_networkAccessAllowed;
}

@property(copy) id canHandleAdjustmentData;
@property(getter=isNetworkAccessAllowed) bool networkAccessAllowed;
@property(copy) id progressHandler;

- (void).cxx_destruct;
- (id)canHandleAdjustmentData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isNetworkAccessAllowed;
- (id)progressHandler;
- (void)setCanHandleAdjustmentData:(id)arg1;
- (void)setNetworkAccessAllowed:(bool)arg1;
- (void)setProgressHandler:(id)arg1;

@end
