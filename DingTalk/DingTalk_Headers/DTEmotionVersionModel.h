//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTEmotionVersionModel : Marshal
{
    NSNumber *_likeEmotionVer;
    NSArray *_emotionTopicVer;
    NSNumber *_mainOrgId;
    NSNumber *_hotSearchWordsVer;
    NSNumber *_iconRedPointVer;
}

@property(retain, nonatomic) NSNumber *iconRedPointVer; // @synthesize iconRedPointVer=_iconRedPointVer;
@property(retain, nonatomic) NSNumber *hotSearchWordsVer; // @synthesize hotSearchWordsVer=_hotSearchWordsVer;
@property(retain, nonatomic) NSNumber *mainOrgId; // @synthesize mainOrgId=_mainOrgId;
@property(copy, nonatomic) NSArray *emotionTopicVer; // @synthesize emotionTopicVer=_emotionTopicVer;
@property(retain, nonatomic) NSNumber *likeEmotionVer; // @synthesize likeEmotionVer=_likeEmotionVer;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

