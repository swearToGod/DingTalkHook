//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface DTAIGuide : NSObject
{
    _Bool _shouldShake;
    NSString *_title;
    NSString *_summary;
    NSString *_badgeText;
    NSString *_unreadNumberText;
    NSString *_backgroundColor;
    NSString *_colors;
    NSURL *_iconURL;
    NSURL *_backgroundImageURL;
    NSURL *_actionURL;
    long long _expiredTime;
    NSString *_lastTaskData;
}

@property(copy, nonatomic) NSString *lastTaskData; // @synthesize lastTaskData=_lastTaskData;
@property(nonatomic) _Bool shouldShake; // @synthesize shouldShake=_shouldShake;
@property(nonatomic) long long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(retain, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(retain, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *colors; // @synthesize colors=_colors;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *unreadNumberText; // @synthesize unreadNumberText=_unreadNumberText;
@property(copy, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property(copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isExpired;

@end

