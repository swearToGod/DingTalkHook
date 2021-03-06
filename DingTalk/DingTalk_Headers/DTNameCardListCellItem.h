//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class DTAvatarModel, DTBaseUserCellNameModel, DTIcon, NSString;

@interface DTNameCardListCellItem : DTBaseCellItem
{
    _Bool _isDingCard;
    _Bool _mobileVisiable;
    DTAvatarModel *_avatarModel;
    DTBaseUserCellNameModel *_nameModel;
    NSString *_mobile;
    NSString *_company;
    NSString *_remark;
    CDUnknownBlockType _opearationIconDidClick;
    DTIcon *_detailIcon;
    DTIcon *_companyIcon;
    DTIcon *_remarkIcon;
    DTIcon *_operationIcon;
    DTIcon *_dingCardIcon;
}

@property(retain, nonatomic) DTIcon *dingCardIcon; // @synthesize dingCardIcon=_dingCardIcon;
@property(retain, nonatomic) DTIcon *operationIcon; // @synthesize operationIcon=_operationIcon;
@property(retain, nonatomic) DTIcon *remarkIcon; // @synthesize remarkIcon=_remarkIcon;
@property(retain, nonatomic) DTIcon *companyIcon; // @synthesize companyIcon=_companyIcon;
@property(retain, nonatomic) DTIcon *detailIcon; // @synthesize detailIcon=_detailIcon;
@property(copy, nonatomic) CDUnknownBlockType opearationIconDidClick; // @synthesize opearationIconDidClick=_opearationIconDidClick;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *company; // @synthesize company=_company;
@property(nonatomic) _Bool mobileVisiable; // @synthesize mobileVisiable=_mobileVisiable;
@property(copy, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(nonatomic) _Bool isDingCard; // @synthesize isDingCard=_isDingCard;
@property(retain, nonatomic) DTBaseUserCellNameModel *nameModel; // @synthesize nameModel=_nameModel;
@property(retain, nonatomic) DTAvatarModel *avatarModel; // @synthesize avatarModel=_avatarModel;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (double)cellHeight;
- (id)cellForItem;

@end

