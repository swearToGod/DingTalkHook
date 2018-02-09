//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UTMCConfigInterfaceUpdate-Protocol.h"

@class NSString;

@interface UTMCSession : NSObject <UTMCConfigInterfaceUpdate>
{
    long long lastInBackgroundTime;
    NSString *_umid_switch;
    int umidRandomNum;
    NSString *_sessionID;
    long long _index;
    long long _index2202;
    NSString *_nick;
    NSString *_longNick;
    NSString *_userID;
    NSString *_tpkTTID;
    NSString *_longUserID;
    long long _sessionRefreshTime;
    long long _localSeverTimeDiff;
    NSString *_umid;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedUTMCSession;
@property(retain, nonatomic) NSString *umid; // @synthesize umid=_umid;
@property(readonly) long long localSeverTimeDiff; // @synthesize localSeverTimeDiff=_localSeverTimeDiff;
@property(nonatomic) long long sessionRefreshTime; // @synthesize sessionRefreshTime=_sessionRefreshTime;
@property(copy, nonatomic) NSString *longUserID; // @synthesize longUserID=_longUserID;
@property(copy, nonatomic) NSString *tpkTTID; // @synthesize tpkTTID=_tpkTTID;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *longNick; // @synthesize longNick=_longNick;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property long long index2202; // @synthesize index2202=_index2202;
@property long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)updateSysConfigValue:(id)arg1 sysKey:(id)arg2;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (_Bool)vaild;
- (id)generateSessionID;
- (void)didEnterBackground;
- (void)updateSession;
- (id)adjustTimeStamp;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
