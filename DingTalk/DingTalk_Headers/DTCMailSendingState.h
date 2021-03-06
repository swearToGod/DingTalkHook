//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class BLBaseTask, NSError, NSString;

@interface DTCMailSendingState : NSObject
{
    int _step;
    NSString *_mailUUID;
    NSString *_senderEmail;
    NSError *_lastError;
    BLBaseTask *_task;
}

@property(nonatomic) __weak BLBaseTask *task; // @synthesize task=_task;
@property(nonatomic) int step; // @synthesize step=_step;
@property(retain, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property(retain, nonatomic) NSString *senderEmail; // @synthesize senderEmail=_senderEmail;
@property(retain, nonatomic) NSString *mailUUID; // @synthesize mailUUID=_mailUUID;
- (void).cxx_destruct;
- (void)setSendBytes:(long long)arg1 andTotalBytes:(long long)arg2;

@end

