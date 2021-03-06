/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class <NSCopying><NSObject><NSSecureCoding>, NSString, TIKeyboardCandidate, TIKeyboardTouchEvent;

@interface TIKeyboardInput : NSObject <NSSecureCoding> {
    union { 
        long long integerValue; 
        struct { 
            unsigned int uppercase : 1; 
            unsigned int autoshifted : 1; 
            unsigned int popupVariant : 1; 
            unsigned int multitap : 1; 
            unsigned int flick : 1; 
            unsigned int synthesizedByAcceptingCandidate : 1; 
        } fields; 
    TIKeyboardCandidate *_acceptedCandidate;
    } _flags;
    <NSCopying><NSObject><NSSecureCoding> *_object;
    NSString *_string;
    TIKeyboardTouchEvent *_touchEvent;
    bool_backspace;
}

@property(retain) TIKeyboardCandidate * acceptedCandidate;
@property(getter=isAutoshifted) bool autoshifted;
@property(getter=isBackspace) bool backspace;
@property(getter=isFlick) bool flick;
@property(getter=isMultitap) bool multitap;
@property(copy) <NSCopying><NSObject><NSSecureCoding> * object;
@property(getter=isPopupVariant) bool popupVariant;
@property(copy) NSString * string;
@property(getter=isSynthesizedByAcceptingCandidate) bool synthesizedByAcceptingCandidate;
@property(retain) TIKeyboardTouchEvent * touchEvent;
@property(getter=isUppercase) bool uppercase;

+ (bool)supportsSecureCoding;

- (id)acceptedCandidate;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAutoshifted;
- (bool)isBackspace;
- (bool)isFlick;
- (bool)isMultitap;
- (bool)isPopupVariant;
- (bool)isSynthesizedByAcceptingCandidate;
- (bool)isUppercase;
- (id)object;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setAutoshifted:(bool)arg1;
- (void)setBackspace:(bool)arg1;
- (void)setFlick:(bool)arg1;
- (void)setMultitap:(bool)arg1;
- (void)setObject:(id)arg1;
- (void)setPopupVariant:(bool)arg1;
- (void)setString:(id)arg1;
- (void)setSynthesizedByAcceptingCandidate:(bool)arg1;
- (void)setTouchEvent:(id)arg1;
- (void)setUppercase:(bool)arg1;
- (id)string;
- (id)touchEvent;

@end
