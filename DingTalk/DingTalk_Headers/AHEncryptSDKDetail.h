//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface AHEncryptSDKDetail : NSObject
{
    NSMutableDictionary *_detailRandKeyDic;
    NSMutableDictionary *_detailCorpDic;
    NSString *_filePath;
}

+ (id)manager;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSMutableDictionary *detailCorpDic; // @synthesize detailCorpDic=_detailCorpDic;
@property(retain, nonatomic) NSMutableDictionary *detailRandKeyDic; // @synthesize detailRandKeyDic=_detailRandKeyDic;
- (void).cxx_destruct;
- (id)loadKeyDic;
- (void)addCorpDicWithKey:(id)arg1 value:(id)arg2;
- (void)removeCorpDicWithKey:(id)arg1;
- (void)addRandKeyDicWithKey:(id)arg1 value:(id)arg2;
- (void)removeRandKeyDicWithKey:(id)arg1;
- (void)loadKeyFilePath:(id)arg1;
- (id)init;

@end

