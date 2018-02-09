//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTBindAndActiveRequestModel, DTConnectInternetRequestModel, NSString;

@protocol DTAlphaUIServiceProtocol <NSObject>
@property(nonatomic) _Bool alphaAlertIsShow;
@property(readonly, nonatomic) long long type;
- (_Bool)meshAlertShowing;
- (_Bool)settingVCShowing;
- (void)jumpConnectNetPortalWithModel:(DTConnectInternetRequestModel *)arg1 sock:(int)arg2;
- (void)jumpConnectVC:(NSString *)arg1;
- (void)jumpSettingVCWithModel:(DTBindAndActiveRequestModel *)arg1 sock:(int)arg2;
- (void)dismissAlphaAlert;
- (void)showAlphaAlert:(long long)arg1 corpId:(NSString *)arg2 cancelBlock:(void (^)(void))arg3 confirmBlock:(void (^)(void))arg4;
- (void)showAlphaAlert:(long long)arg1 cancelBlock:(void (^)(void))arg2 confirmBlock:(void (^)(void))arg3;
@end

