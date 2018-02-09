//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface DTContactRelation : NSObject
{
    _Bool _hasMangeRight;
    NSString *_identifier;
    long long _idType;
    long long _orgId;
    long long _orgType;
    NSString *_name;
    NSString *_orgName;
    NSArray *_orgRelations;
    id _model;
}

+ (id)relationWithIdentifier:(id)arg1 idType:(long long)arg2 orgId:(long long)arg3 name:(id)arg4 orgName:(id)arg5;
+ (id)relationWithIdentifier:(id)arg1 idType:(long long)arg2 orgId:(long long)arg3 name:(id)arg4;
+ (id)relationWithIdentifier:(id)arg1 idType:(long long)arg2 orgId:(long long)arg3;
@property(nonatomic) _Bool hasMangeRight; // @synthesize hasMangeRight=_hasMangeRight;
@property(retain, nonatomic) id model; // @synthesize model=_model;
@property(copy, nonatomic) NSArray *orgRelations; // @synthesize orgRelations=_orgRelations;
@property(copy, nonatomic) NSString *orgName; // @synthesize orgName=_orgName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long orgType; // @synthesize orgType=_orgType;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(nonatomic) long long idType; // @synthesize idType=_idType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)keyForAllSelected;

@end

