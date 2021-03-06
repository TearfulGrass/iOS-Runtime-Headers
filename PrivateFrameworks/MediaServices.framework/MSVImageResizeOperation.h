/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@class NSError, NSObject<OS_dispatch_group>, NSURL;

@interface MSVImageResizeOperation : NSOperation {
    struct CGSize { 
        double width; 
        double height; 
    } _destinationSize;
    NSURL *_destinationURL;
    NSError *_error;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSURL *_sourceURL;
    bool_overwriteExistingDestination;
}

@property(readonly) struct CGSize { double x1; double x2; } destinationSize;
@property(readonly) NSURL * destinationURL;
@property(readonly) NSError * error;
@property(readonly) NSObject<OS_dispatch_group> * operationGroup;
@property(readonly) bool overwriteExistingDestination;
@property(readonly) NSURL * sourceURL;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })destinationSize;
- (id)destinationURL;
- (id)error;
- (id)initWithSourceURL:(id)arg1 destinationSize:(struct CGSize { double x1; double x2; })arg2 destinationURL:(id)arg3 overwriteExistingDestination:(bool)arg4;
- (void)main;
- (id)operationGroup;
- (bool)overwriteExistingDestination;
- (id)sourceURL;

@end
