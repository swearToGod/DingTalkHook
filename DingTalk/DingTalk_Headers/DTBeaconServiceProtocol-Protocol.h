//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTATBeaconCheckInModel, NSArray, NSString;
@protocol DTBeaconServiceNetworkProtocol, DTBeaconServicePersistenceProtocol;

@protocol DTBeaconServiceProtocol <NSObject>
@property(retain, nonatomic) id <DTBeaconServiceNetworkProtocol> networkIMP;
@property(retain, nonatomic) id <DTBeaconServicePersistenceProtocol> persistenceIMP;
- (void)asyncMonitorBeaconWithUUID:(NSString *)arg1 major:(long long)arg2 minor:(long long)arg3 completion:(void (^)(DTATMonitorBeaconModel *))arg4;
- (void)fetchMonitorBeacons:(void (^)(NSArray *))arg1;
- (void)asyncSaveAtMonitorBeacons:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (void)updateUserLocationByBeacon:(DTATBeaconCheckInModel *)arg1 successBlock:(void (^)(DTOANotifyPushModel *))arg2 failureBlock:(void (^)(DTError *))arg3;
- (void)queryUserMinotorBeaconList:(void (^)(NSArray *))arg1 failureBlock:(void (^)(DTError *))arg2;
- (void)bindBeacons:(NSArray *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(DTError *))arg3;
@end

