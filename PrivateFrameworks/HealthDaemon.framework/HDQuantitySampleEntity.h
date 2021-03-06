/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDQuantitySampleEntity : HDSampleEntity {
}

+ (Class)_associatedDataObjectClass;
+ (id)_columnsSQL;
+ (unsigned long long)_countPartialSamplesFromDate:(id)arg1 toDate:(id)arg2 predicate:(id)arg3 database:(id)arg4;
+ (id)_databaseTable;
+ (void)_enumerateSamplesWithType:(id)arg1 predicate:(id)arg2 unit:(id)arg3 healthDaemon:(id)arg4 handler:(id)arg5;
+ (double)_firstDoubleFromOrderedSources:(id)arg1 inValuesBySource:(id)arg2 healthDaemon:(id)arg3;
+ (id)_firstValueFromOrderedSources:(id)arg1 inValuesBySource:(id)arg2;
+ (id)_getQuantitiesBySourceForProperty:(id)arg1 functions:(id)arg2 predicate:(id)arg3 unit:(id)arg4 healthDaemon:(id)arg5 database:(id)arg6;
+ (id)_mergedSumsForDataType:(id)arg1 orderedSources:(id)arg2 predicate:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 unit:(id)arg6 bySource:(id)arg7 healthDaemon:(id)arg8;
+ (id)_orderedSourceIDsFromSources:(id)arg1 healthDaemon:(id)arg2;
+ (id)_predicateWithQuantityType:(id)arg1 sourceIdentifier:(id)arg2 predicate:(id)arg3;
+ (id)_propertySettersForDataObject;
+ (id)_tableValuesFromDataObject:(id)arg1;
+ (void)load;
+ (id)statisticsForDataType:(id)arg1 options:(unsigned long long)arg2 healthDaemon:(id)arg3 predicate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 sourceIdentifier:(id)arg7 orderedSources:(id)arg8 shouldStopProcessing:(id)arg9 error:(id*)arg10;
+ (id)sumOfSamplesWithDataType:(id)arg1 inDatabase:(id)arg2 predicate:(id)arg3;

@end
