//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTMailPersistenceUtil : NSObject
{
}

+ (id)valueWithDomain:(id)arg1 key:(id)arg2;
+ (void)setValue:(id)arg1 domain:(id)arg2 key:(id)arg3;
+ (_Bool)hasBindAfterLoginWithKey:(id)arg1;
+ (void)setHasBindAfterLogin:(_Bool)arg1 withKey:(id)arg2;
+ (_Bool)shouldAppendSentMailWithKey:(id)arg1;
+ (void)setShouldAppendSentMail:(_Bool)arg1 withKey:(id)arg2;
+ (void)removeUserValueForKey:(id)arg1;
+ (id)userValueForKey:(id)arg1;
+ (void)setUserValue:(id)arg1 forKey:(id)arg2;

@end

