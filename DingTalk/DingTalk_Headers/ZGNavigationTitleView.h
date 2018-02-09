//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ZGNavigationTitleContentViewDelegate-Protocol.h"

@class NSString, UIColor, ZGNavigationTitleContentView;

@interface ZGNavigationTitleView : UIView <ZGNavigationTitleContentViewDelegate>
{
    NSString *_navigationBarTitle;
    NSString *_navigationBarSubtitle;
    UIColor *_navigationBarTitleFontColor;
    UIColor *_navigationBarSubtitleFontColor;
    ZGNavigationTitleContentView *_contentView;
}

@property(retain, nonatomic) ZGNavigationTitleContentView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) UIColor *navigationBarSubtitleFontColor; // @synthesize navigationBarSubtitleFontColor=_navigationBarSubtitleFontColor;
@property(copy, nonatomic) UIColor *navigationBarTitleFontColor; // @synthesize navigationBarTitleFontColor=_navigationBarTitleFontColor;
@property(copy, nonatomic) NSString *navigationBarSubtitle; // @synthesize navigationBarSubtitle=_navigationBarSubtitle;
@property(copy, nonatomic) NSString *navigationBarTitle; // @synthesize navigationBarTitle=_navigationBarTitle;
- (void).cxx_destruct;
- (void)drawContent:(struct CGRect)arg1;
- (void)setupContentView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

