//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSAttributedString, NSString;
@protocol BLMailEventSection;

@protocol BLMailDetailHeader <NSObject>
- (void)setSendTime:(NSString *)arg1;
- (void)setSenderName:(NSString *)arg1 andEmail:(NSString *)arg2;
- (void)setSubjectText:(NSString *)arg1;
- (void)layoutUIIfNeeded;

@optional
- (void)setUnread:(_Bool)arg1;
- (void)setFlag:(NSArray *)arg1;
- (void)setTagColors:(NSArray *)arg1;
- (void)setImportant:(_Bool)arg1;
- (void)setAvatarWithEmail:(NSString *)arg1 nick:(NSString *)arg2;
- (id <BLMailEventSection>)mailEventSection;
- (void)setCustomTag:(NSString *)arg1 atIndex:(unsigned long long)arg2;
- (void)setUnreadCount:(long long)arg1 andTotalRecipients:(long long)arg2 andShouldDetail:(_Bool)arg3;
- (void)setReminderTime:(NSString *)arg1;
- (void)setAttachmentCount:(long long)arg1;
- (void)setRecipientBrief:(NSString *)arg1 andCount:(unsigned long long)arg2;
- (void)setCcFiledTokens:(NSArray *)arg1;
- (void)setToFiledTokens:(NSArray *)arg1;
- (void)setDifferentOrgTips:(NSString *)arg1;
- (void)setFromTagName:(NSAttributedString *)arg1;
@end

