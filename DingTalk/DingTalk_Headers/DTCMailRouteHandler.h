//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BLFileBasedInterfaceRouteDelegate-Protocol.h"
#import "DTConversationSelectViewControllerDelegate-Protocol.h"
#import "MWPhotoBrowserDelegate-Protocol.h"

@class DTCSpaceMode, MWPhotoBrowser, NSString;
@protocol BLPhotoBrowserDataSource;

@interface DTCMailRouteHandler : NSObject <MWPhotoBrowserDelegate, DTConversationSelectViewControllerDelegate, BLFileBasedInterfaceRouteDelegate>
{
    _Bool _isSearchingEmail;
    DTCSpaceMode *_willTransmitSpaceMode;
    NSString *_willTransmitAttachmentURL;
    NSString *_willTransmitAttachmentName;
    id <BLPhotoBrowserDataSource> _photoDataSource;
    MWPhotoBrowser *_browser;
}

@property(nonatomic) __weak MWPhotoBrowser *browser; // @synthesize browser=_browser;
@property(nonatomic) __weak id <BLPhotoBrowserDataSource> photoDataSource; // @synthesize photoDataSource=_photoDataSource;
@property(copy, nonatomic) NSString *willTransmitAttachmentName; // @synthesize willTransmitAttachmentName=_willTransmitAttachmentName;
@property(copy, nonatomic) NSString *willTransmitAttachmentURL; // @synthesize willTransmitAttachmentURL=_willTransmitAttachmentURL;
@property(retain, nonatomic) DTCSpaceMode *willTransmitSpaceMode; // @synthesize willTransmitSpaceMode=_willTransmitSpaceMode;
@property(nonatomic) _Bool isSearchingEmail; // @synthesize isSearchingEmail=_isSearchingEmail;
- (void).cxx_destruct;
- (id)conversationSelectViewAttachmentDataForSend;
- (int)conversationSelectViewAttachmentType;
- (void)photoBrowserDownloadImageError:(id)arg1 errUserInfo:(id)arg2;
- (id)photoBrowser:(id)arg1 customMenusAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)openWebViewFromViewController:(id)arg1 withOpenUrl:(id)arg2;
- (void)openPhotoBrowserFromViewController:(id)arg1 withDataSource:(id)arg2;
- (void)saveAttachmentToSpace:(id)arg1 mailID:(id)arg2 fromVC:(id)arg3;
- (void)presentFolderChooserFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentFileChooserFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)presentContactInterfaceFromViewController:(id)arg1 forTransmitContent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)presentContactChooserFromViewController:(id)arg1 alreadySelected:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)presentCameraFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)presentPhotoLibraryFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)OnSendSuccess:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver;
- (void)addObserver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

