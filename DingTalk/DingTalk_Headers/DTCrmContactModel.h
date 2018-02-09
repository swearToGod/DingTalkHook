//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber, NSString;

@interface DTCrmContactModel : Marshal
{
    NSString *_contactId;
    NSNumber *_uid;
    NSString *_avatarMediaId;
    NSString *_name;
    NSString *_customerName;
    NSString *_stateCode;
    NSString *_mobile;
    NSArray *_contactExtPropertyList;
    NSString *_customerId;
    NSString *_valueData;
    NSString *_formData;
}

@property(copy, nonatomic) NSString *formData; // @synthesize formData=_formData;
@property(copy, nonatomic) NSString *valueData; // @synthesize valueData=_valueData;
@property(copy, nonatomic) NSString *customerId; // @synthesize customerId=_customerId;
@property(copy, nonatomic) NSArray *contactExtPropertyList; // @synthesize contactExtPropertyList=_contactExtPropertyList;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(copy, nonatomic) NSString *stateCode; // @synthesize stateCode=_stateCode;
@property(copy, nonatomic) NSString *customerName; // @synthesize customerName=_customerName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *avatarMediaId; // @synthesize avatarMediaId=_avatarMediaId;
@property(retain, nonatomic) NSNumber *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *contactId; // @synthesize contactId=_contactId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

