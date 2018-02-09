//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSIndexSet, NSMutableArray;

@interface DTIMAPMsgAttHanlderData : NSObject
{
    _Bool _fetchByUID;
    _Bool _needsHeader;
    _Bool _needsBody;
    _Bool _needsFlags;
    int _requestKind;
    unsigned int _mLastFetchedSequenceNumber;
    NSIndexSet *_uidsFilter;
    NSIndexSet *_numbersFilter;
    NSMutableArray *_result;
    NSDictionary *_mapping;
}

@property(nonatomic) _Bool needsFlags; // @synthesize needsFlags=_needsFlags;
@property(nonatomic) _Bool needsBody; // @synthesize needsBody=_needsBody;
@property(nonatomic) _Bool needsHeader; // @synthesize needsHeader=_needsHeader;
@property(retain, nonatomic) NSDictionary *mapping; // @synthesize mapping=_mapping;
@property(nonatomic) unsigned int mLastFetchedSequenceNumber; // @synthesize mLastFetchedSequenceNumber=_mLastFetchedSequenceNumber;
@property(nonatomic) int requestKind; // @synthesize requestKind=_requestKind;
@property(retain, nonatomic) NSMutableArray *result; // @synthesize result=_result;
@property(nonatomic) _Bool fetchByUID; // @synthesize fetchByUID=_fetchByUID;
@property(retain, nonatomic) NSIndexSet *numbersFilter; // @synthesize numbersFilter=_numbersFilter;
@property(retain, nonatomic) NSIndexSet *uidsFilter; // @synthesize uidsFilter=_uidsFilter;
- (void).cxx_destruct;

@end
