//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTUserDingStatusModel : Marshal
{
    NSArray *_dingIds;
    NSNumber *_userDingOldStatus;
    NSNumber *_userDingNewStatus;
    NSNumber *_modelTypeInTopic;
}

@property(retain, nonatomic) NSNumber *modelTypeInTopic; // @synthesize modelTypeInTopic=_modelTypeInTopic;
@property(retain, nonatomic) NSNumber *userDingNewStatus; // @synthesize userDingNewStatus=_userDingNewStatus;
@property(retain, nonatomic) NSNumber *userDingOldStatus; // @synthesize userDingOldStatus=_userDingOldStatus;
@property(copy, nonatomic) NSArray *dingIds; // @synthesize dingIds=_dingIds;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

