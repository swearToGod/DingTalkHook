//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class LWPQueueTimer;

@interface LWPSpeed : NSObject
{
    unsigned long long _lastSendBytesSum;
    unsigned long long _sendBytesSum;
    double _upSpeed;
    unsigned long long _lastRecvBytesSum;
    unsigned long long _recvBytesSum;
    double _downSpeed;
    LWPQueueTimer *_timer;
}

+ (id)sharedSpeed;
@property(retain, nonatomic) LWPQueueTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double downSpeed; // @synthesize downSpeed=_downSpeed;
@property unsigned long long recvBytesSum; // @synthesize recvBytesSum=_recvBytesSum;
@property unsigned long long lastRecvBytesSum; // @synthesize lastRecvBytesSum=_lastRecvBytesSum;
@property(nonatomic) double upSpeed; // @synthesize upSpeed=_upSpeed;
@property unsigned long long sendBytesSum; // @synthesize sendBytesSum=_sendBytesSum;
@property unsigned long long lastSendBytesSum; // @synthesize lastSendBytesSum=_lastSendBytesSum;
- (void).cxx_destruct;
- (void)calcDown:(unsigned long long)arg1;
- (void)calcUp:(unsigned long long)arg1;
- (void)reportSpeed;
- (id)convertFileSizeToString:(long long)arg1;
- (void)stopReport;
- (void)startReport;
- (id)init;

@end

