//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDictionary, NSNumber, NSString, WKIDLGroupValidationInfoModel, WKIDLIconOptionModel, WKIDLSearchableModel;

@interface WKIDLConversationNotificationModel : Marshal
{
    _Bool _isKicked;
    _Bool _isQuit;
    _Bool _isDisband;
    NSString *_conversationId;
    NSNumber *_memberCount;
    NSString *_title;
    NSString *_icon;
    NSNumber *_tag;
    NSDictionary *_extension;
    NSNumber *_authority;
    NSNumber *_memberLimit;
    NSNumber *_superGroup;
    NSNumber *_ownerId;
    WKIDLGroupValidationInfoModel *_groupValidationInfo;
    NSNumber *_showHistoryType;
    WKIDLIconOptionModel *_iconOption;
    NSNumber *_banWordsType;
    WKIDLSearchableModel *_searchableModel;
    NSNumber *_atAllType;
    NSNumber *_quitReasonType;
}

@property(retain, nonatomic) NSNumber *quitReasonType; // @synthesize quitReasonType=_quitReasonType;
@property(retain, nonatomic) NSNumber *atAllType; // @synthesize atAllType=_atAllType;
@property(retain, nonatomic) WKIDLSearchableModel *searchableModel; // @synthesize searchableModel=_searchableModel;
@property(retain, nonatomic) NSNumber *banWordsType; // @synthesize banWordsType=_banWordsType;
@property(retain, nonatomic) WKIDLIconOptionModel *iconOption; // @synthesize iconOption=_iconOption;
@property(retain, nonatomic) NSNumber *showHistoryType; // @synthesize showHistoryType=_showHistoryType;
@property(retain, nonatomic) WKIDLGroupValidationInfoModel *groupValidationInfo; // @synthesize groupValidationInfo=_groupValidationInfo;
@property(retain, nonatomic) NSNumber *ownerId; // @synthesize ownerId=_ownerId;
@property(retain, nonatomic) NSNumber *superGroup; // @synthesize superGroup=_superGroup;
@property(retain, nonatomic) NSNumber *memberLimit; // @synthesize memberLimit=_memberLimit;
@property(retain, nonatomic) NSNumber *authority; // @synthesize authority=_authority;
@property(nonatomic) _Bool isDisband; // @synthesize isDisband=_isDisband;
@property(nonatomic) _Bool isQuit; // @synthesize isQuit=_isQuit;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSNumber *tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool isKicked; // @synthesize isKicked=_isKicked;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *memberCount; // @synthesize memberCount=_memberCount;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
