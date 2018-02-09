//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCopying-Protocol.h"

@class DTFilterModel, NSDictionary, NSOrderedSet, NSString;

@interface DTContactPickModel : NSObject <NSCopying>
{
    _Bool _enableSingleSelection;
    _Bool _banDepartSelection;
    _Bool _departOnly;
    _Bool _enableCustomerPicker;
    _Bool _enableEnterprisePicker;
    _Bool _enableOrgRelationPicker;
    _Bool _enableLabelPicker;
    _Bool _enableFriendPicker;
    _Bool _enableMobileContactPicker;
    _Bool _quickEnterMobileContact;
    _Bool _enableExistingGroupPicker;
    _Bool _enableMyGroupPicker;
    _Bool _enableGroupMemberPicker;
    _Bool _enableUsualContactPicker;
    _Bool _enableExternalContactPicker;
    _Bool _enableSmartDevicePicker;
    _Bool _enableWeixinPicker;
    _Bool _enableSendAsMail;
    _Bool _enableAutoJumpDepart;
    _Bool _supportFixLine;
    _Bool _disabledSelectAll;
    NSOrderedSet *_selectedPersons;
    NSOrderedSet *_selectedDepartments;
    NSOrderedSet *_selectedConversations;
    unsigned long long _returnResultType;
    NSString *_customTitle;
    long long _toplimit;
    CDUnknownBlockType _pickDidCompleteBlock;
    CDUnknownBlockType _pickDidCompleteSortedBlock;
    CDUnknownBlockType _pickDidCompletedWithConversationAndPerson;
    CDUnknownBlockType _conversationDidPickBlock;
    CDUnknownBlockType _pickDidCancelBlock;
    CDUnknownBlockType _pickOverToplimit;
    CDUnknownBlockType _checkPickingPersonsAvaiableBlock;
    NSString *_tip;
    NSOrderedSet *_hiddenPersons;
    NSOrderedSet *_disablePersons;
    NSOrderedSet *_requiredPersons;
    NSOrderedSet *_disableDepartments;
    NSOrderedSet *_requiredDepartments;
    NSOrderedSet *_disableConversations;
    NSOrderedSet *_requiredConversations;
    long long _orgId;
    DTFilterModel *_filter;
    NSString *_utKeyPrefix;
    NSDictionary *_utArgs;
}

