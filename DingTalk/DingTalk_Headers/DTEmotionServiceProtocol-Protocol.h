//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol DTEmotionServiceProtocol <NSObject>
- (NSString *)transformStringToRelatedLauguage:(NSString *)arg1 targetString:(NSString *)arg2;
- (NSString *)getEmotionFileNameWithEmotionString:(NSString *)arg1;
- (NSDictionary *)emotionDictionary;
@end

