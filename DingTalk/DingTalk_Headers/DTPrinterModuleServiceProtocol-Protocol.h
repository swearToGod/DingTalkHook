//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController;

@protocol DTPrinterModuleServiceProtocol <NSObject>
- (_Bool)isPrintEntryVisiable:(_Bool)arg1 extension:(NSString *)arg2;
- (_Bool)isAllowUserPrint;
- (_Bool)isFileSupportPrint:(NSString *)arg1;
- (UIViewController *)createPrintTaskListPage:(NSString *)arg1 serviceId:(NSString *)arg2;
- (UIViewController *)createPrintPreviewPage:(NSString *)arg1 mediaId:(NSString *)arg2;
- (UIViewController *)createPrintPreviewPage:(NSString *)arg1 spaceId:(long long)arg2 isEncrypt:(_Bool)arg3;
@end

