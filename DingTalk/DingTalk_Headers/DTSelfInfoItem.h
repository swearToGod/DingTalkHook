//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LIMBizUserIconModel, NSAttributedString, NSString;

@interface DTSelfInfoItem : NSObject
{
    _Bool _specialLabelHidden;
    _Bool _indicatorHidden;
    NSString *_title;
    NSString *_detail;
    LIMBizUserIconModel *_icon;
    NSString *_iconImage;
    CDUnknownBlockType _selectAction;
    CDUnknownBlockType _iconClickAction;
    NSAttributedString *_attributedDetail;
}

+ (id)initItemWithTitle:(id)arg1 detail:(id)arg2;
+ (id)initItemWithTitle:(id)arg1 detail:(id)arg2 icon:(id)arg3 indicatorHidden:(_Bool)arg4 selectAction:(CDUnknownBlockType)arg5;
+ (id)initItemWithTitle:(id)arg1 detail:(id)arg2 icon:(id)arg3 specialLabelHidden:(_Bool)arg4 indicatorHidden:(_Bool)arg5 selectAction:(CDUnknownBlockType)arg6;
@property(copy, nonatomic) NSAttributedString *attributedDetail; // @synthesize attributedDetail=_attributedDetail;
@property(copy, nonatomic) CDUnknownBlockType iconClickAction; // @synthesize iconClickAction=_iconClickAction;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
@property(nonatomic) _Bool indicatorHidden; // @synthesize indicatorHidden=_indicatorHidden;
@property(nonatomic) _Bool specialLabelHidden; // @synthesize specialLabelHidden=_specialLabelHidden;
@property(copy, nonatomic) NSString *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) LIMBizUserIconModel *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

