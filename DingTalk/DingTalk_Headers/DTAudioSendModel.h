//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTMessageSendModel.h"

@class NSArray, NSString;

@interface DTAudioSendModel : DTMessageSendModel
{
    NSString *_filePath;
    long long _duration;
    NSArray *_volumns;
}

+ (id)buildWithConversation:(id)arg1 filePath:(id)arg2 duration:(long long)arg3 volumns:(id)arg4 isEncrypt:(_Bool)arg5;
@property(retain, nonatomic) NSArray *volumns; // @synthesize volumns=_volumns;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (id)audioInfoDic;

@end

