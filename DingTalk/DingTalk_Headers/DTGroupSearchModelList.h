//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTGroupSearchModelList : Marshal
{
    NSArray *_conversationList;
    NSNumber *_totalCount;
    NSNumber *_nextCursor;
    NSString *_logMap;
}

@property(copy, nonatomic) NSString *logMap; // @synthesize logMap=_logMap;
@property(retain, nonatomic) NSNumber *nextCursor; // @synthesize nextCursor=_nextCursor;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSArray *conversationList; // @synthesize conversationList=_conversationList;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

