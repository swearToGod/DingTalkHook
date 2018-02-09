//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UILabel, UITextField;

@interface DTNameInputView : UIView <UITextFieldDelegate>
{
    NSString *_title;
    NSString *_name;
    CDUnknownBlockType _nameDidReturn;
    CDUnknownBlockType _nameDidChange;
    UILabel *_titleLabel;
    UITextField *_textField;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType nameDidChange; // @synthesize nameDidChange=_nameDidChange;
@property(copy, nonatomic) CDUnknownBlockType nameDidReturn; // @synthesize nameDidReturn=_nameDidReturn;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)becomeFirstResponder;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)setTextFieldPlaceHolder:(id)arg1;
- (void)loadComponents;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

