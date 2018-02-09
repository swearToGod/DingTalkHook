//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTCSyncerProtocol-Protocol.h"

@class NSString;

@interface BLAPISyncerV2 : NSObject <DTCSyncerProtocol>
{
}

+ (id)sharedSyncer;
- (id)actualbizType:(id)arg1;
- (void)sendLocalChanges:(id)arg1 inSpace:(id)arg2 forAccount:(id)arg3 fromSender:(id)arg4 successBlock:(CDUnknownBlockType)arg5 progressBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
- (id)refreshItemsForFolders:(id)arg1 handleModuleType:(long long)arg2 filterType:(int)arg3 forAccount:(id)arg4 windowSize:(int)arg5 fromSender:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (id)syncWithParent:(id)arg1 dataScope:(unsigned long long)arg2 scopeId:(id)arg3 syncKeyType:(long long)arg4 loadMore:(_Bool)arg5 account:(id)arg6 handler:(id)arg7 successBlock:(CDUnknownBlockType)arg8 continueJudgeBlock:(CDUnknownBlockType)arg9 failureBlock:(CDUnknownBlockType)arg10;
- (id)queryWithParent:(id)arg1 dataScope:(unsigned long long)arg2 scopeId:(id)arg3 windowOffset:(long long)arg4 account:(id)arg5 resultClass:(Class)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
- (void)syncAllFoldersForSpace:(id)arg1 account:(id)arg2 fromSender:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)initializeBizSpace:(id)arg1 account:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

