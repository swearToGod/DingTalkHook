//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

@class DTBizConversation, NSArray;

@interface DTConversationSettingSilentViewController : DTTableViewController
{
    _Bool _isEnableAllSilent;
    DTBizConversation *_conversation;
    NSArray *_blackListItems;
    NSArray *_whiteListItems;
}

@property(copy, nonatomic) NSArray *whiteListItems; // @synthesize whiteListItems=_whiteListItems;
@property(copy, nonatomic) NSArray *blackListItems; // @synthesize blackListItems=_blackListItems;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (void)membersStringForOpenIds:(id)arg1 successBlock:(CDUnknownBlockType)arg2;
- (id)whiteListItemForUid:(long long)arg1;
- (id)blackListItemForUid:(long long)arg1 secondsToRealease:(long long)arg2;
- (id)allSilentSectionItem;
- (id)memberSilentSectionItem;
- (void)openGroupMemberPickerForWhiteList;
- (void)openGroupMemberPickerForBlackList;
- (void)reloadTableDataSource;
- (void)loadRemoteListData;
- (void)viewDidLoad;
- (id)initWithConversation:(id)arg1;

@end

