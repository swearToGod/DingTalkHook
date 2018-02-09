//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

#import "LVLiveInfoProtocol-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface DTLiveInfoModel : Marshal <LVLiveInfoProtocol>
{
    NSNumber *_anchorId;
    NSString *_liveUuid;
    NSString *_title;
    NSString *_coverUrl;
    NSString *_playUrl;
    NSString *_token;
    NSNumber *_datetime;
    NSNumber *_duration;
    NSString *_inputStreamUrl;
    NSNumber *_status;
    NSNumber *_isLandscape;
    NSNumber *_recordSize;
    NSNumber *_codeLevel;
    NSArray *_shareToCids;
    NSArray *_stoppedShareToCids;
}

@property(copy, nonatomic) NSArray *stoppedShareToCids; // @synthesize stoppedShareToCids=_stoppedShareToCids;
@property(copy, nonatomic) NSArray *shareToCids; // @synthesize shareToCids=_shareToCids;
@property(retain, nonatomic) NSNumber *codeLevel; // @synthesize codeLevel=_codeLevel;
@property(retain, nonatomic) NSNumber *recordSize; // @synthesize recordSize=_recordSize;
@property(retain, nonatomic) NSNumber *isLandscape; // @synthesize isLandscape=_isLandscape;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *inputStreamUrl; // @synthesize inputStreamUrl=_inputStreamUrl;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *datetime; // @synthesize datetime=_datetime;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *playUrl; // @synthesize playUrl=_playUrl;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *liveUuid; // @synthesize liveUuid=_liveUuid;
@property(retain, nonatomic) NSNumber *anchorId; // @synthesize anchorId=_anchorId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

