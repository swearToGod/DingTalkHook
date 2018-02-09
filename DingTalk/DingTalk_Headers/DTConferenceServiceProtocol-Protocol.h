//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizConfHistoryExtensionModel, DTConfVoipCreateModel, DTConfVoipInfoExtensionModel, DTConference, DTConferenceADModel, DTConferenceBizCallInfo, DTConferenceCallKitRecordModel, DTConferenceCallManageADModel, DTConferenceCallManageLocalValue, DTConferenceCallManageRedModel, DTConferenceCallNumInfoModel, DTConferenceMember, DTConferenceShowPageModel, DTReferralUserDBModel, DTSaveContactModel, DTSmsModel, NSArray, NSDate, NSNumber, NSString;
@protocol DTConferenceServiceNetworkProtocol, DTConferenceServicePersistenceProtocol;

@protocol DTConferenceServiceProtocol <NSObject>
@property(nonatomic) _Bool canSystemCall;
@property(copy, nonatomic) CDUnknownBlockType conferenceEventHandler;
@property(retain, nonatomic) NSDate *lastConferenceEndTime;
@property(retain, nonatomic) DTConference *currentConference;
@property(retain, nonatomic) id <DTConferenceServiceNetworkProtocol> networkIMP;
@property(retain, nonatomic) id <DTConferenceServicePersistenceProtocol> persistenceIMP;
- (void)handleLoadRecommendUsers:(void (^)(NSArray *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (_Bool)saveHistoryConferenceRecommendUsers:(DTReferralUserDBModel *)arg1;
- (DTReferralUserDBModel *)loadHistoryConferenceRecommendUsers;
- (NSArray *)loadContactModelsByMobiles:(NSArray *)arg1;
- (DTSaveContactModel *)loadContactModelByMobile:(NSString *)arg1;
- (_Bool)saveContactModel:(DTSaveContactModel *)arg1;
- (DTConferenceCallManageADModel *)loadConfCallManageADInfoModelByKey:(NSString *)arg1;
- (_Bool)saveConfCallManageADInfo:(DTConferenceCallManageADModel *)arg1;
- (DTConferenceCallManageRedModel *)loadConfCallManageRedInfoModelByKey:(NSString *)arg1;
- (_Bool)saveConfCallManageRedInfo:(DTConferenceCallManageRedModel *)arg1;
- (DTConferenceCallManageLocalValue *)loadConfCallManageInfoModelByOrgId:(long long)arg1;
- (_Bool)saveConfCallManageInfo:(DTConferenceCallManageLocalValue *)arg1;
- (DTConferenceCallKitRecordModel *)loadConfCallKitInfoModelBySessionId:(NSString *)arg1;
- (_Bool)updateConfCallKitInfo:(DTConferenceCallKitRecordModel *)arg1;
- (_Bool)saveConfCallKitInfo:(DTConferenceCallKitRecordModel *)arg1;
- (_Bool)deleteAllBizCallInfo;
- (_Bool)deleteBizCallInfoWithOrgId:(long long)arg1;
- (NSArray *)loadAllBizCallNumInfoModel;
- (DTConferenceBizCallInfo *)loadBizCallNumInfoModelWithOrgId:(long long)arg1;
- (_Bool)saveBizCallNumInfo:(NSArray *)arg1;
- (_Bool)deleteCallNumInfo;
- (void)asyncLoadConfCallNumInfoModelBlock:(void (^)(DTConferenceCallNumInfoModel *))arg1;
- (DTConferenceCallNumInfoModel *)loadConfCallNumInfoModel;
- (_Bool)updateConfCallNumInfo:(DTConferenceCallNumInfoModel *)arg1;
- (_Bool)saveConfCallNumInfo:(DTConferenceCallNumInfoModel *)arg1;
- (void)deleteUserMobilesWithUids:(NSArray *)arg1;
- (void)saveUserMobiles:(NSArray *)arg1;
- (NSArray *)userMobilesForUids:(NSArray *)arg1;
- (_Bool)deleteShowPage;
- (void)asyncLoadConfPageModelBlock:(void (^)(DTConferenceShowPageModel *))arg1;
- (DTConferenceShowPageModel *)loadConfPageModel;
- (_Bool)updateConfPage:(DTConferenceShowPageModel *)arg1;
- (_Bool)saveConfPage:(DTConferenceShowPageModel *)arg1;
- (_Bool)deleteADInfo;
- (void)asyncLoadConfADBlock:(void (^)(DTConferenceADModel *))arg1;
- (DTConferenceADModel *)loadConfAD;
- (_Bool)updateConfAD:(DTConferenceADModel *)arg1;
- (_Bool)saveConfAD:(DTConferenceADModel *)arg1;
- (void)asyncLoadConfHistoryByUUID:(NSString *)arg1 doneBlock:(void (^)(DTBizConfHistoryExtensionModel *))arg2;
- (DTBizConfHistoryExtensionModel *)loadConfHistoryByUUID:(NSString *)arg1;
- (_Bool)updateConfHistory:(DTBizConfHistoryExtensionModel *)arg1;
- (_Bool)saveConfHistory:(DTBizConfHistoryExtensionModel *)arg1;
- (void)pullVoIPConferenceMembersWithInfoModel:(DTConfVoipInfoExtensionModel *)arg1 successBlock:(void (^)(DTConfPullListModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)unMuteAllVoIPConferenceWithInfoModel:(DTConfVoipInfoExtensionModel *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)muteAllVoIPConferenceWithInfoModel:(DTConfVoipInfoExtensionModel *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)unMuteVoIPConferenceMember:(NSNumber *)arg1 infoModel:(DTConfVoipInfoExtensionModel *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)muteVoIPConferenceMember:(NSNumber *)arg1 infoModel:(DTConfVoipInfoExtensionModel *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)kickOutVoIPConferenceMember:(NSNumber *)arg1 infoModel:(DTConfVoipInfoExtensionModel *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)addVoIPConferenceMember:(NSNumber *)arg1 infoModel:(DTConfVoipInfoExtensionModel *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)createVoipConference:(DTConfVoipCreateModel *)arg1 sucessBlock:(void (^)(DTConfVoipCreateResult *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)getRecommendUserList:(void (^)(NSArray *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)getGraySwitchInfoWithOrgId:(NSNumber *)arg1 businessList:(NSArray *)arg2 successBlock:(void (^)(NSArray *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getContactRelations:(NSArray *)arg1 successBlock:(void (^)(NSArray *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)setUserBizCallOrg:(NSNumber *)arg1 type:(long long)arg2 successBlock:(void (^)(long long))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getCallManageInfoWithOrgId:(NSNumber *)arg1 successBlock:(void (^)(DTCallManageModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)getQuotaByOrgId:(NSNumber *)arg1 SuccessBlock:(void (^)(DTConfQuotaInfoModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)getUserInfoCardInfoByUid:(NSNumber *)arg1 SuccessBlock:(void (^)(DTUserInfoCard *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)unbindWorkMobile:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)getDirectCallPhoneNumber:(NSNumber *)arg1 SuccessBlock:(void (^)(DTConferenceUserMobile *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)putSysCallRecord:(NSNumber *)arg1 calleeUid:(NSNumber *)arg2 beginTime:(NSNumber *)arg3 duration:(NSNumber *)arg4 calleeMobile:(NSString *)arg5 SuccessBlock:(void (^)(void))arg6 failureBlock:(void (^)(NSError *))arg7;
- (void)getAllBizCallNumSuccessBlock:(void (^)(DTBizCallNumModel *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)getPreferBizCallNumSuccessBlock:(void (^)(DTConferenceCallNumInfoModel *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)createBizCallRechargeToken:(NSString *)arg1 successBlock:(void (^)(NSString *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)cancelBizCall:(NSString *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)createBizCall:(NSNumber *)arg1 voIPToPSTN:(_Bool)arg2 bizCallNum:(NSString *)arg3 orgId:(NSNumber *)arg4 toPhone:(NSString *)arg5 agentId:(NSString *)arg6 successBlock:(void (^)(DTBizCallResultModel *))arg7 failureBlock:(void (^)(NSError *))arg8;
- (void)getSupportedCallType:(NSArray *)arg1 preferType:(NSNumber *)arg2 cid:(NSString *)arg3 successBlock:(void (^)(DTCallTypeRspModel *))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)queryCallQuotaInfoSuccessBlock:(void (^)(DTDetailQuotaModel *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)getConfFeedbackInfoSuccessBlock:(void (^)(NSNumber *))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)putConfFeedbackInfo:(long long)arg1 sessionId:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getShowPage:(NSNumber *)arg1 successBlock:(void (^)(DTConferenceShowPageModel *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)getConferenceCallAD:(NSNumber *)arg1 adID:(NSNumber *)arg2 successBlock:(void (^)(DTConferenceADModel *))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)putSingleCallScore:(NSString *)arg1 score:(NSNumber *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)getConferenceConfigs:(NSArray *)arg1 successBlock:(void (^)(NSDictionary *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)sendUpdateSMS:(DTSmsModel *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)sendInviteSMS:(NSNumber *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)createConvByCallRecord:(NSArray *)arg1 successBlock:(void (^)(NSString *))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)cancelCall:(NSString *)arg1 callerNumber:(NSString *)arg2 successBlock:(void (^)(void))arg3 failureBlock:(void (^)(NSError *))arg4;
- (void)createCall:(NSNumber *)arg1 cid:(NSString *)arg2 voIPToPSTN:(_Bool)arg3 successBlock:(void (^)(NSString *, NSString *))arg4 failureBlock:(void (^)(NSError *))arg5;
- (void)onReveicePush:(id)arg1 type:(long long)arg2;
- (void)pullConferenceStatus;
- (void)pullMembers:(void (^)(DTConference *))arg1;
- (void)pullConference:(void (^)(DTConference *))arg1;
- (void)unMuteAllSuccessBlock:(void (^)(void))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)muteAllSuccessBlock:(void (^)(void))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)unMuteMember:(NSNumber *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)muteMember:(NSNumber *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)kickOutMember:(DTConferenceMember *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)reconnectSuccessBlock:(void (^)(void))arg1 failureBlock:(void (^)(NSError *))arg2;
- (void)addMember:(DTConferenceMember *)arg1 successBlock:(void (^)(void))arg2 failureBlock:(void (^)(NSError *))arg3;
- (void)removeMember:(NSNumber *)arg1;
- (void)leaveConference;
- (void)enterConference:(DTConference *)arg1;
- (void)onConference:(DTConference *)arg1;
- (void)terminateConferencePanel;
- (void)terminateServerConference;
- (void)terminateConference;
- (void)initConferenceWithModel:(DTConference *)arg1;
- (void)createConference:(DTConference *)arg1;
@end

