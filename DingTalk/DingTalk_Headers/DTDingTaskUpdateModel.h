//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTDingTaskUpdateModel : Marshal
{
    NSNumber *_dingId;
    NSNumber *_contentType;
    NSString *_content;
    NSArray *_attachments;
    NSNumber *_blockingTime;
    NSNumber *_taskRemindTime;
    NSArray *_addedExecutorUids;
    NSArray *_addedCcUids;
    NSNumber *_status;
    NSArray *_executorUids;
    NSArray *_ccUids;
    NSNumber *_remindType;
}

@property(retain, nonatomic) NSNumber *remindType; // @synthesize remindType=_remindType;
@property(copy, nonatomic) NSArray *ccUids; // @synthesize ccUids=_ccUids;
@property(copy, nonatomic) NSArray *executorUids; // @synthesize executorUids=_executorUids;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *addedCcUids; // @synthesize addedCcUids=_addedCcUids;
@property(copy, nonatomic) NSArray *addedExecutorUids; // @synthesize addedExecutorUids=_addedExecutorUids;
@property(retain, nonatomic) NSNumber *taskRemindTime; // @synthesize taskRemindTime=_taskRemindTime;
@property(retain, nonatomic) NSNumber *blockingTime; // @synthesize blockingTime=_blockingTime;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSNumber *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSNumber *dingId; // @synthesize dingId=_dingId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

