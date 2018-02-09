//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTContactPickCellItem.h"

@class DTAvatarModel, DTContactPickPersonIdentifier, NSAttributedString, NSString;

@interface DTContactSearchPickCellItem : DTContactPickCellItem
{
    NSString *_name;
    NSAttributedString *_nameWithAttribute;
    NSString *_detailText;
    NSAttributedString *_detailTextWithAttribute;
    NSString *_middleText;
    DTAvatarModel *_avatarModel;
    DTContactPickPersonIdentifier *_identifier;
    CDUnknownBlockType _cellDidSelect;
}

+ (id)itemForColleagueWithUid:(long long)arg1 name:(id)arg2 middleText:(id)arg3 description:(id)arg4 avatarModel:(id)arg5;
@property(copy, nonatomic) CDUnknownBlockType cellDidSelect; // @synthesize cellDidSelect=_cellDidSelect;
@property(retain, nonatomic) DTContactPickPersonIdentifier *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) DTAvatarModel *avatarModel; // @synthesize avatarModel=_avatarModel;
@property(copy, nonatomic) NSString *middleText; // @synthesize middleText=_middleText;
@property(copy, nonatomic) NSAttributedString *detailTextWithAttribute; // @synthesize detailTextWithAttribute=_detailTextWithAttribute;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSAttributedString *nameWithAttribute; // @synthesize nameWithAttribute=_nameWithAttribute;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (unsigned long long)style;
- (id)reuseIdentifier;
- (id)cellForItem;
- (id)init;

@end

