//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIColor, UIFont, UIImage;

@interface DTBannerNoticeModel : NSObject
{
    UIImage *_iconImg;
    NSString *_iconURL;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    NSString *_desc;
    UIFont *_descFont;
    UIColor *_descColor;
    NSString *_linkText;
    UIFont *_linkFont;
    UIColor *_linkColor;
    NSString *_linkURL;
    NSString *_actURL;
    NSArray *_actionModels;
    NSString *_subBgImgName;
    long long _audio;
    double _duration;
}

@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) long long audio; // @synthesize audio=_audio;
@property(copy, nonatomic) NSString *subBgImgName; // @synthesize subBgImgName=_subBgImgName;
@property(copy, nonatomic) NSArray *actionModels; // @synthesize actionModels=_actionModels;
@property(copy, nonatomic) NSString *actURL; // @synthesize actURL=_actURL;
@property(copy, nonatomic) NSString *linkURL; // @synthesize linkURL=_linkURL;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIFont *linkFont; // @synthesize linkFont=_linkFont;
@property(copy, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(retain, nonatomic) UIColor *descColor; // @synthesize descColor=_descColor;
@property(retain, nonatomic) UIFont *descFont; // @synthesize descFont=_descFont;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) UIImage *iconImg; // @synthesize iconImg=_iconImg;
- (void).cxx_destruct;

@end

