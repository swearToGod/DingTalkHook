//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField;

@interface DTDingAccountViewController : DTContactBaseViewController <UITextFieldDelegate>
{
    _Bool _isPresented;
    CDUnknownBlockType _dingAccountHasSetBlock;
    UILabel *_titleLabel;
    UITextField *_textField;
    UILabel *_tipLabel;
    UILabel *_emailLabel;
}

@property(retain, nonatomic) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType dingAccountHasSetBlock; // @synthesize dingAccountHasSetBlock=_dingAccountHasSetBlock;
@property(nonatomic) _Bool isPresented; // @synthesize isPresented=_isPresented;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChanged:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)quit;
- (void)showsDingAccountInvalid;
- (_Bool)isDingAccountValid:(id)arg1;
- (void)saveDingAccount:(id)arg1;
- (void)saveButtonPressed:(id)arg1;
- (void)setEmailWithDingAccount:(id)arg1;
- (void)loadDatasource;
- (void)loadComponent;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

