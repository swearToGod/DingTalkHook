//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTConversationSelectViewControllerDelegate-Protocol.h"
#import "DTDentryPickerDelegate-Protocol.h"
#import "DTFileBasedInterfaceRouteDelegate-Protocol.h"
#import "MWPhotoBrowserDelegate-Protocol.h"

@class DTCSpaceMode, DTCSpaceOperationProcessor, MWPhotoBrowser, NSString;
@protocol DTCSpacePhotoBrowserDataSource;

@interface DTCSpaceRouteHandler : NSObject <MWPhotoBrowserDelegate, DTConversationSelectViewControllerDelegate, DTDentryPickerDelegate, DTFileBasedInterfaceRouteDelegate>
{
    id <DTCSpacePhotoBrowserDataSource> _photoDataSource;
    MWPhotoBrowser *_browser;
    DTCSpaceMode *_modeWillSend;
    NSString *_utFrom;
    NSString *_spaceUTKey;
    CDUnknownBlockType _didCancelBlock;
    CDUnknownBlockType _didChooseDentryBlock;
    unsigned long long _menusTypeForPhotoBrowser;
    DTCSpaceOperationProcessor *_operationProcessor;
    long long _messageType;
}

@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(retain, nonatomic) DTCSpaceOperationProcessor *operationProcessor; // @synthesize operationProcessor=_operationProcessor;
@property(nonatomic) unsigned long long menusTypeForPhotoBrowser; // @synthesize menusTypeForPhotoBrowser=_menusTypeForPhotoBrowser;
@property(copy, nonatomic) CDUnknownBlockType didChooseDentryBlock; // @synthesize didChooseDentryBlock=_didChooseDentryBlock;
@property(copy, nonatomic) CDUnknownBlockType didCancelBlock; // @synthesize didCancelBlock=_didCancelBlock;
@property(retain, nonatomic) NSString *spaceUTKey; // @synthesize spaceUTKey=_spaceUTKey;
@property(retain, nonatomic) NSString *utFrom; // @synthesize utFrom=_utFrom;
@property(retain, nonatomic) DTCSpaceMode *modeWillSend; // @synthesize modeWillSend=_modeWillSend;
@property(nonatomic) __weak MWPhotoBrowser *browser; // @synthesize browser=_browser;
@property(nonatomic) __weak id <DTCSpacePhotoBrowserDataSource> photoDataSource; // @synthesize photoDataSource=_photoDataSource;
- (void).cxx_destruct;
- (void)dt_saveDentryToSpace:(id)arg1 fromController:(id)arg2;
- (id)dt_fullFilePathFrom:(id)arg1;
- (id)customizeCellNameDisplayForItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dt_contactNameFrom:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)cleanChooserInfo;
- (void)dentryPicker:(id)arg1 didChooseDentry:(id)arg2;
- (void)dentryPickerDidCancel:(id)arg1;
- (id)conversationSelectViewAttachmentDataForSend;
- (int)conversationSelectViewAttachmentType;
- (id)menusForEncryptImageInPhotoBrowser:(id)arg1 source:(id)arg2;
- (id)menusForCommonInPhotoBrowser:(id)arg1 source:(id)arg2;
- (id)menusForInternalSpaceInPhotoBrowser:(id)arg1 source:(id)arg2;
- (id)printMenu;
- (id)sendToSpaceMenu;
- (id)renameMenu;
- (id)moveMenu;
- (id)deleteMenu;
- (id)sendByMailAction;
- (id)sendActionMenu;
- (void)photoBrowserDownloadImageError:(id)arg1 errUserInfo:(id)arg2;
- (_Bool)photoBrowser:(id)arg1 recogizedQRCode:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)handleMWPhotoLoadingDidEndNotification:(id)arg1;
- (void)photoBrowser:(id)arg1 didDisplayPhotoAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 customMenusAtIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)dt_openMailComposerWithDentryFile:(id)arg1 fromVC:(id)arg2;
- (void)dt_openPhotoBrowserFromViewController:(id)arg1 forTransmitContent:(id)arg2 withDataSource:(id)arg3;
- (void)dt_openRenameFromViewController:(id)arg1 forDentry:(id)arg2 withCompletion:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)dt_presentNotifyInterfaceInView:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dt_presentContactInterfaceFromViewController:(id)arg1 forTransmitContent:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)dt_presentCameraFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dt_presentPhotoLibraryFromViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

