//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface DTDINGIndexManager : NSObject
{
    NSDictionary *_indexDict;
}

+ (id)shareInstance;
@property(copy) NSDictionary *indexDict; // @synthesize indexDict=_indexDict;
- (void).cxx_destruct;
- (void)getAllOrgScoreDataWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)asyncFetchDINGIndexWithOrgId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dt_parseJson:(id)arg1;
- (id)dingIndexWithOrgId:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

