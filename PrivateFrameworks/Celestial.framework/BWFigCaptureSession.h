/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSString;

@interface BWFigCaptureSession : NSObject <BWNodeFileWriterStatusDelegate, BWStillImageCaptureStatusDelegate, BWRemoteQueueSinkNodeDelegate, BWNodeRenderDelegate, BWImageQueueSinkNodePreviewTapDelegate, BWGraphStatusDelegate, BWSourceNodeErrorDelegate> {
    struct OpaqueFigCaptureSession { } *_captureSession;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

- (void)fileWriter:(id)arg1 pausedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(id)arg1 resumedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(id)arg1 startedRecordingForSettingsID:(unsigned long long)arg2;
- (void)fileWriter:(id)arg1 stoppedRecordingForSettingsID:(unsigned long long)arg2 withError:(int)arg3 thumbnailSurface:(struct __IOSurface { }*)arg4;
- (void)graph:(id)arg1 didFinishStartingWithError:(int)arg2;
- (void)imageQueueSinkNode:(id)arg1 didEnqueuePreviewSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (id)initWithFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)node:(id)arg1 format:(id)arg2 didBecomeLiveForOutput:(id)arg3;
- (void)node:(id)arg1 willRenderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 forInput:(id)arg3;
- (void)remoteQueueSinkNode:(id)arg1 queueBecameReady:(struct remoteQueueSenderOpaque { }*)arg2;
- (void)sourceNode:(id)arg1 didEncounterError:(int)arg2;
- (void)stillImageCoordinator:(id)arg1 didCapturePhotoForSettingsID:(unsigned long long)arg2;
- (void)stillImageCoordinator:(id)arg1 willCapturePhotoForSettingsID:(unsigned long long)arg2 sisActive:(bool)arg3;
- (void)stillImageCoordinator:(id)arg1 willPrepareStillImageBracketWithSettings:(id)arg2 clientInitiated:(bool)arg3;

@end
