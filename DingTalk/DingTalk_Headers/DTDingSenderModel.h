//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTDingModel, NSNumber;

@interface DTDingSenderModel : Marshal
{
    DTDingModel *_dingModel;
    NSNumber *_dingRemainTime;
    NSNumber *_totalCount;
    NSNumber *_unConfirmCount;
    NSNumber *_status;
    NSNumber *_modelTypeInTopic;
}

@property(retain, nonatomic) NSNumber *modelTypeInTopic; // @synthesize modelTypeInTopic=_modelTypeInTopic;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(retain, nonatomic) NSNumber *unConfirmCount; // @synthesize unConfirmCount=_unConfirmCount;
@property(retain, nonatomic) NSNumber *totalCount; // @synthesize totalCount=_totalCount;
@property(retain, nonatomic) NSNumber *dingRemainTime; // @synthesize dingRemainTime=_dingRemainTime;
@property(retain, nonatomic) DTDingModel *dingModel; // @synthesize dingModel=_dingModel;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

