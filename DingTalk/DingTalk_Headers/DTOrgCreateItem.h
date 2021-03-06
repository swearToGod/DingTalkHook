//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTCellItem.h"

@class LIMBizUserIconModel;

@interface DTOrgCreateItem : DTCellItem
{
    _Bool _textFieldEnable;
    _Bool _inviteBtnShow;
    _Bool _editBtnShow;
    _Bool _editBtnSelected;
    _Bool _delBtnShow;
    LIMBizUserIconModel *_avatarModel;
    CDUnknownBlockType _editBlock;
    CDUnknownBlockType _deleteBlock;
    CDUnknownBlockType _inviteBlock;
}

+ (id)item;
@property(copy, nonatomic) CDUnknownBlockType inviteBlock; // @synthesize inviteBlock=_inviteBlock;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
@property(copy, nonatomic) CDUnknownBlockType editBlock; // @synthesize editBlock=_editBlock;
@property(nonatomic) _Bool delBtnShow; // @synthesize delBtnShow=_delBtnShow;
@property(nonatomic) _Bool editBtnSelected; // @synthesize editBtnSelected=_editBtnSelected;
@property(nonatomic) _Bool editBtnShow; // @synthesize editBtnShow=_editBtnShow;
@property(nonatomic) _Bool inviteBtnShow; // @synthesize inviteBtnShow=_inviteBtnShow;
@property(nonatomic) _Bool textFieldEnable; // @synthesize textFieldEnable=_textFieldEnable;
@property(retain, nonatomic) LIMBizUserIconModel *avatarModel; // @synthesize avatarModel=_avatarModel;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)cellForItem;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType inputIllegal;

@end

