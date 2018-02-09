//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface DTCSpaceService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)addDentryByBatch:(id)arg1 callback:(id)arg2;
- (void)incrReadCount:(id)arg1 fileId:(id)arg2 callback:(id)arg3;
- (void)finishIndustryGuide:(id)arg1;
- (void)infoMediaInfo:(id)arg1 callback:(id)arg2;
- (void)homeWorkAuthAdd:(id)arg1 callback:(id)arg2;
- (void)infoHomeWork:(id)arg1 callback:(id)arg2;
- (void)createHomeWork:(id)arg1 callback:(id)arg2;
- (void)play:(id)arg1 callback:(id)arg2;
- (void)infoDentryForKnowledge:(id)arg1 callback:(id)arg2;
- (void)sendCSpaceMessage:(id)arg1 dentryId:(id)arg2 cid:(id)arg3 callback:(id)arg4;
- (void)getIndustryOperationUrl:(id)arg1 callback:(id)arg2;
- (void)getDownloadUrl:(id)arg1 dentryId:(id)arg2 callback:(id)arg3;
- (void)listSyncSpace:(id)arg1;
- (void)incrementSync:(id)arg1 callback:(id)arg2;
- (void)fullSync:(id)arg1 callback:(id)arg2;
- (void)getOrgGroupSyncStatus:(id)arg1 callback:(id)arg2;
- (void)setOrgGroupSyncStatus:(id)arg1 status:(id)arg2 callback:(id)arg3;
- (void)listShareDentry:(id)arg1 callback:(id)arg2;
- (void)getShareDownloadUrl:(id)arg1 callback:(id)arg2;
- (void)convertShareToDentry:(id)arg1 password:(id)arg2 callback:(id)arg3;
- (void)deleteShare:(id)arg1 callback:(id)arg2;
- (void)listShare:(id)arg1 callback:(id)arg2;
- (void)saveShare:(id)arg1 callback:(id)arg2;
- (void)infoShare:(id)arg1 callback:(id)arg2;
- (void)createShare:(id)arg1 callback:(id)arg2;
- (void)getDingSpace:(id)arg1 callback:(id)arg2;
- (void)listRecentFile:(id)arg1;
- (void)getConversationSpace:(id)arg1 type:(id)arg2 callback:(id)arg3;
- (void)listUidsByFileIdAndAccessType:(id)arg1 spaceId:(id)arg2 accessType:(id)arg3 callback:(id)arg4;
- (void)getToken:(id)arg1;
- (void)updateSpaceExtensionById:(id)arg1 extension:(id)arg2 callback:(id)arg3;
- (void)listIndustryOperationRelationByUid:(id)arg1;
- (void)getTempSpace:(id)arg1;
- (void)infoDeletedDentry:(id)arg1 callback:(id)arg2;
- (void)packageInfo:(id)arg1 callback:(id)arg2;
- (void)uploadAuth:(id)arg1 aclContent:(id)arg2 callback:(id)arg3;
- (void)downloadAuth:(id)arg1 callback:(id)arg2;
- (void)preview:(id)arg1 callback:(id)arg2;
- (void)searchByTypes:(id)arg1 callback:(id)arg2;
- (void)search:(id)arg1 callback:(id)arg2;
- (void)infoDentry:(id)arg1 callback:(id)arg2;
- (void)transferDentry:(id)arg1 callback:(id)arg2;
- (void)deleteDentry:(id)arg1 callback:(id)arg2;
- (void)renameDentry:(id)arg1 callback:(id)arg2;
- (void)updateDentry:(id)arg1 callback:(id)arg2;
- (void)addDentry:(id)arg1 callback:(id)arg2;
- (void)listSpace:(id)arg1 callback:(id)arg2;
- (void)listFiles:(id)arg1 callback:(id)arg2;
- (void)listDentry:(id)arg1 callback:(id)arg2;

@end

