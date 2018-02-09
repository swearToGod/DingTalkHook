//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LWFetchedResultsControllerDelegate-Protocol.h"

@class DTBizDingModel, LWFetchedResultsController, NSArray, NSString;

@interface DTDingListDataController : NSObject <LWFetchedResultsControllerDelegate>
{
    NSArray *_sectionInfoArray;
    long long _currentType;
    CDUnknownBlockType _willChangeContentCallback;
    CDUnknownBlockType _didChangeContentCallback;
    CDUnknownBlockType _didDBRollbackCallback;
    CDUnknownBlockType _didChangeObjectCallback;
    LWFetchedResultsController *_fetchController;
    unsigned long long _fetchRequestIdentifier;
    DTBizDingModel *_lastObject;
}

+ (id)sqlStatementWithType:(long long)arg1;
+ (_Bool)isMeetingsWithSqlStatementType:(long long)arg1;
+ (_Bool)isTasksWithSqlStatementType:(long long)arg1;
+ (long long)cursorBizTypeFromStatementType:(long long)arg1;
+ (id)localizedStringForEmptyResultViewWithStatementType:(long long)arg1;
+ (id)localizedStringForStatementType:(long long)arg1;
+ (void)saveSelectedStatementType:(long long)arg1;
+ (long long)getSelectedTypeInStatementTypes:(id)arg1;
+ (id)statementTypesInListType:(long long)arg1;
+ (long long)listTypeFromStatementType:(long long)arg1;
+ (_Bool)isGroupedMeetingWithStatementType:(long long)arg1;
+ (_Bool)isGroupedTaskWithStatementType:(long long)arg1;
+ (_Bool)isGroupedDataWithStatementType:(long long)arg1;
+ (id)sectionInfoArrayWithTaskModels:(id)arg1 forStatementType:(long long)arg2;
+ (id)emptySectionInfoArray;
@property(retain, nonatomic) DTBizDingModel *lastObject; // @synthesize lastObject=_lastObject;
@property(nonatomic) unsigned long long fetchRequestIdentifier; // @synthesize fetchRequestIdentifier=_fetchRequestIdentifier;
@property(retain, nonatomic) LWFetchedResultsController *fetchController; // @synthesize fetchController=_fetchController;
@property(copy, nonatomic) CDUnknownBlockType didChangeObjectCallback; // @synthesize didChangeObjectCallback=_didChangeObjectCallback;
@property(copy, nonatomic) CDUnknownBlockType didDBRollbackCallback; // @synthesize didDBRollbackCallback=_didDBRollbackCallback;
@property(copy, nonatomic) CDUnknownBlockType didChangeContentCallback; // @synthesize didChangeContentCallback=_didChangeContentCallback;
@property(copy, nonatomic) CDUnknownBlockType willChangeContentCallback; // @synthesize willChangeContentCallback=_willChangeContentCallback;
@property(readonly, nonatomic) long long currentType; // @synthesize currentType=_currentType;
@property(readonly, copy, nonatomic) NSArray *sectionInfoArray; // @synthesize sectionInfoArray=_sectionInfoArray;
- (void).cxx_destruct;
- (_Bool)isNextTargetCellWithDing:(id)arg1;
- (id)nextTargetIndexPathWithStartIndex:(long long)arg1;
- (id)objectsInSectionInfoArray;
- (_Bool)isGroupedData;
- (id)conversationIdWithDingModel:(id)arg1;
- (id)indexPathForDingModel:(id)arg1;
- (void)notifyDingModelDidChange:(id)arg1;
- (void)fetchDingSourceIfNeededWithDingModel:(id)arg1;
- (void)fetchDingSourceIfNeeded;
- (void)controllerDidRollback:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndex:(unsigned long long)arg3 forChangeType:(long long)arg4 newIndex:(unsigned long long)arg5;
- (void)controllerWillChangeContent:(id)arg1;
- (void)setSectionInfoArray:(id)arg1;
- (id)fetchRequestWithType:(long long)arg1;
- (id)fetchControllerWithType:(long long)arg1;
- (void)cleanupAllObjectsCalculatedFrame;
- (void)cleanupAllChangeObjectCallback;
- (void)cleanup;
- (_Bool)fetchObjectsFromDatabaseWithForward:(_Bool)arg1 fetchLimit:(long long)arg2;
- (void)fetchObjectsWithCursor:(long long)arg1 forward:(_Bool)arg2 pageSize:(long long)arg3 ignoringLocalCacheData:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadMoreObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)pullToRefreshObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)performFetch;
- (long long)expiredTaskCountForCurrentType;
- (_Bool)isEmpty;
- (id)objectAtIndexPath:(id)arg1;
- (id)initWithType:(long long)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

