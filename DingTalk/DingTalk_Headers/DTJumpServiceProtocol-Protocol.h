//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;

@protocol DTJumpServiceProtocol <NSObject>
- (NSURL *)parselLinkURL:(NSURL *)arg1;
- (_Bool)openExternalURL:(NSString *)arg1;
- (_Bool)conformToUnifiedJumpRule:(NSString *)arg1;
- (_Bool)handleURL:(NSURL *)arg1 userInfo:(id)arg2;
- (_Bool)handleURL:(NSURL *)arg1;
@end

