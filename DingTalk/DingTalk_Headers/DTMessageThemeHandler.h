//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageBaseHandler.h"

@class NSDictionary, NSString, UIColor;

@interface DTMessageThemeHandler : DTMessageBaseHandler
{
    _Bool _hadChangeTheme;
    UIColor *_currentNavTintColor;
    UIColor *_currentNavBgColor;
    NSString *_currentThemeId;
    NSDictionary *_currentTheme;
}

@property(retain, nonatomic) NSDictionary *currentTheme; // @synthesize currentTheme=_currentTheme;
@property(copy, nonatomic) NSString *currentThemeId; // @synthesize currentThemeId=_currentThemeId;
- (void).cxx_destruct;
- (void)networkCurrentThemeWithThemeId:(id)arg1 localVersion:(long long)arg2 successBlock:(CDUnknownBlockType)arg3;
- (void)saveThemeContent:(id)arg1 ver:(long long)arg2;
- (id)colorWithHexString:(id)arg1;
- (id)currentNavBgColor;
- (id)currentNavTintColor;
- (void)exchangeThemeIfNeeded;
- (void)exchangeNavBar;
- (_Bool)isNeedChangeStatusBarStyle;
- (_Bool)isThemeLoaded;
- (void)loadCurrentTheme;
- (id)initWithContext:(id)arg1;

@end
