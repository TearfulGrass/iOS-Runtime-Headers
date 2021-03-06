/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
 */

@class CDAttribute, CDDevice;

@interface ABLEMockCDAttributeWithDevice : NSObject <ABLEMockCDAttributeProtocol> {
    CDAttribute *_attribute;
    CDDevice *_device;
}

@property(readonly) CDAttribute * attribute;
@property(readonly) CDDevice * device;

- (void).cxx_destruct;
- (id)attribute;
- (id)device;
- (id)initWithDevice:(id)arg1 attribute:(id)arg2;
- (id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3;
- (id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3;

@end
