//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface DTFTSResult : NSObject
{
    _Bool _hasMore;
    NSArray *_objects;
    unsigned long long _totalCount;
}

@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) unsigned long long totalCount; // @synthesize totalCount=_totalCount;
@property(copy, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;

@end

