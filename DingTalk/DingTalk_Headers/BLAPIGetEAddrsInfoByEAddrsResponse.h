//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLAPIBaseResponse.h"

@class NSMutableArray;

@interface BLAPIGetEAddrsInfoByEAddrsResponse : BLAPIBaseResponse
{
    int _failedNum;
    int _successNum;
    NSMutableArray *_failedContainer;
    NSMutableArray *_successContainer;
}

@property(nonatomic) int successNum; // @synthesize successNum=_successNum;
@property(nonatomic) int failedNum; // @synthesize failedNum=_failedNum;
@property(retain, nonatomic) NSMutableArray *successContainer; // @synthesize successContainer=_successContainer;
@property(retain, nonatomic) NSMutableArray *failedContainer; // @synthesize failedContainer=_failedContainer;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

