/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class <PKPaymentVerificationEntryDelegate>, NSString, PKActivityTableCell, PKPaymentPass, PKPaymentWebService, UIImage;

@interface PKPaymentVerificationEntryViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {
    NSString *_descriptionText;
    PKPaymentPass *_pass;
    UIImage *_passSnapshot;
    PKPaymentWebService *_paymentWebService;
    <PKPaymentVerificationEntryDelegate> *_setupDelegate;
    PKActivityTableCell *_verificationCodeCell;
    bool_verificationCodeAccepted;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSString * descriptionText;
@property(readonly) unsigned long long hash;
@property(retain) UIImage * passSnapshot;
@property <PKPaymentVerificationEntryDelegate> * setupDelegate;
@property(readonly) Class superclass;

- (void)_disableUI;
- (void)_enableUI;
- (void)_handleDownloadedPasses:(id)arg1 withCompletion:(id)arg2;
- (id)_secureElementID;
- (void)_showActivationError:(id)arg1;
- (void)_showCompletedUIForPass:(id)arg1;
- (void)_showValidatedUI;
- (void)_submitVerificationCode;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)descriptionText;
- (id)initWithPaymentWebService:(id)arg1 pass:(id)arg2 context:(long long)arg3;
- (void)next:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)passSnapshot;
- (void)setDescriptionText:(id)arg1;
- (void)setPassSnapshot:(id)arg1;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)viewDidLoad;

@end
