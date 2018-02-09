//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBizMessage, NSArray;

@protocol DTMessageControllerDataSourceProtocal <NSObject>

@optional
- (_Bool)needSendReadStatusInCellForRowWithMessage:(DTBizMessage *)arg1;
- (void)initLoadMessageController;
- (void)egoRefreshDidFinishScrollToItem;
- (void)recordReadStatusWithMessage:(DTBizMessage *)arg1;
- (void)sendMessageReadStatusWithMessage:(DTBizMessage *)arg1;
- (void)insertMessages:(NSArray *)arg1 needSyncData:(_Bool)arg2;
- (void)insertMessages:(NSArray *)arg1;
- (void)configureDataSource;
@end
