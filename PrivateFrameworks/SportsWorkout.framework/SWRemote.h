/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@interface SWRemote : SWAccessory {
    bool_isListeningToRemote;
}

@property(readonly) bool isListeningToRemote;

- (void)beginListeningToRemoteCommands;
- (bool)isListeningToRemote;
- (void)stopListeningToRemoteCommands;

@end
