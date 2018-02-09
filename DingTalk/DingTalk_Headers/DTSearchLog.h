//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTSearchClickLog, DTSearchQueryLog, NSOperationQueue, NSString;

@interface DTSearchLog : NSObject
{
    unsigned long long _entranceType;
    NSString *_searchText;
    NSString *_uuid;
    DTSearchQueryLog *_queryLog;
    DTSearchClickLog *_clickLog;
    NSOperationQueue *_searchLogQueue;
}

+ (id)searchLogWithSearchEntranceType:(unsigned long long)arg1 searchText:(id)arg2;
@property(retain, nonatomic) NSOperationQueue *searchLogQueue; // @synthesize searchLogQueue=_searchLogQueue;
@property(retain, nonatomic) DTSearchClickLog *clickLog; // @synthesize clickLog=_clickLog;
@property(retain, nonatomic) DTSearchQueryLog *queryLog; // @synthesize queryLog=_queryLog;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
- (void).cxx_destruct;
- (void)clean;
- (void)innerCommit;
- (void)commit;
- (void)searchClickLogWithSearchResultActionType:(unsigned long long)arg1 searchDataType:(unsigned long long)arg2 position:(long long)arg3 identifier:(id)arg4 autoCommit:(_Bool)arg5;
- (void)endSearchQueryLogFailureWithSearchDataType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 errorCode:(long long)arg3 reason:(id)arg4 autoCommit:(_Bool)arg5;
- (void)endSearchQueryLogSuccessWithSearchDataType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2 count:(unsigned long long)arg3 bucket:(id)arg4 autoCommit:(_Bool)arg5;
- (void)beginSearchQueryLogWithSearchDataType:(unsigned long long)arg1 sourceType:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

