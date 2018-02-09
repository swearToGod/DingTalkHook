//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTViewController.h"

@class DTBizConversation, DTEmptyResultView, NSDictionary, NSString, UIButton, UIImageView, UILabel, UIScrollView;

@interface DTConversationGroupQRJoinGroupController : DTViewController
{
    _Bool _hasSentJoinGroupRequest;
    _Bool _hasDidAppear;
    UIScrollView *_contentView;
    UIImageView *_orgCardView;
    UIImageView *_bottomLine;
    UIButton *_confirmButton;
    DTEmptyResultView *_errorView;
    UILabel *_tipsLabel;
    DTBizConversation *_conversation;
    NSString *_content;
    long long _action;
    NSDictionary *_userInfo;
    long long _senderId;
}

@property(nonatomic) _Bool hasDidAppear; // @synthesize hasDidAppear=_hasDidAppear;
@property(nonatomic) _Bool hasSentJoinGroupRequest; // @synthesize hasSentJoinGroupRequest=_hasSentJoinGroupRequest;
@property(nonatomic) long long senderId; // @synthesize senderId=_senderId;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) long long action; // @synthesize action=_action;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) DTEmptyResultView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *orgCardView; // @synthesize orgCardView=_orgCardView;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)jumpToDTMessageBaseViewController;
- (void)openApplyJoinGroupViewController;
- (void)confirmButtonAction:(id)arg1;
- (void)showJoinGroupConfirmButton;
- (void)disableConfirmationButton;
- (void)showErrorMessage;
- (void)didFinishCheckJoinGroupWithResult:(_Bool)arg1;
- (void)checkHasSentJoinGroupRequest;
- (void)verifyQRCodeDidFinish:(long long)arg1 conversation:(id)arg2 isMember:(_Bool)arg3;
- (CDUnknownBlockType)completionForFetchConversation;
- (void)fetchConversationByGroupId;
- (void)fetchConversationByPublicCid;
- (void)fetchConversationByQRCode;
- (void)fetchConversation;
- (_Bool)isFromSearch;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAction:(long long)arg1 content:(id)arg2 userInfo:(id)arg3;

@end

