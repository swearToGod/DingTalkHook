//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTTableViewDataSource, NSString, UIViewController;

@interface DTColumnItemContext : NSObject
{
    _Bool _hasLoadData;
    _Bool _isLoading;
    _Bool _isEnd;
    _Bool _isEmpty;
    NSString *_title;
    long long _indexToLoad;
    long long _pageSize;
    DTTableViewDataSource *_dataSource;
    UIViewController *_viewController;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) DTTableViewDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
@property(nonatomic) _Bool isEnd; // @synthesize isEnd=_isEnd;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool hasLoadData; // @synthesize hasLoadData=_hasLoadData;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(nonatomic) long long indexToLoad; // @synthesize indexToLoad=_indexToLoad;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)requestWithCompletion:(CDUnknownBlockType)arg1 isMore:(_Bool)arg2;
- (void)loadDataCompletion:(CDUnknownBlockType)arg1 isMore:(_Bool)arg2;
- (id)init;

@end

