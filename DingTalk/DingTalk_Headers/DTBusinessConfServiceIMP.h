//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTBusinessConfServiceProtocol-Protocol.h"

@class NSString;
@protocol DTBusinessConfServiceNetworkProtocol;

@interface DTBusinessConfServiceIMP : NSObject <DTBusinessConfServiceProtocol>
{
    id <DTBusinessConfServiceNetworkProtocol> _networkIMP;
}

@property(retain, nonatomic) id <DTBusinessConfServiceNetworkProtocol> networkIMP; // @synthesize networkIMP=_networkIMP;
- (void).cxx_destruct;
- (void)onReveiceBusinessConfPush:(id)arg1 type:(long long)arg2;
- (void)getAppointmentStatisticSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)joinAppointment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)updateAppointment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)cancelAppointment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)acceptAppointment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)refuseAppointment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)pullAppoinmentConf:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)pullAppoinmentConfs:(unsigned long long)arg1 count:(unsigned long long)arg2 timeCursor:(long long)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)createAppoinmentConf:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)RPCModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

