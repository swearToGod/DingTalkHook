//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface DTFTSHandler : NSObject
{
    NSArray *_configurations;
    NSDictionary *_queryTypeToTableDict;
}

+ (id)ftsTableWithQueryType:(unsigned long long)arg1;
+ (id)ftsNameWithBizName:(id)arg1;
+ (id)shareHandler;
@property(copy, nonatomic) NSDictionary *queryTypeToTableDict; // @synthesize queryTypeToTableDict=_queryTypeToTableDict;
@property(copy, nonatomic) NSArray *configurations; // @synthesize configurations=_configurations;
- (void).cxx_destruct;
- (void)asyncFullSyncAllBiz;
- (void)loginFinished;
- (void)handleReadWriteConnectionDidOpen:(id)arg1;
- (_Bool)enableFTSSearch;
- (id)getAllQueryTypeToTableDictWithConfigurations:(id)arg1;
- (void)dealloc;
- (id)init;

@end

