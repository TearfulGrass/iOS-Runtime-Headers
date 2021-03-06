/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class <BWGraphStatusDelegate>, NSMutableArray, NSObject<OS_dispatch_group>;

@interface BWGraph : NSObject {
    NSObject<OS_dispatch_group> *_commitGroup;
    NSMutableArray *_connections;
    int _errorStatus;
    long long _inflightConfigurationID;
    NSMutableArray *_nodes;
    NSMutableArray *_outputsWithSharedPools;
    NSMutableArray *_sinkNodes;
    NSMutableArray *_sourceNodes;
    NSObject<OS_dispatch_group> *_startGroup;
    <BWGraphStatusDelegate> *_statusDelegate;
    bool_beingConfigured;
    bool_classicRetainedBufferCount;
    bool_running;
    bool_supportsLiveReconfiguration;
}

@property int errorStatus;
@property <BWGraphStatusDelegate> * statusDelegate;
@property(readonly) bool supportsLiveReconfiguration;

+ (void)initialize;

- (id)_breadthFirstEnumerator;
- (id)_depthFirstEnumerator;
- (void)_makeParentConfigurationChangesLive;
- (id)_newDispatchGroupForSinksToBecomeLiveWithConfigurationID:(long long)arg1;
- (id)_newDispatchGroupForSinksToTransitionToState:(int)arg1;
- (bool)_prepareNodesWithConfigurationChanges:(id*)arg1;
- (bool)_resolveFormats:(id*)arg1;
- (bool)_resolveRetainedBufferCounts:(id*)arg1;
- (id)_reverseBreadthFirstEnumerator;
- (id)_sinkNodes;
- (id)_sourceNodes;
- (void)_waitForOutstandingStartOrCommitOperationToComplete;
- (bool)addNode:(id)arg1 error:(id*)arg2;
- (void)beginConfiguration;
- (bool)commitConfigurationWithID:(long long)arg1 error:(id*)arg2;
- (bool)connectOutput:(id)arg1 toInput:(id)arg2 pipelineStage:(id)arg3;
- (void)dealloc;
- (id)dotString;
- (int)errorStatus;
- (id)init;
- (void)setErrorStatus:(int)arg1;
- (void)setStatusDelegate:(id)arg1;
- (bool)start:(id*)arg1;
- (id)statusDelegate;
- (bool)stop:(id*)arg1;
- (bool)supportsLiveReconfiguration;
- (void)waitForOutstandingStartOrCommitOperationToComplete;

@end
