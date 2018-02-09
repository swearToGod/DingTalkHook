//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLFavoriteContent.h"

@class NSString;

@interface BLFavoriteMail : BLFavoriteContent
{
    NSString *_mailId;
    NSString *_mailMsgId;
    long long _mailFileCount;
    NSString *_mailType;
    NSString *_mailAuthor;
    NSString *_mailAddress;
    NSString *_msgTip;
    long long _mailDate;
}

+ (id)toFavoriteContentFromApiModel:(id)arg1;
+ (id)toFavoriteContentApiModel:(id)arg1;
@property(nonatomic) long long mailDate; // @synthesize mailDate=_mailDate;
@property(copy, nonatomic) NSString *msgTip; // @synthesize msgTip=_msgTip;
@property(copy, nonatomic) NSString *mailAddress; // @synthesize mailAddress=_mailAddress;
@property(copy, nonatomic) NSString *mailAuthor; // @synthesize mailAuthor=_mailAuthor;
@property(copy, nonatomic) NSString *mailType; // @synthesize mailType=_mailType;
@property(nonatomic) long long mailFileCount; // @synthesize mailFileCount=_mailFileCount;
@property(copy, nonatomic) NSString *mailMsgId; // @synthesize mailMsgId=_mailMsgId;
@property(copy, nonatomic) NSString *mailId; // @synthesize mailId=_mailId;
- (void).cxx_destruct;

@end

