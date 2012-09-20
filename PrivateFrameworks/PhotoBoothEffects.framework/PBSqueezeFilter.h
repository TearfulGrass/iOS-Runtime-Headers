/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoBoothEffects.framework/PhotoBoothEffects
 */

@interface PBSqueezeFilter : PBFilter  {
    float lastInputX;
    float lastInputY;
    float lastInputRadius;
    float lastInputScale;
    float _inputAmount;
    boolfirstTime;
    struct CGPoint { 
        float x; 
        float y; 
    } inputPoint;
}

@property struct CGPoint { float x1; float x2; } inputPoint;
@property float inputAmount;


- (void)setInputPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)applyParametersToCIFilter:(BOOL)arg1 extent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)needsWrapMirror;
- (id)ciFilterName;
- (struct CGPoint { float x1; float x2; })inputPoint;
- (float)inputAmount;
- (void)setInputAmount:(float)arg1;
- (void)setDefaults;

@end