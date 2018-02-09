//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString, UIColor;

@interface DTAlphaSettingJumpModel : NSObject
{
    NSAttributedString *_defaultButtonTitle;
    UIColor *_defaultButtonBgColor;
    NSAttributedString *_title;
    NSAttributedString *_content;
    long long _rightIconFont;
    id _orgInfo;
    NSString *_wifiName;
}

@property(copy, nonatomic) NSString *wifiName; // @synthesize wifiName=_wifiName;
@property(copy, nonatomic) id orgInfo; // @synthesize orgInfo=_orgInfo;
@property(nonatomic) long long rightIconFont; // @synthesize rightIconFont=_rightIconFont;
@property(copy, nonatomic) NSAttributedString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSAttributedString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *defaultButtonBgColor; // @synthesize defaultButtonBgColor=_defaultButtonBgColor;
@property(copy, nonatomic) NSAttributedString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
- (void).cxx_destruct;

@end

