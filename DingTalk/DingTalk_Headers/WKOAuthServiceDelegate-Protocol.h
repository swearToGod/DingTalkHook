//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary;

@protocol WKOAuthServiceDelegate <NSObject>
- (NSData *)syncContextForOpenId:(long long)arg1;

@optional
- (void)autoLoginWillComplete:(_Bool)arg1 loginType:(long long)arg2;
- (void)logoutWillComplete;
- (void)loginSuccess:(long long)arg1 authInfo:(NSDictionary *)arg2 successBlock:(void (^)(NSDictionary *))arg3;
@end

