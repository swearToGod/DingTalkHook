//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTWhatsNewManager4Cmail : NSObject
{
    _Bool _isAlertingWhatNew;
    _Bool _toTop;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool toTop; // @synthesize toTop=_toTop;
@property(nonatomic) _Bool isAlertingWhatNew; // @synthesize isAlertingWhatNew=_isAlertingWhatNew;
- (void)onLiftTop;
- (void)toTopChanged:(id)arg1;
- (_Bool)showWhatsNewIfNeeded;
- (_Bool)showFirstLoginDingTalk;
- (_Bool)showWhatsNewIfNeededForCaiNiaoUseLocalData:(_Bool)arg1;
- (_Bool)showWhatsNewIfNeededForCaiNiao;
- (_Bool)showWhatsNewForSignature:(id)arg1 useLocalData:(_Bool)arg2;
- (_Bool)showWhatsNewForSignature:(id)arg1;
- (void)dealloc;
- (id)init;

@end