+ (id)stringSetWithNumberArray:(id)arg1;
+ (id)stringSetWithNumberSet:(id)arg1;
@property(copy, nonatomic) NSDictionary *utArgs; // @synthesize utArgs=_utArgs;
@property(copy, nonatomic) NSString *utKeyPrefix; // @synthesize utKeyPrefix=_utKeyPrefix;
@property(nonatomic) _Bool disabledSelectAll; // @synthesize disabledSelectAll=_disabledSelectAll;
@property(nonatomic) _Bool supportFixLine; // @synthesize supportFixLine=_supportFixLine;
@property(retain, nonatomic) DTFilterModel *filter; // @synthesize filter=_filter;
@property(nonatomic) _Bool enableAutoJumpDepart; // @synthesize enableAutoJumpDepart=_enableAutoJumpDepart;
@property(nonatomic) long long orgId; // @synthesize orgId=_orgId;
@property(nonatomic) _Bool enableSendAsMail; // @synthesize enableSendAsMail=_enableSendAsMail;
@property(nonatomic) _Bool enableWeixinPicker; // @synthesize enableWeixinPicker=_enableWeixinPicker;
@property(nonatomic) _Bool enableSmartDevicePicker; // @synthesize enableSmartDevicePicker=_enableSmartDevicePicker;
@property(nonatomic) _Bool enableExternalContactPicker; // @synthesize enableExternalContactPicker=_enableExternalContactPicker;
@property(nonatomic) _Bool enableUsualContactPicker; // @synthesize enableUsualContactPicker=_enableUsualContactPicker;
@property(nonatomic) _Bool enableGroupMemberPicker; // @synthesize enableGroupMemberPicker=_enableGroupMemberPicker;
@property(nonatomic) _Bool enableMyGroupPicker; // @synthesize enableMyGroupPicker=_enableMyGroupPicker;
@property(nonatomic) _Bool enableExistingGroupPicker; // @synthesize enableExistingGroupPicker=_enableExistingGroupPicker;
@property(nonatomic) _Bool quickEnterMobileContact; // @synthesize quickEnterMobileContact=_quickEnterMobileContact;
@property(nonatomic) _Bool enableMobileContactPicker; // @synthesize enableMobileContactPicker=_enableMobileContactPicker;
@property(nonatomic) _Bool enableFriendPicker; // @synthesize enableFriendPicker=_enableFriendPicker;
@property(nonatomic) _Bool enableLabelPicker; // @synthesize enableLabelPicker=_enableLabelPicker;
@property(nonatomic) _Bool enableOrgRelationPicker; // @synthesize enableOrgRelationPicker=_enableOrgRelationPicker;
@property(nonatomic) _Bool enableEnterprisePicker; // @synthesize enableEnterprisePicker=_enableEnterprisePicker;
@property(nonatomic) _Bool enableCustomerPicker; // @synthesize enableCustomerPicker=_enableCustomerPicker;
@property(copy, nonatomic) NSOrderedSet *requiredConversations; // @synthesize requiredConversations=_requiredConversations;
@property(copy, nonatomic) NSOrderedSet *disableConversations; // @synthesize disableConversations=_disableConversations;
@property(copy, nonatomic) NSOrderedSet *requiredDepartments; // @synthesize requiredDepartments=_requiredDepartments;
@property(copy, nonatomic) NSOrderedSet *disableDepartments; // @synthesize disableDepartments=_disableDepartments;
@property(copy, nonatomic) NSOrderedSet *requiredPersons; // @synthesize requiredPersons=_requiredPersons;
@property(copy, nonatomic) NSOrderedSet *disablePersons; // @synthesize disablePersons=_disablePersons;
@property(copy, nonatomic) NSOrderedSet *hiddenPersons; // @synthesize hiddenPersons=_hiddenPersons;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(copy, nonatomic) CDUnknownBlockType checkPickingPersonsAvaiableBlock; // @synthesize checkPickingPersonsAvaiableBlock=_checkPickingPersonsAvaiableBlock;
@property(copy, nonatomic) CDUnknownBlockType pickOverToplimit; // @synthesize pickOverToplimit=_pickOverToplimit;
@property(copy, nonatomic) CDUnknownBlockType pickDidCancelBlock; // @synthesize pickDidCancelBlock=_pickDidCancelBlock;
@property(copy, nonatomic) CDUnknownBlockType conversationDidPickBlock; // @synthesize conversationDidPickBlock=_conversationDidPickBlock;
@property(copy, nonatomic) CDUnknownBlockType pickDidCompletedWithConversationAndPerson; // @synthesize pickDidCompletedWithConversationAndPerson=_pickDidCompletedWithConversationAndPerson;
@property(copy, nonatomic) CDUnknownBlockType pickDidCompleteSortedBlock; // @synthesize pickDidCompleteSortedBlock=_pickDidCompleteSortedBlock;
@property(copy, nonatomic) CDUnknownBlockType pickDidCompleteBlock; // @synthesize pickDidCompleteBlock=_pickDidCompleteBlock;
@property(nonatomic) long long toplimit; // @synthesize toplimit=_toplimit;
@property(nonatomic) _Bool departOnly; // @synthesize departOnly=_departOnly;
@property(nonatomic) _Bool banDepartSelection; // @synthesize banDepartSelection=_banDepartSelection;
@property(nonatomic) _Bool enableSingleSelection; // @synthesize enableSingleSelection=_enableSingleSelection;
@property(copy, nonatomic) NSString *customTitle; // @synthesize customTitle=_customTitle;
@property(nonatomic) unsigned long long returnResultType; // @synthesize returnResultType=_returnResultType;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)recordUTWithSuffix:(id)arg1;
@property(copy, nonatomic) NSOrderedSet *selectedConversations; // @synthesize selectedConversations=_selectedConversations;
@property(copy, nonatomic) NSOrderedSet *selectedDepartments; // @synthesize selectedDepartments=_selectedDepartments;
@property(copy, nonatomic) NSOrderedSet *selectedPersons; // @synthesize selectedPersons=_selectedPersons;
- (id)init;
@property(nonatomic) _Bool showChannelFocusStates;

@end

