//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MYBankLauncher : NSObject
{
    _Bool _isInited;
}

+ (id)sharedLauncher;
@property _Bool isInited; // @synthesize isInited=_isInited;
- (void)launcherDidStartBoot;
- (void)launcherWillStartBoot;
- (void)initMyBankEvnIfNeeded;
- (id)init;

@end

