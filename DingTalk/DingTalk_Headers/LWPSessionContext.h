//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate, NSString, WTLSocketSession;

@interface LWPSessionContext : NSObject
{
    WTLSocketSession *_session;
    long long _version;
    _Bool _isAuthed;
}

+ (id)contextWithSocketSession:(id)arg1 lwsVersion:(long long)arg2;
@property(retain, nonatomic) WTLSocketSession *session; // @synthesize session=_session;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) _Bool isAuthed; // @synthesize isAuthed=_isAuthed;
- (void).cxx_destruct;
- (id)description;
@property(retain, nonatomic) NSDate *disconnectDate;
- (_Bool)isSessionExpire;
@property(readonly, nonatomic) NSString *ddSid;
@property(readonly, nonatomic) NSString *sid;
- (id)init;

@end

