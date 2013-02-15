/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKPersistentCalendarItem, NSDate;

@interface EKPersistentExceptionDate : EKPersistentObject {
    NSDate *_date;
}

@property(readonly) NSDate * date;
@property(retain) EKPersistentCalendarItem * owner;

+ (id)exceptionDateWithDate:(id)arg1;
+ (id)relations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (int)entityType;
- (unsigned int)hash;
- (id)initWithExceptionDate:(id)arg1;
- (id)owner;
- (void)setOwner:(id)arg1;

@end