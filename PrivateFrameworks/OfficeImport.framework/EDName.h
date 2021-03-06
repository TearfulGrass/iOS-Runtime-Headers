/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDFormula, EDString, NSString, OITSUPointerKeyDictionary;

@interface EDName : NSObject {
    EDFormula *_formula;
    NSString *_formulaString;
    OITSUPointerKeyDictionary *_maxWorksheetReferences;
    EDString *_nameString;
    unsigned long long _sheetIndex;
}

@property(readonly) EDFormula * formula;
@property(readonly) NSString * internalFunctionName;
@property(readonly) bool isInternalFunction;
@property(readonly) OITSUPointerKeyDictionary * maxWorksheetReferences;
@property(retain) EDString * nameString;
@property unsigned long long sheetIndex;

+ (id)name;

- (void)dealloc;
- (id)formula;
- (id)formulaString;
- (unsigned long long)hash;
- (id)init;
- (id)internalFunctionName;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEDName:(id)arg1;
- (bool)isEqualToString:(id)arg1;
- (bool)isInternalFunction;
- (id)maxWorksheetReferences;
- (id)nameString;
- (void)setFormula:(id)arg1 workbook:(id)arg2;
- (void)setFormulaString:(id)arg1 workbook:(id)arg2;
- (void)setNameString:(id)arg1;
- (void)setSheetIndex:(unsigned long long)arg1;
- (unsigned long long)sheetIndex;

@end
