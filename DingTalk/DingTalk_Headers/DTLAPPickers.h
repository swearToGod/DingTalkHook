//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginBase.h"

#import "DTDatePickerViewDelegate-Protocol.h"

@class LAActionResponse, NSString;

@interface DTLAPPickers : LAPluginBase <DTDatePickerViewDelegate>
{
    NSString *_dateFormatString;
    LAActionResponse *_datePickerResponse;
}

+ (id)pluginExactName;
@property(retain, nonatomic) LAActionResponse *datePickerResponse; // @synthesize datePickerResponse=_datePickerResponse;
@property(copy, nonatomic) NSString *dateFormatString; // @synthesize dateFormatString=_dateFormatString;
- (void).cxx_destruct;
- (id)stringFromDate:(id)arg1 dateFormatterString:(id)arg2;
- (id)dateFromString:(id)arg1 dateFormatterString:(id)arg2;
- (void)dismissDatePickerView:(id)arg1;
- (void)didSelectedDatePickerView:(id)arg1 withDate:(id)arg2;
- (void)datetimepicker:(id)arg1 to:(id)arg2;
- (void)__exported__datetimepicker:(id)arg1 to:(id)arg2;
- (void)timepicker:(id)arg1 to:(id)arg2;
- (void)__exported__timepicker:(id)arg1 to:(id)arg2;
- (void)datepicker:(id)arg1 to:(id)arg2;
- (void)__exported__datepicker:(id)arg1 to:(id)arg2;
- (void)multiSelect:(id)arg1 to:(id)arg2;
- (void)__exported__multiSelect:(id)arg1 to:(id)arg2;
- (void)chosen:(id)arg1 to:(id)arg2;
- (void)__exported__chosen:(id)arg1 to:(id)arg2;
- (void)disposePlugin;
- (void)pluginInitialize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

