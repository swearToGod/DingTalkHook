//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTConversationListRowItem, NSArray, NSIndexPath, UITableView, UIView, WKBizConversation;

@protocol DTHomepageDataProviderProtocol <NSObject>
- (void)updateTableView:(UITableView *)arg1 type:(long long)arg2 indexPath1:(NSIndexPath *)arg3 indexPath2:(NSIndexPath *)arg4;
- (void)handleDBHookEvent:(long long)arg1 conversation:(WKBizConversation *)arg2 atIndex:(unsigned long long)arg3 newIndex:(unsigned long long)arg4 completion:(void (^)(NSIndexPath *, NSIndexPath *))arg5;
- (DTConversationListRowItem *)rowItemWithIndexPath:(NSIndexPath *)arg1;
- (NSArray *)rowItemsInSection:(long long)arg1;
- (UIView *)tableView:(UITableView *)arg1 viewForHeaderInSection:(long long)arg2;
- (unsigned long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSection;
- (unsigned long long)totalRowItemCount;
- (void)reset:(NSArray *)arg1 cacheUsageFlag:(unsigned long long)arg2;
@end

