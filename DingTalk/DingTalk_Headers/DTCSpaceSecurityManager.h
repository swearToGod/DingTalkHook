//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTCSpaceSecurityManager : NSObject
{
}

+ (_Bool)isOwnerInConversation:(id)arg1;
+ (_Bool)isReadOnlyFileWithMessage:(id)arg1 inConversation:(id)arg2;
+ (void)isCSpaceDentryVideoExistLocal:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (_Bool)canShowStatisticsActionWithDentry:(id)arg1 withSpaceType:(long long)arg2 withAuthorityType:(unsigned long long)arg3;
+ (void)canBeSave:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
+ (id)convertErrorTypeToErrorMsg:(unsigned long long)arg1;
+ (void)checkSpaceMessages:(id)arg1 canBeTransmittedToConversation:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
