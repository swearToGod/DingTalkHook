//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTAvatarModel, NSString;

@interface DTCEmailPopViewItem : NSObject
{
    NSString *_leftTitle;
    NSString *_rightTitle;
    NSString *_content;
    NSString *_subContent;
    DTAvatarModel *_avatarModel;
}

@property(retain, nonatomic) DTAvatarModel *avatarModel; // @synthesize avatarModel=_avatarModel;
@property(copy, nonatomic) NSString *subContent; // @synthesize subContent=_subContent;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(copy, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
- (void).cxx_destruct;

@end

