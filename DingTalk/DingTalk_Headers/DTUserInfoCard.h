//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTUserInfoCard : Marshal
{
    _Bool _isExtContact;
    _Bool _callWorkMobile;
    NSNumber *_uid;
    NSString *_nickName;
    NSString *_orgName;
    NSArray *_labelList;
    NSString *_title;
}

@property(nonatomic) _Bool callWorkMobile; // @synthesize callWorkMobile=_callWorkMobile;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *labelList; // @synthesize labelList=_labelList;
@property(nonatomic) _Bool isExtContact; // @synthesize isExtContact=_isExtContact;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

