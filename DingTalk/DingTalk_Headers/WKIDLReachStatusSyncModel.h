//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString, WKIDLServiceContextModel;

@interface WKIDLReachStatusSyncModel : Marshal
{
    NSString *_domain;
    NSNumber *_openId;
    NSString *_deviceId;
    NSString *_deviceType;
    NSArray *_reachStatusItemList;
    WKIDLServiceContextModel *_serviceContext;
}

@property(retain, nonatomic) WKIDLServiceContextModel *serviceContext; // @synthesize serviceContext=_serviceContext;
@property(copy, nonatomic) NSArray *reachStatusItemList; // @synthesize reachStatusItemList=_reachStatusItemList;
@property(copy, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSNumber *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

