//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTIconFontConf, NSString, UIColor, UIFont, UIImage;

@interface DTIcon : NSObject
{
    _Bool _showBadge;
    _Bool _isActiveAutoresizing;
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    long long _titleAlignment;
    long long _titleBreakModel;
    NSString *_iconLink;
    long long _iconContentMode;
    UIImage *_icon;
    DTIconFontConf *_iconFont;
    CDUnknownBlockType _clickBlock;
    UIImage *_backgroundImage;
    UIColor *_backgroundColor;
    unsigned long long _badgeStyle;
    NSString *_badgeValue;
    unsigned long long _shapeType;
    unsigned long long _autoresizingMask;
    struct CGSize _size;
    struct UIEdgeInsets _titleEdgeInsets;
    struct UIEdgeInsets _imageEdgeInsets;
    struct UIEdgeInsets _edgeInsets;
}

+ (id)iconWithPlaceholderImage:(id)arg1 iconLink:(id)arg2 size:(struct CGSize)arg3;
+ (id)iconWithPlaceholderImage:(id)arg1 iconLink:(id)arg2;
+ (id)iconWithImage:(id)arg1;
+ (id)iconWithIconFont:(long long)arg1 color:(id)arg2 font:(id)arg3;
+ (id)iconWithIconFont:(id)arg1;
+ (id)iconWithTitle:(id)arg1 font:(id)arg2 color:(id)arg3;
@property(nonatomic) unsigned long long autoresizingMask; // @synthesize autoresizingMask=_autoresizingMask;
@property(nonatomic) _Bool isActiveAutoresizing; // @synthesize isActiveAutoresizing=_isActiveAutoresizing;
@property(nonatomic) unsigned long long shapeType; // @synthesize shapeType=_shapeType;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(copy, nonatomic) NSString *badgeValue; // @synthesize badgeValue=_badgeValue;
@property(nonatomic) unsigned long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(nonatomic) _Bool showBadge; // @synthesize showBadge=_showBadge;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIImage *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) DTIconFontConf *iconFont; // @synthesize iconFont=_iconFont;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(nonatomic) long long iconContentMode; // @synthesize iconContentMode=_iconContentMode;
@property(copy, nonatomic) NSString *iconLink; // @synthesize iconLink=_iconLink;
@property(nonatomic) struct UIEdgeInsets titleEdgeInsets; // @synthesize titleEdgeInsets=_titleEdgeInsets;
@property(nonatomic) long long titleBreakModel; // @synthesize titleBreakModel=_titleBreakModel;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isImageIcon;
- (_Bool)isEmpty;
- (id)init;

@end

