//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BLAttachmentAction-Protocol.h"
#import "BLPhotoBrowserDataSource-Protocol.h"
#import "DTCMailDetailInteractorOutput-Protocol.h"

@class BLAccount, DTCMail, DTCMailDetailStoryboard, NSArray, NSMutableArray, NSString, NSTimer;
@protocol BLMailDetailViewData, DTCMailChatHelper, DTCMailDetailInteractorInput, DTCMailDetailInterface, DTCMailDetailPresenterDelegate, DTCMailOperation, DTCMailStoryboardRoutable;

@interface DTCMailDetailPresenter : NSObject <BLPhotoBrowserDataSource, DTCMailDetailInteractorOutput, BLAttachmentAction>
{
    _Bool _directViewAttachment;
    _Bool _notFirst;
    id <DTCMailDetailInterface> _userInterface;
    id <BLMailDetailViewData> _viewData;
    id <DTCMailDetailInteractorInput> _mailDetailInteractor;
    id <DTCMailOperation> _mailOp;
    id <DTCMailDetailPresenterDelegate> _delgate;
    DTCMailDetailStoryboard *_storyboard;
    id <DTCMailStoryboardRoutable> _routableStoryboard;
    BLAccount *_currentAccount;
    id <DTCMailChatHelper> _mailChatHelper;
    DTCMail *_mail;
    NSMutableArray *_attachmentsList;
    long long _handlingAttachmentIndex;
    NSTimer *_timer;
    NSMutableArray *_photoDataSource;
    unsigned long long _currentPhotoItemIndex;
    NSArray *_whiteList;
}

+ (id)joinedAttendeeNameList:(id)arg1 senderEmail:(id)arg2;
+ (id)generatTokenDataWithRecipients:(id)arg1;
@property(retain, nonatomic) NSArray *whiteList; // @synthesize whiteList=_whiteList;
@property(nonatomic) _Bool notFirst; // @synthesize notFirst=_notFirst;
@property(nonatomic) unsigned long long currentPhotoItemIndex; // @synthesize currentPhotoItemIndex=_currentPhotoItemIndex;
@property(retain, nonatomic) NSMutableArray *photoDataSource; // @synthesize photoDataSource=_photoDataSource;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long handlingAttachmentIndex; // @synthesize handlingAttachmentIndex=_handlingAttachmentIndex;
@property(retain, nonatomic) NSMutableArray *attachmentsList; // @synthesize attachmentsList=_attachmentsList;
@property(retain) DTCMail *mail; // @synthesize mail=_mail;
@property(nonatomic) _Bool directViewAttachment; // @synthesize directViewAttachment=_directViewAttachment;
@property(nonatomic) __weak id <DTCMailChatHelper> mailChatHelper; // @synthesize mailChatHelper=_mailChatHelper;
@property(retain, nonatomic) BLAccount *currentAccount; // @synthesize currentAccount=_currentAccount;
@property(nonatomic) __weak id <DTCMailStoryboardRoutable> routableStoryboard; // @synthesize routableStoryboard=_routableStoryboard;
@property(nonatomic) __weak DTCMailDetailStoryboard *storyboard; // @synthesize storyboard=_storyboard;
@property(nonatomic) id <DTCMailDetailPresenterDelegate> delgate; // @synthesize delgate=_delgate;
@property(retain, nonatomic) id <DTCMailOperation> mailOp; // @synthesize mailOp=_mailOp;
@property(retain, nonatomic) id <DTCMailDetailInteractorInput> mailDetailInteractor; // @synthesize mailDetailInteractor=_mailDetailInteractor;
@property(retain, nonatomic) id <BLMailDetailViewData> viewData; // @synthesize viewData=_viewData;
@property(nonatomic) __weak id <DTCMailDetailInterface> userInterface; // @synthesize userInterface=_userInterface;
- (void).cxx_destruct;
- (_Bool)needShowInlineImagesTapDiv;
- (void)replaceCainiaoURLToIframe:(id)arg1;
- (void)dealInlineImageCacheFromInterceptor:(id)arg1;
- (_Bool)isDingtalkFeatureMail;
- (id)dingMailFeatureInjectCode;
- (id)wrapHtmlNew:(id)arg1;
- (void)showMailBody:(id)arg1;
- (void)updateAllRecipientsFieldForMail:(id)arg1;
- (void)loadBccTokenFieldForMail:(id)arg1;
- (void)loadCcTokenFieldForMail:(id)arg1;
- (void)loadToTokenFieldForMail:(id)arg1;
- (id)convertToPhotoItemFromAttachment:(id)arg1 mail:(id)arg2;
- (id)photoAtIndex:(unsigned long long)arg1;
- (id)photoes;
- (unsigned long long)currentPhotoIndex;
- (unsigned long long)photoCounts;
- (void)previewAttachment:(id)arg1;
- (void)showNetworkErrorAlert;
- (void)showDownloadOptions;
- (void)setNeedManualShowInlineAttachments;
- (void)didDownloadAttachment:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)didDownloadAttachmentFailed:(id)arg1;
- (void)updateAttachmentDownloadProgress:(unsigned long long)arg1 status:(long long)arg2 atIndex:(unsigned long long)arg3;
- (void)updateInlineAttachmentsDownloadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)showEventOrganizer;
- (void)didLoadCalendarEventStartTime:(long long)arg1 endTime:(long long)arg2 alarm:(long long)arg3 andiaAllDay:(_Bool)arg4;
- (id)alarmTipForAlarm:(long long)arg1;
- (void)setAllowViewAttendeeStatus:(_Bool)arg1;
- (void)didloadCalendarOrganizer:(id)arg1;
- (void)didLoadCalendarEventLocation:(id)arg1;
- (void)setAllowResponse:(_Bool)arg1 andDisallowReason:(id)arg2;
- (void)noCalendarEventFound;
- (void)loadedInlineAttachment:(id)arg1 withCIDURL:(id)arg2;
- (void)foundShouldShowAttachments:(id)arg1;
- (void)updateMailBody:(id)arg1 loadProgress:(unsigned long long)arg2 total:(unsigned long long)arg3;
- (void)didLoadMailBodyFail:(id)arg1 error:(id)arg2;
- (void)didLoadMailBody:(id)arg1;
- (void)didLoadMail:(id)arg1 withShowCCAndBcc:(_Bool)arg2 loadFromServerIfNeed:(_Bool)arg3;
- (void)wantsPreviewAttachmentAtIndex:(unsigned long long)arg1;
- (void)openLink:(id)arg1;
- (void)openMailComposeWithRecipient:(id)arg1;
- (void)cancelDownloadAttachment;
- (void)stopDownloadAttachment;
- (void)startDownloadAttachment;
- (void)loadInlineAttachments:(_Bool)arg1;
- (void)loadInlineAttachment:(id)arg1;
- (void)willBecomeActive:(id)arg1;
- (void)cleanup;
- (void)onWaitLoadBodyFinished:(id)arg1;
- (void)loadMailDetail:(id)arg1;
- (id)maxThreeFilteredTagColorsFromRaw:(id)arg1;
- (id)maxThreeTagColorsForMail:(id)arg1;
- (void)updateRead;
- (void)updateFlagColors;
- (void)updateTagColors;
- (void)updateImportant;
- (void)showMail:(id)arg1 ccAndBcc:(_Bool)arg2 loadFromServerIfNeed:(_Bool)arg3;
- (void)showMailWithMailId:(id)arg1 inFolder:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

