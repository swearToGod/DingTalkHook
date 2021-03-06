//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, UIImage, UIViewController;

@interface DTConversationSticker : NSObject
{
    _Bool _isModelStyle;
    NSString *_title;
    UIImage *_icon;
    NSString *_URL;
    UIViewController *_viewController;
    NSString *_utCloseBtnClickKey;
    NSString *_utOpenStickerKey;
}

+ (id)stickerWithViewController:(id)arg1 title:(id)arg2 icon:(id)arg3 isModalStyle:(_Bool)arg4;
+ (id)stickerWithViewController:(id)arg1 title:(id)arg2 isModalStyle:(_Bool)arg3;
+ (id)stickerWithViewController:(id)arg1 title:(id)arg2;
+ (id)stickerWithURL:(id)arg1 title:(id)arg2;
@property(copy, nonatomic) NSString *utOpenStickerKey; // @synthesize utOpenStickerKey=_utOpenStickerKey;
@property(copy, nonatomic) NSString *utCloseBtnClickKey; // @synthesize utCloseBtnClickKey=_utCloseBtnClickKey;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool isModelStyle; // @synthesize isModelStyle=_isModelStyle;
@property(copy, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

