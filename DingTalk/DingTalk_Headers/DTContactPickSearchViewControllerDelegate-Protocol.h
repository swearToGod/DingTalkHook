//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTEmptyResultView, DTLoadMoreController, DTViewController, NSArray, NSString;

@protocol DTContactPickSearchViewControllerDelegate <NSObject>

@optional
- (void)beginLoadMoreController:(DTLoadMoreController *)arg1 successBlock:(void (^)(NSArray *, _Bool, long long))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)searchText:(NSString *)arg1 successBlock:(void (^)(NSArray *, _Bool, long long))arg2 failureBlock:(void (^)(id <IMError>))arg3;
- (void)searchText:(NSString *)arg1;
- (DTEmptyResultView *)emptyViewForViewController:(DTViewController *)arg1;
- (_Bool)shouldShowEmptyView:(DTViewController *)arg1;
- (DTLoadMoreController *)loadModelControllerForSearchView:(DTViewController *)arg1;
- (NSArray *)dataSourceForSearchViewController:(DTViewController *)arg1;
- (void)searchViewWillDestory:(DTViewController *)arg1;
- (void)searchViewWillShow:(DTViewController *)arg1;
@end

