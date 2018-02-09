//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSDictionary, NSNumber, NSString;

@interface DTDetailQuotaModel : Marshal
{
    NSNumber *_callPersonalUsed;
    NSNumber *_callPersonalRemain;
    NSNumber *_callPubUsed;
    NSNumber *_callPubRemain;
    NSNumber *_dingFreeRemain;
    NSNumber *_dingPersonalRemain;
    NSNumber *_dingBuyRemain;
    NSNumber *_dingBuyTotal;
    NSNumber *_callBuyUsed;
    NSNumber *_callBuyRemain;
    NSNumber *_personLimit;
    NSNumber *_callBuyTotal;
    NSDictionary *_payAuthOrgIds;
    NSNumber *_callBuyTeleUsed;
    NSNumber *_callBuyTeleRemain;
    NSNumber *_callBuyTeleTotal;
    NSNumber *_callPubTotal;
    NSNumber *_personLimitTotal;
    NSNumber *_cloudCallRemain;
    NSNumber *_cloudCallTotal;
    NSNumber *_role;
    NSNumber *_saveMoney;
    NSString *_callUrl;
}

@property(copy, nonatomic) NSString *callUrl; // @synthesize callUrl=_callUrl;
@property(retain, nonatomic) NSNumber *saveMoney; // @synthesize saveMoney=_saveMoney;
@property(retain, nonatomic) NSNumber *role; // @synthesize role=_role;
@property(retain, nonatomic) NSNumber *cloudCallTotal; // @synthesize cloudCallTotal=_cloudCallTotal;
@property(retain, nonatomic) NSNumber *cloudCallRemain; // @synthesize cloudCallRemain=_cloudCallRemain;
@property(retain, nonatomic) NSNumber *personLimitTotal; // @synthesize personLimitTotal=_personLimitTotal;
@property(retain, nonatomic) NSNumber *callPubTotal; // @synthesize callPubTotal=_callPubTotal;
@property(retain, nonatomic) NSNumber *callBuyTeleTotal; // @synthesize callBuyTeleTotal=_callBuyTeleTotal;
@property(retain, nonatomic) NSNumber *callBuyTeleRemain; // @synthesize callBuyTeleRemain=_callBuyTeleRemain;
@property(retain, nonatomic) NSNumber *callBuyTeleUsed; // @synthesize callBuyTeleUsed=_callBuyTeleUsed;
@property(copy, nonatomic) NSDictionary *payAuthOrgIds; // @synthesize payAuthOrgIds=_payAuthOrgIds;
@property(retain, nonatomic) NSNumber *callBuyTotal; // @synthesize callBuyTotal=_callBuyTotal;
@property(retain, nonatomic) NSNumber *personLimit; // @synthesize personLimit=_personLimit;
@property(retain, nonatomic) NSNumber *callBuyRemain; // @synthesize callBuyRemain=_callBuyRemain;
@property(retain, nonatomic) NSNumber *callBuyUsed; // @synthesize callBuyUsed=_callBuyUsed;
@property(retain, nonatomic) NSNumber *dingBuyTotal; // @synthesize dingBuyTotal=_dingBuyTotal;
@property(retain, nonatomic) NSNumber *dingBuyRemain; // @synthesize dingBuyRemain=_dingBuyRemain;
@property(retain, nonatomic) NSNumber *dingPersonalRemain; // @synthesize dingPersonalRemain=_dingPersonalRemain;
@property(retain, nonatomic) NSNumber *dingFreeRemain; // @synthesize dingFreeRemain=_dingFreeRemain;
@property(retain, nonatomic) NSNumber *callPubRemain; // @synthesize callPubRemain=_callPubRemain;
@property(retain, nonatomic) NSNumber *callPubUsed; // @synthesize callPubUsed=_callPubUsed;
@property(retain, nonatomic) NSNumber *callPersonalRemain; // @synthesize callPersonalRemain=_callPersonalRemain;
@property(retain, nonatomic) NSNumber *callPersonalUsed; // @synthesize callPersonalUsed=_callPersonalUsed;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

