//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;
@protocol HPDNSSDRegistrationDelegate;

@interface HPDNSSDRegistration : NSObject
{
    NSString *_domain;
    NSString *_type;
    NSString *_name;
    NSString *_host;
    unsigned long long _port;
    NSDictionary *_txtRecord;
    id <HPDNSSDRegistrationDelegate> _delegate;
    NSString *_registeredDomain;
    NSString *_registeredName;
    struct _DNSServiceRef_t *_sdRef;
}

@property struct _DNSServiceRef_t *sdRef; // @synthesize sdRef=_sdRef;
@property(copy) NSString *registeredName; // @synthesize registeredName=_registeredName;
@property(copy) NSString *registeredDomain; // @synthesize registeredDomain=_registeredDomain;
@property id <HPDNSSDRegistrationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSDictionary *txtRecord; // @synthesize txtRecord=_txtRecord;
@property(readonly) unsigned long long port; // @synthesize port=_port;
@property(readonly, copy) NSString *host; // @synthesize host=_host;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;
- (void)stop;
- (void)stopWithError:(id)arg1 notify:(_Bool)arg2;
- (void)start;
- (void)didUnregisterWithDomain:(id)arg1 name:(id)arg2;
- (void)didRegisterWithDomain:(id)arg1 name:(id)arg2;
- (void)dealloc;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 host:(id)arg4 port:(unsigned long long)arg5 txtRecord:(id)arg6;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(unsigned long long)arg4;

@end

