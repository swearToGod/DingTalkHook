//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, WKBizMessage;

@interface WKUpdateBanWordsTypeParam : NSObject
{
    NSString *_conversationId;
    unsigned long long _banWordsType;
    WKBizMessage *_sendMessageModel;
}

@property(retain, nonatomic) WKBizMessage *sendMessageModel; // @synthesize sendMessageModel=_sendMessageModel;
@property(nonatomic) unsigned long long banWordsType; // @synthesize banWordsType=_banWordsType;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)idlModel;

@end

