//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBleActiveReqModel, NSArray, NSNumber, NSString;

@protocol DTProjectorNetworkProtocol <NSObject>
- (void)cancelSocketConnection;
- (void)fetchProjectorInfoWithIPAddress:(NSString *)arg1 port:(unsigned int)arg2 successBlock:(void (^)(DTFocusDeviceInfoModel *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)activeLocalProjectorWithIPAddress:(NSString *)arg1 port:(unsigned int)arg2 bindDeviceModel:(DTBleActiveReqModel *)arg3 successBlock:(void (^)(_Bool))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)fetchProjectorActiveInfoWithIPAddress:(NSString *)arg1 port:(unsigned int)arg2 successBlock:(void (^)(DTBleDeviceActiveModel *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)reportLocalProjectStatusWithSessionID:(NSString *)arg1 status:(NSNumber *)arg2 userIP:(NSString *)arg3 deviceIP:(NSString *)arg4;
- (void)checkOrgnizationsHaveProjectorsWithDeviceServiceID:(NSNumber *)arg1 successBlock:(void (^)(NSNumber *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)checkRemoteDeviceStatusWithSessionID:(NSString *)arg1 localDeviceUID:(NSNumber *)arg2 successBlock:(void (^)(DTBizMeetingUsersStatusModel *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)terminateConnectionWithCreatorId:(NSNumber *)arg1 sessionId:(NSString *)arg2 callerId:(NSNumber *)arg3 calleeIds:(NSArray *)arg4 successBlock:(void (^)(DTBizShareTerminateResultModel *))arg5 failureBlock:(void (^)(NSError *))arg6;
- (void)remoteConnectDeviceWithCreatorId:(NSNumber *)arg1 sessionId:(NSString *)arg2 callerId:(NSNumber *)arg3 calleeIds:(NSArray *)arg4 successBlock:(void (^)(DTBizShareCreateResultModel *))arg5 failureBlock:(void (^)(NSError *))arg6;
- (void)localConnectDeviceWithCreatorId:(NSNumber *)arg1 deviceUID:(NSNumber *)arg2 disconRemoteShare:(NSNumber *)arg3 successBlock:(void (^)(DTBizShareCreateResultModel *))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)listDevicesWithOrganizationIds:(NSArray *)arg1 deviceType:(NSString *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getDeviceInfo:(NSNumber *)arg1 deviceId:(NSNumber *)arg2 successBlock:(void (^)(DTSmartDeviceModel *))arg3 failureBlock:(void (^)(NSError *))arg4;
@end

