//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class NSString, UIColor, UIFont;

@interface DTImageCellItem : DTBaseCellItem
{
    NSString *_title;
    UIFont *_titleFont;
    UIColor *_titleColor;
    NSString *_imageMediaId;
}

@property(copy, nonatomic) NSString *imageMediaId; // @synthesize imageMediaId=_imageMediaId;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)cellForItem;
- (id)reuseIdentifier;

@end

