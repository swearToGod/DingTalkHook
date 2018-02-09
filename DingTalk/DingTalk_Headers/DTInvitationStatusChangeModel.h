//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber;

@interface DTInvitationStatusChangeModel : Marshal
{
    NSNumber *_dingId;
    NSNumber *_operateUid;
    NSNumber *_oldStatus;
    NSNumber *_currentStatus;
    NSNumber *_statusChangeTime;
    NSNumber *_positiveStatusCount;
    NSNumber *_unResponseStatusCount;
    NSNumber *_negativeStatusCount;
    NSNumber *_modelTypeInTopic;
    NSNumber *_checkedInCount;
    NSNumber *_uncheckedCount;
}

@property(retain, nonatomic) NSNumber *uncheckedCount; // @synthesize uncheckedCount=_uncheckedCount;
@property(retain, nonatomic) NSNumber *checkedInCount; // @synthesize checkedInCount=_checkedInCount;
@property(retain, nonatomic) NSNumber *modelTypeInTopic; // @synthesize modelTypeInTopic=_modelTypeInTopic;
@property(retain, nonatomic) NSNumber *negativeStatusCount; // @synthesize negativeStatusCount=_negativeStatusCount;
@property(retain, nonatomic) NSNumber *unResponseStatusCount; // @synthesize unResponseStatusCount=_unResponseStatusCount;
@property(retain, nonatomic) NSNumber *positiveStatusCount; // @synthesize positiveStatusCount=_positiveStatusCount;
@property(retain, nonatomic) NSNumber *statusChangeTime; // @synthesize statusChangeTime=_statusChangeTime;
@property(retain, nonatomic) NSNumber *currentStatus; // @synthesize currentStatus=_currentStatus;
@property(retain, nonatomic) NSNumber *oldStatus; // @synthesize oldStatus=_oldStatus;
@property(retain, nonatomic) NSNumber *operateUid; // @synthesize operateUid=_operateUid;
@property(retain, nonatomic) NSNumber *dingId; // @synthesize dingId=_dingId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

