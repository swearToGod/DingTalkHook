//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTSearchMessage.h"

@class DTAvatarModel, DTBizMessage, NSString;

@interface DTSearchMessageDetail : DTSearchMessage
{
    _Bool _isSearchFromServer;
    NSString *_mid;
    NSString *_cid;
    NSString *_content;
    long long _senderUid;
    DTAvatarModel *_avatar;
    NSString *_senderName;
    long long _timeStamp;
    DTBizMessage *_message;
}

@property(retain, nonatomic) DTBizMessage *message; // @synthesize message=_message;
@property(nonatomic) _Bool isSearchFromServer; // @synthesize isSearchFromServer=_isSearchFromServer;
@property(nonatomic) long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(copy, nonatomic) DTAvatarModel *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) long long senderUid; // @synthesize senderUid=_senderUid;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *mid; // @synthesize mid=_mid;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)initWithBizMessage:(id)arg1 isFromServer:(_Bool)arg2;

@end

