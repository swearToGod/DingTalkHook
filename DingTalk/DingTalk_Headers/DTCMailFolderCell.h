//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FBKVOController, NSString, UIButton, UIFont, UIImage, UIImageView, UILabel;

@interface DTCMailFolderCell : UITableViewCell
{
    _Bool _beSelected;
    UIImage *_icon;
    NSString *_title;
    UIFont *_titleFont;
    NSString *_detail;
    UIImage *_accesoryImage;
    CDUnknownBlockType _redDotTypeSignal;
    CDUnknownBlockType _disableSignal;
    CDUnknownBlockType _titleLeftMarginSignal;
    CDUnknownBlockType _subFolderSignal;
    CDUnknownBlockType _accessoryClickHandler;
    UIImageView *_iconImageView;
    UIImageView *_redDotImageView;
    UIImageView *_iconRedDot;
    UILabel *_iconRedDotLabel;
    UILabel *_detailRedDotLabel;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_accesoryButton;
    FBKVOController *_kvoController;
}

@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) UIButton *accesoryButton; // @synthesize accesoryButton=_accesoryButton;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *detailRedDotLabel; // @synthesize detailRedDotLabel=_detailRedDotLabel;
@property(retain, nonatomic) UILabel *iconRedDotLabel; // @synthesize iconRedDotLabel=_iconRedDotLabel;
@property(retain, nonatomic) UIImageView *iconRedDot; // @synthesize iconRedDot=_iconRedDot;
@property(retain, nonatomic) UIImageView *redDotImageView; // @synthesize redDotImageView=_redDotImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType accessoryClickHandler; // @synthesize accessoryClickHandler=_accessoryClickHandler;
@property(readonly, copy, nonatomic) CDUnknownBlockType subFolderSignal; // @synthesize subFolderSignal=_subFolderSignal;
@property(readonly, copy, nonatomic) CDUnknownBlockType titleLeftMarginSignal; // @synthesize titleLeftMarginSignal=_titleLeftMarginSignal;
@property(readonly, copy, nonatomic) CDUnknownBlockType disableSignal; // @synthesize disableSignal=_disableSignal;
@property(readonly, copy, nonatomic) CDUnknownBlockType redDotTypeSignal; // @synthesize redDotTypeSignal=_redDotTypeSignal;
@property(retain, nonatomic) UIImage *accesoryImage; // @synthesize accesoryImage=_accesoryImage;
@property(nonatomic) _Bool beSelected; // @synthesize beSelected=_beSelected;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)onClickedAccesoryButton:(id)arg1;
- (void)dealloc;
- (void)bindProps;
- (void)setup;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

