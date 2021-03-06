/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSObject<OS_dispatch_queue>, VKLRUCache;

@interface VKRasterMapTileCache : NSObject {
    VKLRUCache *_cache;
    NSObject<OS_dispatch_queue> *_cacheQ;
}

- (id)initWithMaxCapacity:(unsigned long long)arg1;
- (void)objectForKey:(id)arg1 queue:(id)arg2 callback:(id)arg3;
- (oneway void)setObject:(id)arg1 forKey:(id)arg2;

@end
