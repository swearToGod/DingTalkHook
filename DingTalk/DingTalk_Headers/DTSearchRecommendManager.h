//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WKSyncRegisterProtocol-Protocol.h"

@class NSString, OpenMDHandler, YYThreadSafeArray, YYThreadSafeDictionary;
@protocol WKSyncNoticeHandlerProtocol;

@interface DTSearchRecommendManager : NSObject <WKSyncRegisterProtocol>
{
    _Bool _syncaEnable;
    OpenMDHandler *_userHandler;
    OpenMDHandler *_groupHandler;
    long long _syncProtocolType;
    double _delayTime;
    YYThreadSafeDictionary *_firstDataCache;
    YYThreadSafeArray *_firstDataArray;
}

@property(retain) YYThreadSafeArray *firstDataArray; // @synthesize firstDataArray=_firstDataArray;
@property(retain) YYThreadSafeDictionary *firstDataCache; // @synthesize firstDataCache=_firstDataCache;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) long long syncProtocolType; // @synthesize syncProtocolType=_syncProtocolType;
@property(retain, nonatomic) OpenMDHandler *groupHandler; // @synthesize groupHandler=_groupHandler;
@property(retain, nonatomic) OpenMDHandler *userHandler; // @synthesize userHandler=_userHandler;
@property(nonatomic) _Bool syncaEnable; // @synthesize syncaEnable=_syncaEnable;
- (void).cxx_destruct;
- (id)firstDataCacheFile;
- (void)loadCacheFromFile;
- (void)firstDataWithKeyword:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)saveDataIntoArray:(id)arg1 searchKey:(id)arg2 alreadyHasCache:(_Bool)arg3;
- (void)saveCacheData:(id)arg1 searchKey:(id)arg2;
- (void)setResult:(id)arg1 forKey:(id)arg2;
- (id)groupOpenModelsFromIDLModels:(id)arg1;
- (id)usersOpenModelsFromIDLModels:(id)arg1;
- (id)sortGroupData:(id)arg1 minusScore:(double)arg2;
- (id)sortUserData:(id)arg1;
- (void)setSearchRecommendGroupsUpdateFinish:(_Bool)arg1;
- (_Bool)isSearchRecommendGroupsUpdateFinish;
- (void)setSearchRecommendUsersUpdateFinish:(_Bool)arg1;
- (_Bool)isSearchRecommendUsersUpdateFinish;
- (void)setSearchRecommendSyncA:(_Bool)arg1;
- (_Bool)isSearchRecommendSyncA;
- (void)saveGroupDataUpdateTime:(long long)arg1;
- (void)saveUserDataUpdateTime:(long long)arg1;
- (void)saveLastUpdateTime:(long long)arg1;
- (long long)groupDataUpdateTime;
- (long long)userDataUpdateTime;
- (long long)lastUpdateTime;
- (long long)currentTime;
- (double)timeDecayBaseTime:(long long)arg1 decayTime:(long long)arg2 weak:(double)arg3;
- (double)groupDecay:(long long)arg1;
- (double)userDecay:(long long)arg1;
- (_Bool)isFirstDataGrayOpen;
- (void)asynSaveRecommendGroup:(id)arg1 keyword:(id)arg2;
- (void)asynSaveRecommendGroup:(id)arg1;
- (void)asynSaveRecommendUser:(id)arg1 keyword:(id)arg2;
- (void)asynSaveRecommendUser:(id)arg1;
- (id)sortedGroupsWithCids:(id)arg1;
- (id)sortedUsersWithUids:(id)arg1;
- (void)saveRecommendGroup:(id)arg1 refreshMode:(_Bool)arg2;
- (void)saveRecommendGroups:(id)arg1 refreshMode:(_Bool)arg2;
- (void)addGroupData:(id)arg1 updateTime:(long long)arg2 isRefresh:(_Bool)arg3;
- (void)removeGroupData:(id)arg1;
- (id)findAllRecommendUser;
- (void)saveRecommendUser:(id)arg1 refreshMode:(_Bool)arg2;
- (void)saveRecommendUsers:(id)arg1 refreshMode:(_Bool)arg2;
- (void)addUserData:(id)arg1 updateTime:(long long)arg2 isRefresh:(_Bool)arg3;
- (void)removeUserData:(id)arg1;
- (void)getBizDataWithTypes:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)receiveDatas:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (id)modelClasses;
- (id)types;
- (void)refreshGroupWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)refreshUserWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)refreshAllDataIfNeeded;
- (_Bool)needUpdateRecommendGroups;
- (_Bool)needUpdateRecommendUsers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <WKSyncNoticeHandlerProtocol> noticeHandler;
@property(readonly) Class superclass;

@end

