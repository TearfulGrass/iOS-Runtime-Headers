/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCallHistoryNilUuid : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int callStatus : 1; 
        unsigned int callType : 1; 
    unsigned int _callStatus;
    unsigned int _callType;
    } _has;
    unsigned long long _timestamp;
}

@property unsigned int callStatus;
@property unsigned int callType;
@property bool hasCallStatus;
@property bool hasCallType;
@property bool hasTimestamp;
@property unsigned long long timestamp;

- (unsigned int)callStatus;
- (unsigned int)callType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCallStatus;
- (bool)hasCallType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallStatus:(unsigned int)arg1;
- (void)setCallType:(unsigned int)arg1;
- (void)setHasCallStatus:(bool)arg1;
- (void)setHasCallType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
