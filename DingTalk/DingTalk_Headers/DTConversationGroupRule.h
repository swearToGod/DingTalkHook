//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, WKBizConversationGroup;

@interface DTConversationGroupRule : NSObject
{
    NSMutableArray *_rowItems;
    _Bool _isFakeRule;
    _Bool _isEnabled;
    WKBizConversationGroup *_group;
    long long _priority;
    CDUnknownBlockType _matchingBlock;
}

+ (id)displayNameWithTimeStep:(long long)arg1;
+ (double)timeIntervalWithTimeStep:(long long)arg1;
+ (long long)currentTimeStep;
+ (long long)defaultTimeStep;
+ (double)timeIntervalWithStep:(long long)arg1;
+ (CDUnknownBlockType)notDisturbMatchingBlock;
+ (CDUnknownBlockType)customMatchingBlock;
+ (CDUnknownBlockType)functionMatchingBlock;
+ (CDUnknownBlockType)workMatchingBlock;
+ (CDUnknownBlockType)mtmMatchingBlock;
+ (CDUnknownBlockType)otoMatchingBlock;
+ (CDUnknownBlockType)topMatchingBlock;
+ (id)fakeGroupRule;
+ (id)ruleWithGroup:(id)arg1;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
@property(nonatomic) _Bool isFakeRule; // @synthesize isFakeRule=_isFakeRule;
@property(copy, nonatomic) CDUnknownBlockType matchingBlock; // @synthesize matchingBlock=_matchingBlock;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(retain, nonatomic) WKBizConversationGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (id)filterByRowItems:(id)arg1;
- (_Bool)canAddToGroupWithRowItem:(id)arg1;
@property(readonly, nonatomic) NSArray *rowItems;
- (void)removeRowItemAtIndex:(unsigned long long)arg1;
- (void)appendRowItem:(id)arg1;
- (void)insertRowItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)resetRowItems;
- (id)init;

@end

