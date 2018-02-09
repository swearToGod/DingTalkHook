//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString, ResultError;

@interface DTSmartError : NSObject
{
    NSString *_serverErrorCode;
    NSError *_localError;
    NSString *_domain;
    NSString *_desc;
    NSDictionary *_userInfo;
    ResultError *_resultError;
}

+ (id)transferTip:(id)arg1 error:(id)arg2 defaultTip:(id)arg3;
+ (id)errorWithResultError:(id)arg1 cause:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) ResultError *resultError; // @synthesize resultError=_resultError;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSError *localError; // @synthesize localError=_localError;
@property(copy, nonatomic) NSString *serverErrorCode; // @synthesize serverErrorCode=_serverErrorCode;
- (void).cxx_destruct;
- (_Bool)isServerError;
- (_Bool)isLocalError;

@end

