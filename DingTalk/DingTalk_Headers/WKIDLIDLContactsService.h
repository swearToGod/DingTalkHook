//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SClient.h"

@interface WKIDLIDLContactsService : SClient
{
}

+ (id)_appname__;
+ (id)_serviceKey__;
- (void)isContacts:(id)arg1 mobile:(id)arg2 callback:(id)arg3;
- (void)fireProfileCancel:(id)arg1 noticeType:(id)arg2 callback:(id)arg3;
- (void)fireProfileActive:(id)arg1 noticeType:(id)arg2 callback:(id)arg3;
- (void)fireProfileChange:(id)arg1 noticeType:(id)arg2 callback:(id)arg3;
- (void)getContactInfos:(id)arg1 version:(id)arg2 count:(id)arg3 callback:(id)arg4;
- (void)serverAdd:(id)arg1 contactsList:(id)arg2 callback:(id)arg3;
- (void)serverUpload:(id)arg1 contactsList:(id)arg2 callback:(id)arg3;
- (void)syncAdd:(id)arg1 contactsList:(id)arg2 defaultRegion:(id)arg3 callback:(id)arg4;
- (void)syncUpload:(id)arg1 contactsList:(id)arg2 defaultRegion:(id)arg3 callback:(id)arg4;
- (void)update:(id)arg1 contactsList:(id)arg2 defaultRegion:(id)arg3 callback:(id)arg4;
- (void)delete:(id)arg1 contactsList:(id)arg2 defaultRegion:(id)arg3 callback:(id)arg4;
- (void)add:(id)arg1 contactsList:(id)arg2 defaultRegion:(id)arg3 callback:(id)arg4;
- (void)upload:(id)arg1 contactsList:(id)arg2 defaultRegion:(id)arg3 callback:(id)arg4;

@end

