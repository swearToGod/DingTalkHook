//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTCmailUpdateQuickReplyParam : Marshal
{
    NSString *_agentMail;
    NSNumber *_itemId;
    NSString *_content;
}

@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *itemId; // @synthesize itemId=_itemId;
@property(copy, nonatomic) NSString *agentMail; // @synthesize agentMail=_agentMail;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

