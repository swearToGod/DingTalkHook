//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface DTSearchEngineResult : NSObject
{
    _Bool _hasMore;
    NSArray *_items;
    long long _foundCount;
    long long _returnCount;
    NSArray *_mergedObjects;
}

@property(retain, nonatomic) NSArray *mergedObjects; // @synthesize mergedObjects=_mergedObjects;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) long long returnCount; // @synthesize returnCount=_returnCount;
@property(nonatomic) long long foundCount; // @synthesize foundCount=_foundCount;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;

@end

