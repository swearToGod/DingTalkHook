//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractActionSheetPicker.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSString;

@interface ActionSheetMultipleStringPicker : AbstractActionSheetPicker <UIPickerViewDelegate, UIPickerViewDataSource>
{
    CDUnknownBlockType _onActionSheetDone;
    CDUnknownBlockType _onActionSheetCancel;
    NSArray *_data;
    NSArray *_initialSelection;
}

+ (id)showPickerWithTitle:(id)arg1 rows:(id)arg2 initialSelection:(id)arg3 target:(id)arg4 successAction:(SEL)arg5 cancelAction:(SEL)arg6 origin:(id)arg7;
+ (id)showPickerWithTitle:(id)arg1 rows:(id)arg2 initialSelection:(id)arg3 doneBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5 origin:(id)arg6;
@property(nonatomic) NSArray *initialSelection; // @synthesize initialSelection=_initialSelection;
@property(retain, nonatomic) NSArray *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType onActionSheetCancel; // @synthesize onActionSheetCancel=_onActionSheetCancel;
@property(copy, nonatomic) CDUnknownBlockType onActionSheetDone; // @synthesize onActionSheetDone=_onActionSheetDone;
- (void).cxx_destruct;
- (id)selectedIndexes;
- (id)selection;
- (void)performInitialSelectionInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)notifyTarget:(id)arg1 didCancelWithAction:(SEL)arg2 origin:(id)arg3;
- (void)notifyTarget:(id)arg1 didSucceedWithAction:(SEL)arg2 origin:(id)arg3;
- (id)configuredPickerView;
- (id)initWithTitle:(id)arg1 rows:(id)arg2 initialSelection:(id)arg3 target:(id)arg4 successAction:(SEL)arg5 cancelAction:(SEL)arg6 origin:(id)arg7;
- (id)initWithTitle:(id)arg1 rows:(id)arg2 initialSelection:(id)arg3 doneBlock:(CDUnknownBlockType)arg4 cancelBlock:(CDUnknownBlockType)arg5 origin:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

