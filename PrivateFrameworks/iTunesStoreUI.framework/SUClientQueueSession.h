/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, SSDownloadManagerOptions;

@interface SUClientQueueSession : NSObject {
    long long _count;
    NSArray *_downloadKinds;
    SSDownloadManagerOptions *_managerOptions;
    id _queue;
}

@property long long count;
@property(copy) NSArray * downloadKinds;
@property(copy) SSDownloadManagerOptions * managerOptions;
@property(retain) id queue;

- (long long)count;
- (void)dealloc;
- (id)downloadKinds;
- (id)initWithQueue:(id)arg1;
- (id)managerOptions;
- (id)queue;
- (void)setCount:(long long)arg1;
- (void)setDownloadKinds:(id)arg1;
- (void)setManagerOptions:(id)arg1;
- (void)setQueue:(id)arg1;

@end
