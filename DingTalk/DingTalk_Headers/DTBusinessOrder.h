//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTBusinessOrder : Marshal
{
    NSNumber *_appId;
    NSString *_title;
    NSString *_actText;
    NSString *_actPage;
    NSArray *_formList;
}

@property(copy, nonatomic) NSArray *formList; // @synthesize formList=_formList;
@property(copy, nonatomic) NSString *actPage; // @synthesize actPage=_actPage;
@property(copy, nonatomic) NSString *actText; // @synthesize actText=_actText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

