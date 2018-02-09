//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DTConversationGroupListCache : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableDictionary *_cacheTable;
    _Bool _isLoading;
    long long _maxAllowedRetryTimes;
    _Bool _shouldSaveDataUpgradeFlagOnce;
    CDUnknownBlockType _cacheDidChangeBlock;
}

+ (id)defaultGroupList;
+ (id)defaultGroupRuleList;
@property(copy, nonatomic) CDUnknownBlockType cacheDidChangeBlock; // @synthesize cacheDidChangeBlock=_cacheDidChangeBlock;
- (void).cxx_destruct;
- (void)notifyGroupDataDidChangeNotification;
- (void)didChangeConverstionGroup:(id)arg1;
- (id)mergeCachedGroups:(id)arg1 defaultGroups:(id)arg2;
- (void)retryReloadRemoteGroupData;
- (id)groupDataUpgradeCacheKey;
- (void)applyFetchRemoteGroupsIfNeeds;
- (id)appendLocalDefaultGroups:(id)arg1 toGroups:(id)arg2;
- (id)removeUnsupportedSystemGroupInList:(id)arg1;
- (id)cachedGroupRuleList;
- (id)cachedGroupList;
- (void)updateGroupWithSortingTable:(id)arg1;
- (void)updateConversationGroup:(id)arg1;
- (void)removeConversationGroup:(long long)arg1;
- (void)addConversationGroup:(id)arg1;
- (void)updateGroupList:(id)arg1;
- (void)fetchRemoteGroupList;
- (void)fetchLocalGroupList:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchLocalGroupList;
- (void)dealloc;
- (id)init;

@end

