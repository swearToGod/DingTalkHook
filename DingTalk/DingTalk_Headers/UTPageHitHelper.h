//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UTPageHitHelper : NSObject
{
}

+ (_Bool)currentPageIsH5;
+ (id)getPagePropertiesForKey:(id)arg1;
+ (void)skipPageForKey:(id)arg1;
+ (id)query:(id)arg1 forKey:(id)arg2;
+ (void)updatePageStatus:(int)arg1 forKey:(id)arg2;
+ (void)updatePageUrl:(id)arg1 forKey:(id)arg2;
+ (void)updatePageUtparam:(id)arg1 forKey:(id)arg2;
+ (void)updatePageProperties:(id)arg1 forKey:(id)arg2;
+ (void)updatePageName:(id)arg1 forKey:(id)arg2;
+ (_Bool)pageDisAppear:(id)arg1 timestamp:(long long)arg2 tracker:(id)arg3;
+ (_Bool)pageDisAppear:(id)arg1 timestamp:(long long)arg2;
+ (void)pageAppear:(id)arg1 pageName:(id)arg2 timestamp:(long long)arg3;

@end

