//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTSearchMicroAppModel : Marshal
{
    NSString *_id_;
    NSString *_code;
    NSString *_icon;
    NSString *_name;
    NSArray *_tags;
    NSArray *_labels;
    NSNumber *_commentScore;
    NSString *_providerOrgName;
    NSNumber *_createTime;
    NSNumber *_modifyTime;
    NSString *_jumpUrl;
}

@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSNumber *modifyTime; // @synthesize modifyTime=_modifyTime;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *providerOrgName; // @synthesize providerOrgName=_providerOrgName;
@property(retain, nonatomic) NSNumber *commentScore; // @synthesize commentScore=_commentScore;
@property(copy, nonatomic) NSArray *labels; // @synthesize labels=_labels;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
@property(copy, nonatomic) NSString *id_; // @synthesize id_=_id_;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

