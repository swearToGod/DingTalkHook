//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface DTTableViewDataSource : NSObject
{
    NSArray *_tableViewDataSource;
    NSArray *_tableViewIndexDataSource;
}

@property(copy, nonatomic) NSArray *tableViewIndexDataSource; // @synthesize tableViewIndexDataSource=_tableViewIndexDataSource;
@property(copy, nonatomic) NSArray *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
- (void).cxx_destruct;
- (id)indexTitleAtIndex:(unsigned long long)arg1;
- (id)mutableTableViewIndexDataSource;
- (id)cellItemForSectionIndex:(unsigned long long)arg1 atItemIndex:(unsigned long long)arg2;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)mutableTableViewDataSource;

@end

