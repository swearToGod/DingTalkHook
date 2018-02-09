//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTIMAPIdentity, DTIMAPSession, NSString;

@interface DTIMAPAccount : NSObject
{
    _Bool _checkCertificate;
    _Bool _allowInvalidCertificate;
    unsigned short _port;
    int _authType;
    NSString *_host;
    NSString *_emailAccount;
    NSString *_password;
    double _timeoutDelay;
    long long _connectType;
    DTIMAPIdentity *_clientIdentity;
    DTIMAPSession *_session;
}

+ (id)appVersion;
@property(retain, nonatomic) DTIMAPSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool allowInvalidCertificate; // @synthesize allowInvalidCertificate=_allowInvalidCertificate;
@property(nonatomic) _Bool checkCertificate; // @synthesize checkCertificate=_checkCertificate;
@property(retain, nonatomic) DTIMAPIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(nonatomic) int authType; // @synthesize authType=_authType;
@property(nonatomic) long long connectType; // @synthesize connectType=_connectType;
@property(nonatomic) double timeoutDelay; // @synthesize timeoutDelay=_timeoutDelay;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *emailAccount; // @synthesize emailAccount=_emailAccount;
@property(nonatomic) unsigned short port; // @synthesize port=_port;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
- (void).cxx_destruct;
- (void)setupRequest:(id)arg1;
- (void)cancelAllRequests;
- (void)setupRequest:(id)arg1 forMailbox:(id)arg2;
- (id)folderWithPath:(id)arg1;
- (id)createFolderRequest:(id)arg1;
- (id)fetchAllFoldersRequest;
- (id)loginRequest;
- (id)init;

@end
