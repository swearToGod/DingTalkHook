//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTDingCommentHandler.h"

@class DTTableViewRefreshManager;

@interface DTDingReloadTableHandler : DTDingCommentHandler
{
    DTTableViewRefreshManager *_dingModelRefreshManager;
    DTTableViewRefreshManager *_subTasksRefreshManager;
    DTTableViewRefreshManager *_commentListRefreshManager;
}

@property(retain, nonatomic) DTTableViewRefreshManager *commentListRefreshManager; // @synthesize commentListRefreshManager=_commentListRefreshManager;
@property(retain, nonatomic) DTTableViewRefreshManager *subTasksRefreshManager; // @synthesize subTasksRefreshManager=_subTasksRefreshManager;
@property(retain, nonatomic) DTTableViewRefreshManager *dingModelRefreshManager; // @synthesize dingModelRefreshManager=_dingModelRefreshManager;
- (void).cxx_destruct;

@end

