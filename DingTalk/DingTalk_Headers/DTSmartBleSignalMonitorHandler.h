//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTSmartBleFilterHandler.h"

#import "DTSmartBleFilterHandlerDelegate-Protocol.h"

@class NSString, YYThreadSafeDictionary;

@interface DTSmartBleSignalMonitorHandler : DTSmartBleFilterHandler <DTSmartBleFilterHandlerDelegate>
{
    double _signalDisappearTimeInterval;
    CDUnknownBlockType _enterBleBlock;
    CDUnknownBlockType _discoverBleBlock;
    CDUnknownBlockType _exitBleBlock;
    YYThreadSafeDictionary *_entityModelDic;
}

@property(retain, nonatomic) YYThreadSafeDictionary *entityModelDic; // @synthesize entityModelDic=_entityModelDic;
@property(copy, nonatomic) CDUnknownBlockType exitBleBlock; // @synthesize exitBleBlock=_exitBleBlock;
@property(copy, nonatomic) CDUnknownBlockType discoverBleBlock; // @synthesize discoverBleBlock=_discoverBleBlock;
@property(copy, nonatomic) CDUnknownBlockType enterBleBlock; // @synthesize enterBleBlock=_enterBleBlock;
@property(nonatomic) double signalDisappearTimeInterval; // @synthesize signalDisappearTimeInterval=_signalDisappearTimeInterval;
- (void).cxx_destruct;
- (void)_didExitBleSignal:(id)arg1;
- (void)_didDiscoverBleSignal:(id)arg1;
- (void)_didEnterBleSignal:(id)arg1;
- (void)refreshExpiredSignal;
- (void)didRemoveBleSignal:(id)arg1;
- (void)didDiscoveryBleSignal:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

