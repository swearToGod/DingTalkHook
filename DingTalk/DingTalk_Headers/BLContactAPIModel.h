//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLBaseAPIModel.h"

@class NSArray, NSSet, NSString;

@interface BLContactAPIModel : BLBaseAPIModel
{
    NSString *_email;
    NSString *_mobile;
    NSString *_name;
    NSString *_mailDisplayName;
    NSString *_pinYinName;
    NSString *_jianPinName;
    NSString *_remark;
    NSString *_avatarId;
    NSString *_uid;
    NSString *_phoneExt;
    NSSet *_extendList;
    NSSet *_aliases;
    long long _type;
    NSString *_defaultSendMail;
    NSArray *_popAccounts;
    NSArray *_smtpAccounts;
    NSArray *_friendDomains;
}

@property(retain, nonatomic) NSArray *friendDomains; // @synthesize friendDomains=_friendDomains;
@property(retain, nonatomic) NSArray *smtpAccounts; // @synthesize smtpAccounts=_smtpAccounts;
@property(retain, nonatomic) NSArray *popAccounts; // @synthesize popAccounts=_popAccounts;
@property(copy, nonatomic) NSString *defaultSendMail; // @synthesize defaultSendMail=_defaultSendMail;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSSet *aliases; // @synthesize aliases=_aliases;
@property(retain, nonatomic) NSSet *extendList; // @synthesize extendList=_extendList;
@property(copy, nonatomic) NSString *phoneExt; // @synthesize phoneExt=_phoneExt;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *jianPinName; // @synthesize jianPinName=_jianPinName;
@property(copy, nonatomic) NSString *pinYinName; // @synthesize pinYinName=_pinYinName;
@property(copy, nonatomic) NSString *mailDisplayName; // @synthesize mailDisplayName=_mailDisplayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

