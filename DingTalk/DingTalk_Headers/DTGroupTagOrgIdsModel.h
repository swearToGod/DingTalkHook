//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTGroupTagOrgIdsModel : Marshal
{
    NSNumber *_tag;
    NSArray *_innerOrgIds;
    NSArray *_ownerOrgIds;
    NSArray *_memberOrgIds;
}

@property(copy, nonatomic) NSArray *memberOrgIds; // @synthesize memberOrgIds=_memberOrgIds;
@property(copy, nonatomic) NSArray *ownerOrgIds; // @synthesize ownerOrgIds=_ownerOrgIds;
@property(copy, nonatomic) NSArray *innerOrgIds; // @synthesize innerOrgIds=_innerOrgIds;
@property(retain, nonatomic) NSNumber *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

