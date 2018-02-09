//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LWPDiagnoserTask.h"

#import "NSStreamDelegate-Protocol.h"

@class NSInputStream, NSOutputStream, NSString, NSTimer;

@interface LWPRawSocketDiagnoserTask : LWPDiagnoserTask <NSStreamDelegate>
{
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    _Bool _inputOpened;
    _Bool _outputOpened;
    _Bool _isConnected;
    NSTimer *_connectTimer;
}

@property(retain, nonatomic) NSTimer *connectTimer; // @synthesize connectTimer=_connectTimer;
- (void).cxx_destruct;
- (void)didConnectTimeout:(id)arg1;
- (void)startConnectTimer;
- (void)startDetect;
- (void)cleanup;
- (void)closeWithError:(id)arg1;
- (void)disconnect:(id)arg1;
- (void)didBroken:(id)arg1;
- (void)didConnectedFailed:(id)arg1;
- (void)onConnectd;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

