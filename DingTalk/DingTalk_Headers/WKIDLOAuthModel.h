//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface WKIDLOAuthModel : Marshal
{
    NSString *_accessToken;
    NSString *_refreshToken;
    NSNumber *_expertIn;
    NSString *_cmd;
    NSNumber *_openId;
}

@property(retain, nonatomic) NSNumber *openId; // @synthesize openId=_openId;
@property(copy, nonatomic) NSString *cmd; // @synthesize cmd=_cmd;
@property(retain, nonatomic) NSNumber *expertIn; // @synthesize expertIn=_expertIn;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

