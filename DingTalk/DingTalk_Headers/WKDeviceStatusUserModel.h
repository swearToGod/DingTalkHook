//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WKDeviceStatusUserModel : NSObject
{
    long long _deviceType;
    long long _status;
}

+ (id)userModelListFromIDLModelList:(id)arg1;
+ (id)userModelFromIDLModel:(id)arg1;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;

@end

