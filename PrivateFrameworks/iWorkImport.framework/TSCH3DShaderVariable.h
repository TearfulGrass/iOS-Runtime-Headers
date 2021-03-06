/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSArray, NSString, TSCH3DShaderVariable;

@interface TSCH3DShaderVariable : NSObject <NSCopying> {
    struct TSCH3DShaderType { 
        unsigned long long mValue; 
    boolmIsSpecial;
    unsigned long long mArraySize;
    NSArray *mElements;
    TSCH3DShaderVariable *mGenericName;
    NSString *mName;
    struct NSString { Class x1; } *mPrecision;
    } mShaderType;
    struct NSString { Class x1; } *mType;
}

@property(readonly) unsigned long long arraySize;
@property(readonly) TSCH3DShaderVariable * genericName;
@property(readonly) struct TSCH3DShaderType { unsigned long long x1; } initialLinkType;
@property(readonly) bool isSpecial;
@property(readonly) NSString * name;
@property(readonly) NSString * precision;
@property(readonly) struct TSCH3DShaderType { unsigned long long x1; } shaderType;
@property(readonly) NSString * type;

+ (id)variableWithName:(id)arg1 type:(struct NSString { Class x1; }*)arg2 precision:(struct NSString { Class x1; }*)arg3 arraySize:(unsigned long long)arg4 shaderType:(struct TSCH3DShaderType { unsigned long long x1; })arg5 isSpecial:(bool)arg6 generic:(id)arg7;

- (id).cxx_construct;
- (unsigned long long)arraySize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)genericName;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 type:(struct NSString { Class x1; }*)arg2 precision:(struct NSString { Class x1; }*)arg3 arraySize:(unsigned long long)arg4 shaderType:(struct TSCH3DShaderType { unsigned long long x1; })arg5 isSpecial:(bool)arg6 generic:(id)arg7;
- (struct TSCH3DShaderType { unsigned long long x1; })initialLinkType;
- (bool)isEqual:(id)arg1;
- (bool)isSpecial;
- (id)name;
- (struct NSString { Class x1; }*)precision;
- (struct TSCH3DShaderType { unsigned long long x1; })shaderType;
- (struct NSString { Class x1; }*)type;
- (id)variableAtIndex:(unsigned long long)arg1;

@end
