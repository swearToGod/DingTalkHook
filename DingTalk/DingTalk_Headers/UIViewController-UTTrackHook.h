//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSDictionary, NSString, NSURL;

@interface UIViewController (UTTrackHook)
@property(copy, nonatomic) NSString *utParamPreNext;
@property(copy, nonatomic) NSString *utParamCnt;
@property(copy, nonatomic) NSString *utParamUrl;
@property(copy, nonatomic) NSString *utParamPre;
- (_Bool)ut_isBackWithStackLength:(long long)arg1 navi:(id)arg2;
- (_Bool)ut_isBackWithStackLength:(long long)arg1;
- (_Bool)ut_isChildViewController;
- (id)ut_correctNavigationController;
- (void)ut_h5UpdateSpmInfo:(id)arg1;
@property(copy, nonatomic) NSString *utSpmPreNext;
@property(nonatomic) _Bool utIsbk;
@property(nonatomic) _Bool utPresentNew;
@property(copy, nonatomic) NSString *utSpmUrl;
@property(copy, nonatomic) NSString *utSpmCnt;
@property(copy, nonatomic) NSString *utSpmPre;
@property(retain, nonatomic) NSString *utHasAppeared;
@property(retain, nonatomic) NSString *utH5HasCalled;
@property(retain, nonatomic) NSString *utPageNameAlias;
@property(retain, nonatomic) NSURL *utNavUrl;
@property(retain, nonatomic) NSDictionary *utArgs;
@property(retain, nonatomic) NSDictionary *utProperties;
@property(retain, nonatomic) NSString *utActionName;
@end

