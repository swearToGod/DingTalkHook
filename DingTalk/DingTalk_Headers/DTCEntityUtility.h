//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTCEntityUtility : NSObject
{
}

+ (id)convertToSenderNames:(id)arg1;
+ (id)rebuildSession:(id)arg1 withAction:(long long)arg2 forAccount:(id)arg3;
+ (id)cleanAllSessionPropertiesForMail:(id)arg1;
+ (long long)underFolderAction:(long long)arg1;
+ (void)rebuildMails:(id)arg1 account:(id)arg2 includeSourceFolder:(_Bool)arg3 actions:(long long)arg4;
+ (id)generateUniqueSesssionIds:(id)arg1;

@end

