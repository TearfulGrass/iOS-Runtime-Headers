/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSMutableDictionary;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest {
    NSMutableDictionary *_recordZoneIDByRequestID;
    NSArray *_recordZoneIDsToDelete;
    id _recordZoneModifiedBlock;
    NSArray *_recordZonesToSave;
}

@property(retain) NSMutableDictionary * recordZoneIDByRequestID;
@property(retain) NSArray * recordZoneIDsToDelete;
@property(copy) id recordZoneModifiedBlock;
@property(retain) NSArray * recordZonesToSave;

- (void).cxx_destruct;
- (id)initWithRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;
- (int)operationType;
- (id)recordZoneIDByRequestID;
- (id)recordZoneIDsToDelete;
- (id)recordZoneModifiedBlock;
- (id)recordZonesToSave;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (void)setRecordZoneIDByRequestID:(id)arg1;
- (void)setRecordZoneIDsToDelete:(id)arg1;
- (void)setRecordZoneModifiedBlock:(id)arg1;
- (void)setRecordZonesToSave:(id)arg1;
- (id)zoneIDsToLock;

@end
