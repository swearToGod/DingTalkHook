//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LWPDDLogMessage, NSString;
@protocol LWPDDLogger;

@protocol LWPDDLogFormatter <NSObject>
- (NSString *)formatLogMessage:(LWPDDLogMessage *)arg1;

@optional
- (void)willRemoveFromLogger:(id <LWPDDLogger>)arg1;
- (void)didAddToLogger:(id <LWPDDLogger>)arg1;
@end

