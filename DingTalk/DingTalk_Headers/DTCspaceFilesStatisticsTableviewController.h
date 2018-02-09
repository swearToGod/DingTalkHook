//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTBizCSpaceDentry, DTCSpaceProperty, DTEmptyResultView, NSArray, UIView;

@interface DTCspaceFilesStatisticsTableviewController : DTTableViewController
{
    DTBizCSpaceDentry *_dentry;
    CDUnknownBlockType _completionBlock;
    long long _type;
    DTEmptyResultView *_emptyView;
    UIView *_sendDingView;
    NSArray *_userList;
    NSArray *_filteredList;
    NSArray *_conversationUserList;
    DTCSpaceProperty *_property;
}

@property(retain, nonatomic) DTCSpaceProperty *property; // @synthesize property=_property;
@property(retain, nonatomic) NSArray *conversationUserList; // @synthesize conversationUserList=_conversationUserList;
@property(retain, nonatomic) NSArray *filteredList; // @synthesize filteredList=_filteredList;
@property(retain, nonatomic) NSArray *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) UIView *sendDingView; // @synthesize sendDingView=_sendDingView;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) DTBizCSpaceDentry *dentry; // @synthesize dentry=_dentry;
- (void).cxx_destruct;
- (void)gotoProfileViewControllerWithUid:(long long)arg1;
- (_Bool)isMemberOfConversation:(long long)arg1;
- (id)allUserIdArray;
- (void)sendDing:(id)arg1;
- (void)showDingBottomBar;
- (void)showEmptyView;
- (id)filterMemberList:(id)arg1;
- (void)handleMemberList:(id)arg1;
- (void)loadData;
- (void)loadSubviews;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end
