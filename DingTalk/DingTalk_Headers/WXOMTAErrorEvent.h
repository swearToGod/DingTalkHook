//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXOMTAEvent.h"

#import "WXOMTAEventProtocol-Protocol.h"

@class NSString;

@interface WXOMTAErrorEvent : WXOMTAEvent <WXOMTAEventProtocol>
{
    unsigned int _attr;
    NSString *_error;
    NSString *_availableMemory;
    NSString *_freeDiskSpace;
    NSString *_processName;
}

@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *freeDiskSpace; // @synthesize freeDiskSpace=_freeDiskSpace;
@property(copy, nonatomic) NSString *availableMemory; // @synthesize availableMemory=_availableMemory;
@property unsigned int attr; // @synthesize attr=_attr;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)init;
- (void)encode:(id)arg1;
- (int)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

