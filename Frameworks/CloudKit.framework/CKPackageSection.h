/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSData;

@interface CKPackageSection : NSObject {
    long long _index;
    NSData *_signature;
    long long _size;
}

@property(readonly) long long index;
@property(readonly) NSData * signature;
@property long long size;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)description;
- (long long)index;
- (id)initWithIndex:(long long)arg1 signature:(id)arg2 size:(long long)arg3;
- (void)setSize:(long long)arg1;
- (id)signature;
- (long long)size;

@end
