//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTContactItem, DTDepartment, DTEnterpriseCard, NSString;

@interface CalendarMemberItem : NSObject
{
    DTContactItem *_contactItem;
    DTEnterpriseCard *_enterpriseCard;
    DTDepartment *_department;
    NSString *_actionURL;
}

@property(copy, nonatomic) NSString *actionURL; // @synthesize actionURL=_actionURL;
@property(retain, nonatomic) DTDepartment *department; // @synthesize department=_department;
@property(retain, nonatomic) DTEnterpriseCard *enterpriseCard; // @synthesize enterpriseCard=_enterpriseCard;
@property(retain, nonatomic) DTContactItem *contactItem; // @synthesize contactItem=_contactItem;
- (void).cxx_destruct;

@end

