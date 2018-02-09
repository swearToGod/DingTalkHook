//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTCFolder, NSMutableDictionary;

@interface DTMailNotificationCalculator : NSObject
{
    _Bool _isCalculating;
    _Bool _isDirty;
    CDUnknownBlockType _totalNewUpdatedObservable;
    CDUnknownBlockType _folderAccountNewUpdatedObservable;
    CDUnknownBlockType _loginStateChangeSignal;
    CDUnknownBlockType _folderSwitchSignal;
    CDUnknownBlockType _muteSettingSignal;
    CDUnknownBlockType _emailReceivedSignal;
    NSMutableDictionary *_numberMap;
    unsigned long long _numberTotalNew;
    DTCFolder *_switchedFolder;
}

+ (id)sharedCalulator;
@property(retain, nonatomic) DTCFolder *switchedFolder; // @synthesize switchedFolder=_switchedFolder;
@property(nonatomic) unsigned long long numberTotalNew; // @synthesize numberTotalNew=_numberTotalNew;
@property(retain, nonatomic) NSMutableDictionary *numberMap; // @synthesize numberMap=_numberMap;
@property(nonatomic) _Bool isDirty; // @synthesize isDirty=_isDirty;
@property(nonatomic) _Bool isCalculating; // @synthesize isCalculating=_isCalculating;
@property(readonly, copy, nonatomic) CDUnknownBlockType emailReceivedSignal; // @synthesize emailReceivedSignal=_emailReceivedSignal;
@property(readonly, copy, nonatomic) CDUnknownBlockType muteSettingSignal; // @synthesize muteSettingSignal=_muteSettingSignal;
@property(readonly, copy, nonatomic) CDUnknownBlockType folderSwitchSignal; // @synthesize folderSwitchSignal=_folderSwitchSignal;
@property(readonly, copy, nonatomic) CDUnknownBlockType loginStateChangeSignal; // @synthesize loginStateChangeSignal=_loginStateChangeSignal;
@property(copy, nonatomic) CDUnknownBlockType folderAccountNewUpdatedObservable; // @synthesize folderAccountNewUpdatedObservable=_folderAccountNewUpdatedObservable;
@property(copy, nonatomic) CDUnknownBlockType totalNewUpdatedObservable; // @synthesize totalNewUpdatedObservable=_totalNewUpdatedObservable;
- (void).cxx_destruct;
- (id)calculateNumberMap;
- (unsigned long long)calculateTotal;
- (id)buildNumberMapForAccount:(id)arg1;
- (_Bool)tick;
- (id)init;

@end

