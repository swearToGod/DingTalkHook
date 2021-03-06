//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTTableViewController.h"

#import "DTLoadMoreDelegate-Protocol.h"
#import "DTMessageListHandlerProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class DTBizConversation, DTEmptyResultView, DTLoadMoreController, DTMergeMessageTapHandler, DTMessageReactionHandler, NSArray, NSString, UILongPressGestureRecognizer;

@interface DTConversationLinkListViewController : DTTableViewController <DTLoadMoreDelegate, UIGestureRecognizerDelegate, DTMessageListHandlerProtocol>
{
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    DTBizConversation *_conversation;
    NSArray *_messageList;
    DTMergeMessageTapHandler *_tapHandler;
    DTEmptyResultView *_emptyView;
    DTMessageReactionHandler *_reactionHandler;
    DTLoadMoreController *_loadMoreController;
}

@property(retain, nonatomic) DTLoadMoreController *loadMoreController; // @synthesize loadMoreController=_loadMoreController;
@property(retain, nonatomic) DTMessageReactionHandler *reactionHandler; // @synthesize reactionHandler=_reactionHandler;
@property(retain, nonatomic) DTEmptyResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) DTMergeMessageTapHandler *tapHandler; // @synthesize tapHandler=_tapHandler;
@property(copy, nonatomic) NSArray *messageList; // @synthesize messageList=_messageList;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)receivedMessageNoticeUpdateNotification:(id)arg1;
- (void)openUserProfileWithUid:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (id)cellForAnchorPoint:(struct CGPoint)arg1;
- (void)locateLinkMessageInConversation:(id)arg1;
- (void)onLongTap:(id)arg1;
- (void)viewDidLoad;
- (void)loadMoreControllerWillBeginLoading:(id)arg1;
- (void)tableViewDidScroll:(id)arg1;
- (void)loadMoreDataSourceWithCursor:(long long)arg1;
- (id)sectionDataSourceWithCursor:(long long)arg1;
- (id)mergeItemWithMessage:(id)arg1;
- (void)loadData;
- (id)findLocalItemWithMessage:(id)arg1;
- (void)showEmptyViewIfNeed;
- (id)initWIthConversation:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

