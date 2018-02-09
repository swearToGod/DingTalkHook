//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SWTableViewCell.h"

@class DTBizCSpaceCoFolderModel, DTDentryChooserConfig, DTUserNameLabel, UIButton, UIImageView, UILabel, YYLabel;

@interface DTCSpaceCoFolderCell : SWTableViewCell
{
    _Bool _hideActionButton;
    DTDentryChooserConfig *_chooseConfig;
    CDUnknownBlockType _coFolderSettingBlock;
    UIImageView *_iconImageView;
    UIImageView *_redHotView;
    UILabel *_nameLabel;
    UIImageView *_authImageView;
    UILabel *_sizeLabel;
    DTUserNameLabel *_creatorLabel;
    YYLabel *_detailLabel;
    UIButton *_actionBtn;
    DTBizCSpaceCoFolderModel *_folderModel;
}

@property(retain, nonatomic) DTBizCSpaceCoFolderModel *folderModel; // @synthesize folderModel=_folderModel;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) YYLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) DTUserNameLabel *creatorLabel; // @synthesize creatorLabel=_creatorLabel;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UIImageView *authImageView; // @synthesize authImageView=_authImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *redHotView; // @synthesize redHotView=_redHotView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) CDUnknownBlockType coFolderSettingBlock; // @synthesize coFolderSettingBlock=_coFolderSettingBlock;
@property(retain, nonatomic) DTDentryChooserConfig *chooseConfig; // @synthesize chooseConfig=_chooseConfig;
@property(nonatomic) _Bool hideActionButton; // @synthesize hideActionButton=_hideActionButton;
- (void).cxx_destruct;
- (void)configCellWithModel:(id)arg1;
- (id)convertFileSizeToString:(long long)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setupConstraints;
- (void)actionEvent:(id)arg1;
- (id)rightButtons;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
