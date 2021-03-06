/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class NSDate, NSMutableDictionary, NSString;

@interface MBContainer : NSObject <NSCopying> {
    NSMutableDictionary *_plist;
}

@property(retain) NSString * containerDir;
@property(readonly) int containerType;
@property(readonly) NSString * containerTypeString;
@property(retain) NSDate * datePlacedInSafeHarbor;
@property(readonly) NSString * identifier;
@property(getter=isSafeHarbor,readonly) bool safeHarbor;
@property(readonly) NSString * safeHarborDir;

+ (id)containerWithDomainName:(id)arg1;
+ (id)containerWithPropertyList:(id)arg1;

- (id)containerDir;
- (int)containerType;
- (id)containerTypeString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)datePlacedInSafeHarbor;
- (void)dealloc;
- (id)domain;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithPropertyList:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSafeHarbor;
- (id)propertyListForBackupProperties;
- (id)propertyListForSafeHarborInfo;
- (id)safeHarborDir;
- (void)setContainerDir:(id)arg1;
- (void)setDatePlacedInSafeHarbor:(id)arg1;

@end
