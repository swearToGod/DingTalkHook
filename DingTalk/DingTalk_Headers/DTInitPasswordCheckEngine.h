//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTInitPasswordCheckEngine : NSObject
{
    _Bool _isNeedInitPassword;
    _Bool _hasCheckedNeedInitPassword;
    NSString *_mobile;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(nonatomic) _Bool hasCheckedNeedInitPassword; // @synthesize hasCheckedNeedInitPassword=_hasCheckedNeedInitPassword;
@property(nonatomic) _Bool isNeedInitPassword; // @synthesize isNeedInitPassword=_isNeedInitPassword;
- (void).cxx_destruct;
- (void)setHasPasswordInThirdPartyLogin:(_Bool)arg1;
- (_Bool)hasPasswordInThirdPartyLogin;
- (id)passwordInThirdPartyLoginKey;
- (void)setIsThirdPartyLogin:(_Bool)arg1;
- (_Bool)isThirdPartyLogin;
- (void)setForceToInitPassword;
- (void)setHasCheckedNeedInitPassword;
- (void)forceToSetUpPassword;
- (void)checkIsNeededInitPassword;
- (void)checkIsNeedInitPasswordWithMobile:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;

@end

