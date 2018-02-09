//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTSearchMessage.h"

@class DTAvatarModel, DTBizConversation, NSArray, NSString;

@interface DTSearchMessageGroup : DTSearchMessage
{
    _Bool _isSearchFromServer;
    NSString *_title;
    unsigned long long _msgCount;
    DTAvatarModel *_avatar;
    NSArray *_msgList;
    NSString *_cid;
    DTBizConversation *_conversation;
    CDUnknownBlockType _updateBlock;
}

@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) _Bool isSearchFromServer; // @synthesize isSearchFromServer=_isSearchFromServer;
@property(retain, nonatomic) DTBizConversation *conversation; // @synthesize conversation=_conversation;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSArray *msgList; // @synthesize msgList=_msgList;
@property(copy, nonatomic) DTAvatarModel *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) unsigned long long msgCount; // @synthesize msgCount=_msgCount;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

