//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface WKIDLIDLMessageStatusService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)updateAtMeStatus:(id)arg1 callback:(id)arg2;
- (void)updateToView:(id)arg1 messageId:(id)arg2 callback:(id)arg3;
- (void)updatePDCStatus:(id)arg1 conversationId:(id)arg2 status:(id)arg3 callback:(id)arg4;
- (void)updateToRead:(id)arg1 callback:(id)arg2;

@end

