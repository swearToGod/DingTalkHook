//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MYBankLogin-Protocol.h"

@class NSMutableDictionary, NSString, UIViewController;

@interface MYBLoginService : NSObject <MYBankLogin>
{
    CDUnknownBlockType _finishCallback;
    NSMutableDictionary *_loginParam;
    UIViewController *_currentVc;
    NSString *_currentDingUserId;
    NSString *_corpId;
    NSString *_dingTalkCode;
    NSString *_qrCodeToken;
    NSString *_dingTalkUserId;
    CDUnknownBlockType _getUserIdBlock;
}

@property(copy, nonatomic) CDUnknownBlockType getUserIdBlock; // @synthesize getUserIdBlock=_getUserIdBlock;
@property(retain, nonatomic) NSString *dingTalkUserId; // @synthesize dingTalkUserId=_dingTalkUserId;
@property(retain, nonatomic) NSString *qrCodeToken; // @synthesize qrCodeToken=_qrCodeToken;
@property(retain, nonatomic) NSString *dingTalkCode; // @synthesize dingTalkCode=_dingTalkCode;
@property(retain, nonatomic) NSString *corpId; // @synthesize corpId=_corpId;
@property(retain, nonatomic) NSString *currentDingUserId; // @synthesize currentDingUserId=_currentDingUserId;
@property(retain, nonatomic) UIViewController *currentVc; // @synthesize currentVc=_currentVc;
@property(retain, nonatomic) NSMutableDictionary *loginParam; // @synthesize loginParam=_loginParam;
@property(copy, nonatomic) CDUnknownBlockType finishCallback; // @synthesize finishCallback=_finishCallback;
- (void).cxx_destruct;
- (id)env_config;
- (void)showTip:(id)arg1;
- (void)openUrl:(id)arg1;
- (id)encodeUrl:(id)arg1;
- (void)rpcDoLogout;
- (void)rpcAutoLoginWithParam:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)startAutoLoginWithParam:(id)arg1;
- (void)cleanDingQrCode;
- (void)cleanCookies;
- (id)findCookieByDomain:(id)arg1;
- (void)saveUserInfo:(id)arg1;
- (void)saveCookieWithParam:(id)arg1;
- (void)rpcFakeLoginWithToken:(id)arg1;
- (void)loginFailWithResult:(id)arg1;
- (void)rpcLoginWithAuthCode:(id)arg1 extParam:(id)arg2;
- (void)rpcGetSecurityScheme:(CDUnknownBlockType)arg1;
- (void)alipayLoginWithParam:(id)arg1;
- (void)setCodeWithParam:(id)arg1;
- (void)fakeLoginWithVc:(id)arg1 param:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)loginWithAuthCode:(id)arg1 extParam:(id)arg2;
- (void)doLogoutWithVc:(id)arg1 finishBlock:(CDUnknownBlockType)arg2 extParam:(id)arg3;
- (void)autoLoginWithVc:(id)arg1 finishBlock:(CDUnknownBlockType)arg2 extParam:(id)arg3;
- (void)doLoginWith:(id)arg1 finishBlock:(CDUnknownBlockType)arg2 extParam:(id)arg3;
- (void)doTrustLoginWithVc:(id)arg1 finishBlock:(CDUnknownBlockType)arg2 extParam:(id)arg3;
- (id)init;
- (void)setUserIdBlock:(CDUnknownBlockType)arg1;

@end

