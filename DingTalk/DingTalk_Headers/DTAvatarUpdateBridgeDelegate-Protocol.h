//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTAvatarModel, NSString;

@protocol DTAvatarUpdateBridgeDelegate <NSObject>
- (NSString *)generateNewUrlWithOriginUrl:(NSString *)arg1 customSize:(struct CGSize)arg2 addXZ:(_Bool)arg3 forceAddWebp:(_Bool)arg4;
- (long long)currentLoggedUId;
- (DTAvatarModel *)avatarModelFromUId:(long long)arg1;
- (DTAvatarModel *)avatarModelFromContact:(id)arg1;
- (long long)uIdFromContact:(id)arg1;
@end

