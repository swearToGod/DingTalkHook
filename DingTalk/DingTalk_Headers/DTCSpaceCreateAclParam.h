//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTCSpaceEamPolicyTypeModel, NSArray, NSNumber;

@interface DTCSpaceCreateAclParam : Marshal
{
    _Bool _readOnly;
    NSNumber *_spaceId;
    NSNumber *_folderId;
    DTCSpaceEamPolicyTypeModel *_policyType;
    NSArray *_members;
    NSNumber *_groupId;
}

@property(retain, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
@property(nonatomic) _Bool readOnly; // @synthesize readOnly=_readOnly;
@property(copy, nonatomic) NSArray *members; // @synthesize members=_members;
@property(retain, nonatomic) DTCSpaceEamPolicyTypeModel *policyType; // @synthesize policyType=_policyType;
@property(retain, nonatomic) NSNumber *folderId; // @synthesize folderId=_folderId;
@property(retain, nonatomic) NSNumber *spaceId; // @synthesize spaceId=_spaceId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

