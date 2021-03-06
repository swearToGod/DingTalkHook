//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString, UIImage;

@interface DTAlphaSettingViewModel : NSObject
{
    NSAttributedString *_title;
    UIImage *_titleImage;
    NSAttributedString *_detail;
    UIImage *_image;
    NSAttributedString *_additionalInfo;
    NSArray *_jumpModels;
    CDUnknownBlockType _jumpBlock;
}

@property(copy, nonatomic) CDUnknownBlockType jumpBlock; // @synthesize jumpBlock=_jumpBlock;
@property(retain, nonatomic) NSArray *jumpModels; // @synthesize jumpModels=_jumpModels;
@property(retain, nonatomic) NSAttributedString *additionalInfo; // @synthesize additionalInfo=_additionalInfo;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSAttributedString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UIImage *titleImage; // @synthesize titleImage=_titleImage;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

