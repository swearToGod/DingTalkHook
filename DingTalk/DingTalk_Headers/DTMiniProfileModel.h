//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTMiniProfileModel : Marshal
{
    NSNumber *_openid;
    NSNumber *_orgId;
    NSString *_name;
    NSString *_identity;
    NSArray *_tags;
    NSArray *_colleagueOrgIds;
    NSString *_clickUrl;
}

@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSArray *colleagueOrgIds; // @synthesize colleagueOrgIds=_colleagueOrgIds;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *orgId; // @synthesize orgId=_orgId;
@property(retain, nonatomic) NSNumber *openid; // @synthesize openid=_openid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

