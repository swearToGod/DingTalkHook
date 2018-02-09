//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTWebViewController.h"

#import "DTSpaceOnlineDocWebViewController-Protocol.h"

@class DTBizCSpaceDentry, LANaviBarModel, LAWebViewContainer, NSDictionary, NSNumber, NSString, NSURL;

@interface DTSpaceOnlineDocWebViewController : DTWebViewController <DTSpaceOnlineDocWebViewController>
{
    long long _spaceId;
    NSString *_dentryId;
    DTBizCSpaceDentry *_dentry;
}

@property(retain, nonatomic) DTBizCSpaceDentry *dentry; // @synthesize dentry=_dentry;
@property(copy, nonatomic) NSString *dentryId; // @synthesize dentryId=_dentryId;
@property(nonatomic) long long spaceId; // @synthesize spaceId=_spaceId;
- (void).cxx_destruct;
- (void)onInviteEditorButtonTapped:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;

// Remaining properties
@property(nonatomic) _Bool autoOrientation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSURL *extInitialURL;
@property(copy, nonatomic) NSDictionary *extUserInfo;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideNavigationBar;
@property(readonly, nonatomic) NSURL *initialURL;
@property(copy, nonatomic) NSString *instanceId;
@property(nonatomic) _Bool isFirstPage;
@property(retain, nonatomic) LANaviBarModel *naviBarModel;
@property(nonatomic) long long openAppBizType;
@property(retain, nonatomic) NSNumber *presetAgentId;
@property(retain, nonatomic) NSNumber *presetAppId;
@property(copy, nonatomic) NSString *presetCorpId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) LAWebViewContainer *webContainer;

@end

