//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTCallManageBtnModel, NSString;

@interface DTCallManageCardTopModel : Marshal
{
    NSString *_title;
    NSString *_content;
    NSString *_icon;
    DTCallManageBtnModel *_btnModel;
}

@property(retain, nonatomic) DTCallManageBtnModel *btnModel; // @synthesize btnModel=_btnModel;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

