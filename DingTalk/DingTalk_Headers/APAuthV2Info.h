//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface APAuthV2Info : NSObject
{
    NSString *_apiName;
    NSString *_appName;
    NSString *_appID;
    NSString *_bizType;
    NSString *_pid;
    NSString *_productID;
    NSString *_scope;
    NSString *_targetID;
    NSString *_authType;
    NSString *_signDate;
    NSString *_service;
}

@property(retain) NSString *service; // @synthesize service=_service;
@property(retain) NSString *signDate; // @synthesize signDate=_signDate;
@property(retain) NSString *authType; // @synthesize authType=_authType;
@property(retain) NSString *targetID; // @synthesize targetID=_targetID;
@property(retain) NSString *scope; // @synthesize scope=_scope;
@property(retain) NSString *productID; // @synthesize productID=_productID;
@property(retain) NSString *pid; // @synthesize pid=_pid;
@property(retain) NSString *bizType; // @synthesize bizType=_bizType;
@property(retain) NSString *appID; // @synthesize appID=_appID;
@property(retain) NSString *appName; // @synthesize appName=_appName;
@property(retain) NSString *apiName; // @synthesize apiName=_apiName;
- (void).cxx_destruct;
- (id)description;

@end

