//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "HPCastReceiveServiceDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class HPCastReceiveService, HPServiceModel, NSString, NSTimer;
@protocol HPOfficeCastDelegate;

@interface HPOfficeCast : NSObject <NSURLSessionDelegate, HPCastReceiveServiceDelegate>
{
    _Bool _isStartCasting;
    _Bool _isLogEnable;
    _Bool _isCastVerify;
    _Bool _isCasting;
    _Bool _stateBusy;
    NSString *_castSuccessIP;
    id <HPOfficeCastDelegate> _delegate;
    HPServiceModel *_serviceModel;
    NSString *_publishServiceDeviceId;
    HPCastReceiveService *_receiveService;
    NSTimer *_castTimer;
    CDUnknownBlockType _castComBlock;
    double _timeout;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedOfficeCast;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool stateBusy; // @synthesize stateBusy=_stateBusy;
@property(copy, nonatomic) CDUnknownBlockType castComBlock; // @synthesize castComBlock=_castComBlock;
@property(retain, nonatomic) NSTimer *castTimer; // @synthesize castTimer=_castTimer;
@property(retain, nonatomic) HPCastReceiveService *receiveService; // @synthesize receiveService=_receiveService;
@property(nonatomic) _Bool isCasting; // @synthesize isCasting=_isCasting;
@property(copy, nonatomic) NSString *publishServiceDeviceId; // @synthesize publishServiceDeviceId=_publishServiceDeviceId;
@property(retain, nonatomic) HPServiceModel *serviceModel; // @synthesize serviceModel=_serviceModel;
@property(nonatomic) _Bool isCastVerify; // @synthesize isCastVerify=_isCastVerify;
@property(nonatomic) __weak id <HPOfficeCastDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isLogEnable; // @synthesize isLogEnable=_isLogEnable;
@property(copy, nonatomic) NSString *castSuccessIP; // @synthesize castSuccessIP=_castSuccessIP;
@property(nonatomic) _Bool isStartCasting; // @synthesize isStartCasting=_isStartCasting;
- (void).cxx_destruct;
- (void)dealloc;
- (id)stringToMD5:(id)arg1;
- (id)jiaMiString:(id)arg1 miKey:(id)arg2;
- (void)closeCastWithNoticeTVComplete:(CDUnknownBlockType)arg1;
- (void)stopCast:(CDUnknownBlockType)arg1;
- (void)stopMicCollectCastConnection;
- (id)getRootView;
- (void)publishAndCastCode:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)castTimeOut;
- (void)getTVDeviceInfoWithIP:(id)arg1 speakerAudio:(_Bool)arg2 comBlock:(CDUnknownBlockType)arg3;
- (void)getMacAddr:(id)arg1 timeout:(double)arg2 completeBlock:(CDUnknownBlockType)arg3;
- (void)logOutput:(id)arg1;
- (void)startCast:(id)arg1 speakerAudio:(_Bool)arg2 timeout:(double)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (_Bool)isIP:(id)arg1;
- (void)castReceiveServiceReceivedOccupy;
- (_Bool)authorizeWithKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObserver;
- (id)get17DeviceIdString;
- (void)initCastParam;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

