//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

#import "DTMobileInputViewDelegate-Protocol.h"
#import "DTReportLossInterface-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class DTButton, DTMobileInputView, DTReportLossPresenter, DTSlideUnlockViewController, NSString, UIBarButtonItem, UIImageView, UILabel, UIScrollView, UITextField, UIView;

@interface DTReportLossViewController : DTViewController <DTMobileInputViewDelegate, UITextFieldDelegate, DTReportLossInterface>
{
    DTReportLossPresenter *_presenter;
    NSString *_countryCode;
    NSString *_countryName;
    UIScrollView *_scrollView;
    UILabel *_tipsLabel;
    UIView *_inputContainerView;
    UILabel *_countryCodeLabel;
    UIImageView *_countrySelectImageView;
    DTButton *_countryCodeButton;
    UIImageView *_labelDivideLine;
    DTMobileInputView *_mobileInput;
    UILabel *_passwordLabel;
    UITextField *_passwordTextField;
    UILabel *_slideLabel;
    DTSlideUnlockViewController *_slideUnlockVC;
    UIBarButtonItem *_nextButton;
}

@property(retain, nonatomic) UIBarButtonItem *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) DTSlideUnlockViewController *slideUnlockVC; // @synthesize slideUnlockVC=_slideUnlockVC;
@property(retain, nonatomic) UILabel *slideLabel; // @synthesize slideLabel=_slideLabel;
@property(retain, nonatomic) UITextField *passwordTextField; // @synthesize passwordTextField=_passwordTextField;
@property(retain, nonatomic) UILabel *passwordLabel; // @synthesize passwordLabel=_passwordLabel;
@property(retain, nonatomic) DTMobileInputView *mobileInput; // @synthesize mobileInput=_mobileInput;
@property(retain, nonatomic) UIImageView *labelDivideLine; // @synthesize labelDivideLine=_labelDivideLine;
@property(retain, nonatomic) DTButton *countryCodeButton; // @synthesize countryCodeButton=_countryCodeButton;
@property(retain, nonatomic) UIImageView *countrySelectImageView; // @synthesize countrySelectImageView=_countrySelectImageView;
@property(retain, nonatomic) UILabel *countryCodeLabel; // @synthesize countryCodeLabel=_countryCodeLabel;
@property(retain, nonatomic) UIView *inputContainerView; // @synthesize inputContainerView=_inputContainerView;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) DTReportLossPresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)showErrorMsg:(id)arg1;
- (void)didReportLossFailure:(id)arg1;
- (void)didReportLossSuccess;
- (void)updateActionButtonState;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)phoneNumberInputDidChanged:(id)arg1;
- (void)activePassWordInput;
- (void)hideKeyBoard;
- (void)checkMobileInputFormatter:(id)arg1;
- (void)nextButtonAction;
- (void)countryCodeButtonAction:(id)arg1;
- (void)loadComponents;
- (void)defaultCountryCode;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

