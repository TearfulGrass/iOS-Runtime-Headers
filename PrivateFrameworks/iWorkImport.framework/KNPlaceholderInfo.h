/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface KNPlaceholderInfo : TSWPShapeInfo {
    boolmIsFromPasteboard;
}

@property(readonly) bool isFromPasteboard;

+ (id)newObjectForUnarchiver:(id)arg1;

- (bool)autoListRecognition;
- (bool)autoListTermination;
- (id)copyAsShapeInfoWithContext:(id)arg1;
- (bool)displaysInstructionalText;
- (id)initFromUnarchiver:(id)arg1;
- (id)instructionalText;
- (bool)isFromPasteboard;
- (int)kind;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct PlaceholderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeInfoArchive {} *x3; int x4; int x5; unsigned int x6[1]; }*)arg1 unarchiver:(id)arg2;
- (Class)repClass;
- (void)saveToArchive:(struct PlaceholderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeInfoArchive {} *x3; int x4; int x5; unsigned int x6[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (bool)shouldHideEmptyBullets;

@end
