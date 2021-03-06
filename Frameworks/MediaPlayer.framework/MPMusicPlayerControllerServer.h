/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, MPMusicPlayerControllerServerInternal;

@interface MPMusicPlayerControllerServer : NSObject {
    MPMusicPlayerControllerServerInternal *_internal;
}

@property(readonly) MPAVController * player;

+ (bool)isMusicPlayerControllerServerRunning;
+ (id)sharedInstance;
+ (void)startMusicPlayerControllerServerWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)_runMigServer;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)player;
- (void)setDelegate:(id)arg1;

@end
