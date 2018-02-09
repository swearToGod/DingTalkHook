//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTBotExtraModel, DTBotOrgModel, NSNumber, NSString;

@interface DTBotTemplateModel : Marshal
{
    NSNumber *_templateId;
    NSString *_name;
    NSString *_icon;
    NSString *_brief;
    NSString *_addURL;
    NSString *_previewMediaId;
    NSString *_dev;
    NSString *_sourceURL;
    NSString *_moreURL;
    NSString *_guideURL;
    NSString *_desc;
    NSString *_mobileGuideURL;
    NSString *_targetURL;
    NSNumber *_mobileSwitch;
    NSNumber *_function;
    NSString *_addBotURL;
    NSNumber *_templateType;
    DTBotOrgModel *_botOrg;
    NSString *_settingBotURL;
    NSNumber *_globalBotUid;
    NSNumber *_nameModify;
    NSNumber *_iconModify;
    NSNumber *_extraType;
    DTBotExtraModel *_botExtra;
}

@property(retain, nonatomic) DTBotExtraModel *botExtra; // @synthesize botExtra=_botExtra;
@property(retain, nonatomic) NSNumber *extraType; // @synthesize extraType=_extraType;
@property(retain, nonatomic) NSNumber *iconModify; // @synthesize iconModify=_iconModify;
@property(retain, nonatomic) NSNumber *nameModify; // @synthesize nameModify=_nameModify;
@property(retain, nonatomic) NSNumber *globalBotUid; // @synthesize globalBotUid=_globalBotUid;
@property(copy, nonatomic) NSString *settingBotURL; // @synthesize settingBotURL=_settingBotURL;
@property(retain, nonatomic) DTBotOrgModel *botOrg; // @synthesize botOrg=_botOrg;
@property(retain, nonatomic) NSNumber *templateType; // @synthesize templateType=_templateType;
@property(copy, nonatomic) NSString *addBotURL; // @synthesize addBotURL=_addBotURL;
@property(retain, nonatomic) NSNumber *function; // @synthesize function=_function;
@property(retain, nonatomic) NSNumber *mobileSwitch; // @synthesize mobileSwitch=_mobileSwitch;
@property(copy, nonatomic) NSString *targetURL; // @synthesize targetURL=_targetURL;
@property(copy, nonatomic) NSString *mobileGuideURL; // @synthesize mobileGuideURL=_mobileGuideURL;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *guideURL; // @synthesize guideURL=_guideURL;
@property(copy, nonatomic) NSString *moreURL; // @synthesize moreURL=_moreURL;
@property(copy, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(copy, nonatomic) NSString *dev; // @synthesize dev=_dev;
@property(copy, nonatomic) NSString *previewMediaId; // @synthesize previewMediaId=_previewMediaId;
@property(copy, nonatomic) NSString *addURL; // @synthesize addURL=_addURL;
@property(copy, nonatomic) NSString *brief; // @synthesize brief=_brief;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *templateId; // @synthesize templateId=_templateId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

