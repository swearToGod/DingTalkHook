//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTMessageModelList : Marshal
{
    _Bool _hasMore;
    NSArray *_msgList;
    NSArray *_groupMsgModelList;
    NSNumber *_totalMsgCount;
    NSString *_nextCursor;
    NSString *_logMap;
}

@property(copy, nonatomic) NSString *logMap; // @synthesize logMap=_logMap;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) NSString *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(retain, nonatomic) NSNumber *totalMsgCount; // @synthesize totalMsgCount=_totalMsgCount;
@property(copy, nonatomic) NSArray *groupMsgModelList; // @synthesize groupMsgModelList=_groupMsgModelList;
@property(copy, nonatomic) NSArray *msgList; // @synthesize msgList=_msgList;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

