//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSNetServiceBrowserDelegate-Protocol.h"

@class MPVolumeView, NSArray, NSMutableArray, NSNetServiceBrowser, NSString, NSTimer, UIButton, UITableView, UIWindow;

@interface HPLeboCast : NSObject <NSNetServiceBrowserDelegate>
{
    _Bool _stateLeboCast;
    _Bool _stateClosed;
    _Bool _stateBusy;
    _Bool _isSelected;
    _Bool _isAuthorization;
    _Bool _stateLeboA;
    _Bool _openLeboAAction;
    _Bool _openLeboCastAction;
    _Bool _closeLeboAAction;
    _Bool _closeLeboCastAction;
    _Bool _isEnableLog;
    double _deltaTimeInterval;
    NSArray *_deviceNameArr;
    UITableView *_tableView;
    UIWindow *_childWindow;
    NSString *_deviceName;
    MPVolumeView *_volumView;
    UIWindow *_sheetSecureWindow;
    UIButton *_cancelBtn;
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableArray *_services;
    NSString *_audioSessionCategory;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _continueBlock;
    double _startTimeInterval;
    NSArray *_remoteChannelSwitchList;
    MPVolumeView *_checkLeboAVolumView;
    NSArray *_deviceModelArr;
    NSTimer *_timeOutTimer;
    long long _retryPublish;
    NSTimer *_retryTimer;
}

+ (id)sharedLeboCastTools;
@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) long long retryPublish; // @synthesize retryPublish=_retryPublish;
@property(retain, nonatomic) NSTimer *timeOutTimer; // @synthesize timeOutTimer=_timeOutTimer;
@property(nonatomic) _Bool isEnableLog; // @synthesize isEnableLog=_isEnableLog;
@property(retain, nonatomic) NSArray *deviceModelArr; // @synthesize deviceModelArr=_deviceModelArr;
@property(retain, nonatomic) MPVolumeView *checkLeboAVolumView; // @synthesize checkLeboAVolumView=_checkLeboAVolumView;
@property(nonatomic) _Bool closeLeboCastAction; // @synthesize closeLeboCastAction=_closeLeboCastAction;
@property(nonatomic) _Bool closeLeboAAction; // @synthesize closeLeboAAction=_closeLeboAAction;
@property(nonatomic) _Bool openLeboCastAction; // @synthesize openLeboCastAction=_openLeboCastAction;
@property(nonatomic) _Bool openLeboAAction; // @synthesize openLeboAAction=_openLeboAAction;
@property(readonly, nonatomic) _Bool stateLeboA; // @synthesize stateLeboA=_stateLeboA;
@property(retain, nonatomic) NSArray *remoteChannelSwitchList; // @synthesize remoteChannelSwitchList=_remoteChannelSwitchList;
@property(nonatomic) _Bool isAuthorization; // @synthesize isAuthorization=_isAuthorization;
@property(nonatomic) double startTimeInterval; // @synthesize startTimeInterval=_startTimeInterval;
@property(copy, nonatomic) CDUnknownBlockType continueBlock; // @synthesize continueBlock=_continueBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *audioSessionCategory; // @synthesize audioSessionCategory=_audioSessionCategory;
@property(retain, nonatomic) NSMutableArray *services; // @synthesize services=_services;
@property(retain, nonatomic) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIWindow *sheetSecureWindow; // @synthesize sheetSecureWindow=_sheetSecureWindow;
@property(retain, nonatomic) MPVolumeView *volumView; // @synthesize volumView=_volumView;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(retain, nonatomic) UIWindow *childWindow; // @synthesize childWindow=_childWindow;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool stateBusy; // @synthesize stateBusy=_stateBusy;
@property(readonly, nonatomic) _Bool stateClosed; // @synthesize stateClosed=_stateClosed;
@property(readonly, nonatomic) _Bool stateLeboCast; // @synthesize stateLeboCast=_stateLeboCast;
@property(readonly, nonatomic) NSArray *deviceNameArr; // @synthesize deviceNameArr=_deviceNameArr;
@property(nonatomic) double deltaTimeInterval; // @synthesize deltaTimeInterval=_deltaTimeInterval;
- (void).cxx_destruct;
- (_Bool)authorizeWithKey:(char *)arg1;
- (_Bool)containString:(id)arg1;
- (void)timeOutTimerSele;
- (void)logOutput:(id)arg1;
- (void)retryDetectionSelectViewCompleted;
- (void)reloadSelectViewCompleted:(CDUnknownBlockType)arg1;
- (void)searchNextCompleted:(CDUnknownBlockType)arg1;
- (void)startWithDeviceName:(id)arg1 Controller:(id)arg2 CompleteBlock:(CDUnknownBlockType)arg3;
- (void)closeLeboCastComplete:(CDUnknownBlockType)arg1;
- (void)closeLeboCastWithCurrentViewController:(id)arg1 Complete:(CDUnknownBlockType)arg2;
- (void)continueOpenLeboCastWithDeviceName:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)screenCountDidChange;
- (void)handleWirelessRouteActiveDidChangeNotification:(id)arg1;
- (id)getPresentedViewController;
- (id)getCurrentVC;
- (void)applicationDidBecomeActiveNotification;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isCasting;
- (void)setNotifications;
- (void)resetStates;
- (id)init;
- (void)dealloc;
- (void)EnableLog:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

