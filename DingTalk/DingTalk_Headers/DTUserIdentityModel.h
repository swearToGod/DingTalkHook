//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTUserIdentityModel : Marshal
{
    _Bool _isDataComplete;
    _Bool _isActive;
    NSNumber *_uid;
    NSString *_staffId;
    NSNumber *_oid;
    NSString *_mobile;
    NSString *_mediaId;
    NSString *_displayName;
    NSNumber *_source;
    NSString *_dingTalkId;
    NSString *_email;
    NSNumber *_numberType;
}

@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) NSNumber *numberType; // @synthesize numberType=_numberType;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *dingTalkId; // @synthesize dingTalkId=_dingTalkId;
@property(nonatomic) _Bool isDataComplete; // @synthesize isDataComplete=_isDataComplete;
@property(retain, nonatomic) NSNumber *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSNumber *oid; // @synthesize oid=_oid;
@property(copy, nonatomic) NSString *staffId; // @synthesize staffId=_staffId;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

