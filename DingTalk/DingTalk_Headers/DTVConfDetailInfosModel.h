//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTVConfDetailInfosModel : Marshal
{
    _Bool _enableDing;
    NSNumber *_callerId;
    NSString *_callerNick;
    NSString *_title;
    NSNumber *_startTime;
    NSNumber *_predDuration;
    NSNumber *_confDuration;
    NSNumber *_apmtStatus;
    NSString *_conferenceId;
    NSString *_conferencePin;
    NSString *_appointId;
    NSArray *_acceptCalleeIds;
    NSArray *_rejectCalleeIds;
    NSArray *_unreadCalleeIds;
    NSArray *_talkingCalleeIds;
    NSArray *_newjoinCalleeIds;
    NSNumber *_operateTime;
    NSArray *_calleeIds;
    NSArray *_calleeNicks;
    NSNumber *_vconfType;
    NSArray *_calleesStatus;
    NSNumber *_confCameraStatus;
    NSNumber *_confMicStatus;
}

@property(retain, nonatomic) NSNumber *confMicStatus; // @synthesize confMicStatus=_confMicStatus;
@property(retain, nonatomic) NSNumber *confCameraStatus; // @synthesize confCameraStatus=_confCameraStatus;
@property(copy, nonatomic) NSArray *calleesStatus; // @synthesize calleesStatus=_calleesStatus;
@property(retain, nonatomic) NSNumber *vconfType; // @synthesize vconfType=_vconfType;
@property(copy, nonatomic) NSArray *calleeNicks; // @synthesize calleeNicks=_calleeNicks;
@property(copy, nonatomic) NSArray *calleeIds; // @synthesize calleeIds=_calleeIds;
@property(nonatomic) _Bool enableDing; // @synthesize enableDing=_enableDing;
@property(retain, nonatomic) NSNumber *operateTime; // @synthesize operateTime=_operateTime;
@property(copy, nonatomic) NSArray *newjoinCalleeIds; // @synthesize newjoinCalleeIds=_newjoinCalleeIds;
@property(copy, nonatomic) NSArray *talkingCalleeIds; // @synthesize talkingCalleeIds=_talkingCalleeIds;
@property(copy, nonatomic) NSArray *unreadCalleeIds; // @synthesize unreadCalleeIds=_unreadCalleeIds;
@property(copy, nonatomic) NSArray *rejectCalleeIds; // @synthesize rejectCalleeIds=_rejectCalleeIds;
@property(copy, nonatomic) NSArray *acceptCalleeIds; // @synthesize acceptCalleeIds=_acceptCalleeIds;
@property(copy, nonatomic) NSString *appointId; // @synthesize appointId=_appointId;
@property(copy, nonatomic) NSString *conferencePin; // @synthesize conferencePin=_conferencePin;
@property(copy, nonatomic) NSString *conferenceId; // @synthesize conferenceId=_conferenceId;
@property(retain, nonatomic) NSNumber *apmtStatus; // @synthesize apmtStatus=_apmtStatus;
@property(retain, nonatomic) NSNumber *confDuration; // @synthesize confDuration=_confDuration;
@property(retain, nonatomic) NSNumber *predDuration; // @synthesize predDuration=_predDuration;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *callerNick; // @synthesize callerNick=_callerNick;
@property(retain, nonatomic) NSNumber *callerId; // @synthesize callerId=_callerId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end
