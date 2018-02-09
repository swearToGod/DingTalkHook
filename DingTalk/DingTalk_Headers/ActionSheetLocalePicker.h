//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AbstractActionSheetPicker.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSTimeZone;

@interface ActionSheetLocalePicker : AbstractActionSheetPicker <UIPickerViewDelegate, UIPickerViewDataSource>
{
    CDUnknownBlockType _onActionSheetDone;
    CDUnknownBlockType _onActionSheetCancel;
    NSTimeZone *_initialTimeZone;
    NSString *_selectedContinent;
    NSString *_selectedCity;
    NSMutableDictionary *_continentsAndCityDictionary;
    NSMutableArray *_continents;
}

+ (id)showPickerWithTitle:(id)arg1 initialSelection:(id)arg2 target:(id)arg3 successAction:(SEL)arg4 cancelAction:(SEL)arg5 origin:(id)arg6;
+ (id)showPickerWithTitle:(id)arg1 initialSelection:(id)arg2 doneBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4 origin:(id)arg5;
@property(retain, nonatomic) NSMutableArray *continents; // @synthesize continents=_continents;
@property(retain, nonatomic) NSMutableDictionary *continentsAndCityDictionary; // @synthesize continentsAndCityDictionary=_continentsAndCityDictionary;
@property(retain, nonatomic) NSString *selectedCity; // @synthesize selectedCity=_selectedCity;
@property(retain, nonatomic) NSString *selectedContinent; // @synthesize selectedContinent=_selectedContinent;
@property(retain, nonatomic) NSTimeZone *initialTimeZone; // @synthesize initialTimeZone=_initialTimeZone;
@property(copy, nonatomic) CDUnknownBlockType onActionSheetCancel; // @synthesize onActionSheetCancel=_onActionSheetCancel;
@property(copy, nonatomic) CDUnknownBlockType onActionSheetDone; // @synthesize onActionSheetDone=_onActionSheetDone;
- (void).cxx_destruct;
- (void)customButtonPressed:(id)arg1;
- (id)getCitiesByContinent:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)notifyTarget:(id)arg1 didCancelWithAction:(SEL)arg2 origin:(id)arg3;
- (void)notifyTarget:(id)arg1 didSucceedWithAction:(SEL)arg2 origin:(id)arg3;
- (void)setSelectedRows;
- (void)fillContinentsAndCities;
- (void)selectCurrentLocale:(id)arg1;
- (id)configuredPickerView;
- (id)initWithTitle:(id)arg1 initialSelection:(id)arg2 target:(id)arg3 successAction:(SEL)arg4 cancelAction:(SEL)arg5 origin:(id)arg6;
- (id)initWithTitle:(id)arg1 initialSelection:(id)arg2 doneBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4 origin:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

