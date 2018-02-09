//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString, WKIDLConversationNotificationModel;

@interface WKIDLConversationChangeModel : Marshal
{
    NSString *_conversationId;
    NSNumber *_status;
    NSNumber *_modifyTime;
    WKIDLConversationNotificationModel *_convNoticeModel;
    NSNumber *_sort;
    NSNumber *_notificationOff;
    NSNumber *_inBanWhite;
    NSNumber *_inBanBlack;
    NSNumber *_banWordsTime;
}

@property(retain, nonatomic) NSNumber *banWordsTime; // @synthesize banWordsTime=_banWordsTime;
@property(retain, nonatomic) NSNumber *inBanBlack; // @synthesize inBanBlack=_inBanBlack;
@property(retain, nonatomic) NSNumber *inBanWhite; // @synthesize inBanWhite=_inBanWhite;
@property(retain, nonatomic) NSNumber *notificationOff; // @synthesize notificationOff=_notificationOff;
@property(retain, nonatomic) NSNumber *sort; // @synthesize sort=_sort;
@property(retain, nonatomic) WKIDLConversationNotificationModel *convNoticeModel; // @synthesize convNoticeModel=_convNoticeModel;
@property(retain, nonatomic) NSNumber *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

