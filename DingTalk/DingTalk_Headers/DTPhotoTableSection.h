//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface DTPhotoTableSection : NSObject
{
    NSString *_timeStr;
    NSMutableArray *_items;
    long long _sortIndex;
}

@property(nonatomic) long long sortIndex; // @synthesize sortIndex=_sortIndex;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *timeStr; // @synthesize timeStr=_timeStr;
- (void).cxx_destruct;

@end

