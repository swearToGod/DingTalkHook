//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@interface DTCallTypeRspModel : Marshal
{
    _Bool _directCall;
    NSArray *_callTypeList;
    NSString *_cause;
    NSDictionary *_causeMap;
    NSArray *_preventList;
    NSArray *_lowVerList;
    NSString *_stateCode;
    NSString *_calleeNumber;
    NSDictionary *_netStatusMap;
    NSNumber *_recommendType;
    NSArray *_bizCallNumInfos;
    NSString *_recommendText;
    NSString *_jumpText;
    NSString *_jumpUrl;
    NSDictionary *_actMap;
}

@property(copy, nonatomic) NSDictionary *actMap; // @synthesize actMap=_actMap;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *jumpText; // @synthesize jumpText=_jumpText;
@property(copy, nonatomic) NSString *recommendText; // @synthesize recommendText=_recommendText;
@property(copy, nonatomic) NSArray *bizCallNumInfos; // @synthesize bizCallNumInfos=_bizCallNumInfos;
@property(retain, nonatomic) NSNumber *recommendType; // @synthesize recommendType=_recommendType;
@property(copy, nonatomic) NSDictionary *netStatusMap; // @synthesize netStatusMap=_netStatusMap;
@property(nonatomic) _Bool directCall; // @synthesize directCall=_directCall;
@property(copy, nonatomic) NSString *calleeNumber; // @synthesize calleeNumber=_calleeNumber;
@property(copy, nonatomic) NSString *stateCode; // @synthesize stateCode=_stateCode;
@property(copy, nonatomic) NSArray *lowVerList; // @synthesize lowVerList=_lowVerList;
@property(copy, nonatomic) NSArray *preventList; // @synthesize preventList=_preventList;
@property(copy, nonatomic) NSDictionary *causeMap; // @synthesize causeMap=_causeMap;
@property(copy, nonatomic) NSString *cause; // @synthesize cause=_cause;
@property(copy, nonatomic) NSArray *callTypeList; // @synthesize callTypeList=_callTypeList;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

