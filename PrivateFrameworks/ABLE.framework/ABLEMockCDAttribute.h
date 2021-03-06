/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ABLE.framework/ABLE
 */

@class DuetSampleData, NSDate;

@interface ABLEMockCDAttribute : NSObject <ABLEMockCDAttributeProtocol> {
    DuetSampleData *_duetSampleData;
    NSDate *_endDate;
}

@property(retain) DuetSampleData * duetSampleData;
@property(retain) NSDate * endDate;

- (void).cxx_destruct;
- (id)duetSampleData;
- (id)endDate;
- (id)initWithEndDate:(id)arg1;
- (id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3;
- (void)setDuetSampleData:(id)arg1;
- (void)setEndDate:(id)arg1;
- (id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3;

@end
