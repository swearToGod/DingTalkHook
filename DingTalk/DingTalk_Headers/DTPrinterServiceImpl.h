//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTPrinterModuleServiceProtocol-Protocol.h"

@class NSString;

@interface DTPrinterServiceImpl : NSObject <DTPrinterModuleServiceProtocol>
{
}

- (_Bool)isPrintEntryVisiable:(_Bool)arg1 extension:(id)arg2;
- (_Bool)isAllowUserPrint;
- (_Bool)isFileSupportPrint:(id)arg1;
- (id)createPrintTaskListPage:(id)arg1 serviceId:(id)arg2;
- (id)createPrintPreviewPage:(id)arg1 mediaId:(id)arg2;
- (id)createPrintPreviewPage:(id)arg1 spaceId:(long long)arg2 isEncrypt:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

