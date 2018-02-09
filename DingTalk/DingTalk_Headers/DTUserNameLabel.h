//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTLabel.h"

@class DTDisplayNameCondition, NSArray, NSNumber, NSString;
@protocol DTUserNameLabelDelegate;

@interface DTUserNameLabel : DTLabel
{
    long long _userId;
    long long _style;
    CDUnknownBlockType _formatBlock;
    id <DTUserNameLabelDelegate> _delegate;
    long long _orgId;
    NSString *_cid;
    NSNumber *_contactDelayUserIdNumber;
    NSArray *_orgUsernameDelayParams;
    DTDisplayNameCondition *_displayDelayCondition;
}

@property(retain, nonatomic) DTDisplayNameCondition *displayDelayCondition; // @synthesize displayDelayCondition=_displayDelayCondition;
@property(retain, nonatomic) NSArray *orgUsernameDelayParams; // @synthesize orgUsernameDelayParams=_orgUsernameDelayParams;
@property(retain, nonatomic) NSNumber *contactDelayUserIdNumber; // @synthesize contactDelayUserIdNumber=_contactDelayUserIdNumber;
@property(nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(nonatomic) __weak id <DTUserNameLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType formatBlock; // @synthesize formatBlock=_formatBlock;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (void)setTextIfTextWillChange:(id)arg1;
- (void)setText:(id)arg1;
- (void)setFixedName:(id)arg1;
- (void)setUserId:(long long)arg1 orgId:(long long)arg2 placeHolderName:(id)arg3;
- (void)setUserIdWithCallback:(long long)arg1 callback:(CDUnknownBlockType)arg2;
- (void)remarkNameChange:(id)arg1;
- (void)onIMChatDisplayNameChange:(id)arg1;
- (void)onContactFetched:(id)arg1;
- (void)requestOrgUserNameWithParamInfo:(id)arg1;
- (void)fetchOrgNameWithContact:(id)arg1 showFlowerName:(_Bool)arg2;
- (void)fetchOrgNameWithContact:(id)arg1;
- (void)showForContact:(id)arg1;
- (void)requestDisplayNameWithParam:(id)arg1;
- (void)setUserIdWithCondition:(id)arg1 placeHolderName:(id)arg2 forceRefresh:(_Bool)arg3;
- (void)requestContactWithParam:(id)arg1;
- (void)setUserId:(long long)arg1 orgId:(long long)arg2 placeHolderName:(id)arg3 forceRefresh:(_Bool)arg4;
- (void)setUserId:(long long)arg1 placeHolderName:(id)arg2;
- (void)addIMChatObserver;
- (void)endObserver;
- (void)beginObserver;
- (void)beginObserverWithUid:(long long)arg1;
- (void)dealloc;

@end

