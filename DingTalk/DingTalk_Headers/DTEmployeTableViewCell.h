//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactTableViewCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UITextField;

@interface DTEmployeTableViewCell : DTContactTableViewCell <UITextFieldDelegate>
{
    UITextField *_nameTextField;
    UIButton *_editBtn;
    UIButton *_deleteBtn;
}

+ (double)calculateCellHeight:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(retain, nonatomic) UIButton *editBtn; // @synthesize editBtn=_editBtn;
@property(retain, nonatomic) UITextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)deleteButtonPressed:(id)arg1;
- (void)editButtonPressed:(id)arg1;
- (void)limitTextField;
- (void)editName;
- (void)configCellWithContactItem:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithCellStyle:(unsigned long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

