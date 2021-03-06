/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSDictionary;

@interface BWNoiseReducerNode : BWNode {
    NSDictionary *_cameraTuningOptions;
    struct NoiseReductionCtx_s { } *_context;
    int _contextSynchronization;
    int _gpuPriority;
    NSDictionary *_noiseReductionOptions;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    bool_processLuma;
    bool_threaded;
    bool_useInPlaceAlgorithm;
}

+ (void)initialize;

- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithCameraTuningDictionary:(id)arg1 sensorIDDictionary:(id)arg2;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
