//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBCentralManager, CBPeripheral, DTPeripheralScanManager, NSDictionary, NSNumber;

@protocol DTPeripheralScanManagerDelegate <NSObject>
- (_Bool)centralManager:(CBCentralManager *)arg1 didDiscoverPeripheral:(CBPeripheral *)arg2 advertisementData:(NSDictionary *)arg3 RSSI:(NSNumber *)arg4;

@optional
- (void)didScanNoData:(DTPeripheralScanManager *)arg1;
- (void)didDisableScan:(DTPeripheralScanManager *)arg1;
- (void)didStopScan:(DTPeripheralScanManager *)arg1;
@end

