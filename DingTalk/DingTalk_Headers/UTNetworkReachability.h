//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CTTelephonyNetworkInfo;

@interface UTNetworkReachability : NSObject
{
    CTTelephonyNetworkInfo *_telephonyInfo;
    float _systemVersion;
    _Bool isLargeIOS7;
}

+ (_Bool)utDeviceSystemIsLargeIOS9;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (int)currentReachabilityStatus;
- (id)currentReachabilityStatusString;
- (struct __SCNetworkReachability *)createNetworkReachabilityRef;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

