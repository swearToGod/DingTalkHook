//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTLiveVideoInfoItem, NSString;

@interface DTFloatWindowItem : NSObject
{
    int _type;
    NSString *_cid;
    long long _bizId;
    NSString *_bizType;
    NSString *_title;
    NSString *_iconUrl;
    NSString *_selectIconUrl;
    long long _iconFont;
    NSString *_contentUrl;
    DTLiveVideoInfoItem *_liveInfo;
}

+ (id)itemWithInfo:(id)arg1 cid:(id)arg2;
@property(retain, nonatomic) DTLiveVideoInfoItem *liveInfo; // @synthesize liveInfo=_liveInfo;
@property(copy, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(nonatomic) long long iconFont; // @synthesize iconFont=_iconFont;
@property(copy, nonatomic) NSString *selectIconUrl; // @synthesize selectIconUrl=_selectIconUrl;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(nonatomic) long long bizId; // @synthesize bizId=_bizId;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
- (void).cxx_destruct;
- (_Bool)isLiveItem;

@end

