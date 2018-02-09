//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTAlertController, NSAttributedString, NSString, UIColor, UIImage, UIView;

@interface DTAlertAction : NSObject
{
    _Bool _enabled;
    _Bool _showTopLine;
    NSString *_title;
    NSAttributedString *_attributeTitle;
    long long _style;
    CDUnknownBlockType _handler;
    NSString *_detailTitle;
    UIColor *_detailTitleColor;
    UIColor *_detailBorderColor;
    long long _detailStyle;
    UIImage *_icon;
    UIImage *_rightIcon;
    DTAlertController *_controller;
    UIView *_topLine;
    UIView *_actionView;
}

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 detailTitle:(id)arg3 detailTitleColor:(id)arg4 detailBorderColor:(id)arg5 detailStyle:(long long)arg6 icon:(id)arg7 rightIcon:(id)arg8 handler:(CDUnknownBlockType)arg9;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 detailTitle:(id)arg3 detailTitleColor:(id)arg4 detailBorderColor:(id)arg5 detailStyle:(long long)arg6 icon:(id)arg7 handler:(CDUnknownBlockType)arg8;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 detailTitle:(id)arg3 detailStyle:(long long)arg4 icon:(id)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 detailTitle:(id)arg3 detailStyle:(long long)arg4 handler:(CDUnknownBlockType)arg5;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)actionWithAttribute:(id)arg1 style:(long long)arg2 detailTitle:(id)arg3 detailTitleColor:(id)arg4 detailBorderColor:(id)arg5 detailStyle:(long long)arg6 icon:(id)arg7 rightIcon:(id)arg8;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 detailTitle:(id)arg3 detailTitleColor:(id)arg4 detailBorderColor:(id)arg5 detailStyle:(long long)arg6 icon:(id)arg7 rightIcon:(id)arg8;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 detailTitle:(id)arg3 detailTitleColor:(id)arg4 detailBorderColor:(id)arg5 detailStyle:(long long)arg6 icon:(id)arg7;
@property(retain, nonatomic) UIView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(nonatomic) __weak DTAlertController *controller; // @synthesize controller=_controller;
@property(nonatomic) _Bool showTopLine; // @synthesize showTopLine=_showTopLine;
@property(retain, nonatomic) UIImage *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) long long detailStyle; // @synthesize detailStyle=_detailStyle;
@property(retain, nonatomic) UIColor *detailBorderColor; // @synthesize detailBorderColor=_detailBorderColor;
@property(retain, nonatomic) UIColor *detailTitleColor; // @synthesize detailTitleColor=_detailTitleColor;
@property(retain, nonatomic) NSString *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSAttributedString *attributeTitle; // @synthesize attributeTitle=_attributeTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (double)actionViewHeight;
- (void)actionPressed:(id)arg1;
- (void)loadDetailView;
- (void)loadNormalView;
- (id)init;

@end

