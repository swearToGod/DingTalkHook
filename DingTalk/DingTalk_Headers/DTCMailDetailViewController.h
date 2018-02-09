//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BLDatePickerViewControllerDelegate-Protocol.h"
#import "BLMailDetailViewData-Protocol.h"
#import "BLMailOperationInterface-Protocol.h"
#import "BLReminderPopupViewDelegate-Protocol.h"
#import "DTCMailDetailInterface-Protocol.h"
#import "DTCMailDetailQuickViewDelegate-Protocol.h"
#import "DTCMailQuickAddViewControllerDelegate-Protocol.h"
#import "DTCMessageViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class BLBarButtonItem, BLDatePickerViewController, BLReminderPopupView, DTCFolder, DTCMail, DTCMailDetailPresenter, DTCMailDetailQuickView, DTCMessageView, NSArray, NSMutableArray, NSString, UIButton, UINavigationController, UIToolbar, UIView;
@protocol DTCMailDetailViewControllerDelegate;

@interface DTCMailDetailViewController : UIViewController <BLReminderPopupViewDelegate, BLDatePickerViewControllerDelegate, UIActionSheetDelegate, UIGestureRecognizerDelegate, DTCMailDetailQuickViewDelegate, DTCMailDetailInterface, BLMailDetailViewData, BLMailOperationInterface, DTCMessageViewDelegate, DTCMailQuickAddViewControllerDelegate>
{
    _Bool _hideToolBar;
    _Bool _isReadMailMode;
    _Bool _isShowQuickReply;
    DTCMail *_mail;
    NSString *_mailId;
    DTCFolder *_folder;
    DTCMailDetailPresenter *_eventHandler;
    NSMutableArray *_arrQuick;
    id <DTCMailDetailViewControllerDelegate> _delegate;
    NSArray *_topActionBarItems;
    NSArray *_bottomActionBarItems;
    DTCMessageView *_messageView;
    UIView *_toolbarContainerView;
    UIToolbar *_toolbar;
    BLBarButtonItem *_replyBarButtonItem;
    BLBarButtonItem *_replyAllBarButtonItem;
    BLBarButtonItem *_forwardBarButtonItem;
    BLBarButtonItem *_deleteBarButtonItem;
    UIButton *_buttonGoUp;
    UIButton *_buttonGoDown;
    UIButton *_btnQuick;
    BLReminderPopupView *_reminderPopupView;
    BLDatePickerViewController *_datePickerView;
    DTCMailDetailQuickView *_quickView;
    UINavigationController *_tempSaveNavVC;
}

@property(nonatomic) UINavigationController *tempSaveNavVC; // @synthesize tempSaveNavVC=_tempSaveNavVC;
@property(retain, nonatomic) DTCMailDetailQuickView *quickView; // @synthesize quickView=_quickView;
@property(retain, nonatomic) BLDatePickerViewController *datePickerView; // @synthesize datePickerView=_datePickerView;
@property(retain, nonatomic) BLReminderPopupView *reminderPopupView; // @synthesize reminderPopupView=_reminderPopupView;
@property(retain, nonatomic) UIButton *btnQuick; // @synthesize btnQuick=_btnQuick;
@property(retain, nonatomic) UIButton *buttonGoDown; // @synthesize buttonGoDown=_buttonGoDown;
@property(retain, nonatomic) UIButton *buttonGoUp; // @synthesize buttonGoUp=_buttonGoUp;
@property(retain, nonatomic) BLBarButtonItem *deleteBarButtonItem; // @synthesize deleteBarButtonItem=_deleteBarButtonItem;
@property(retain, nonatomic) BLBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;
@property(retain, nonatomic) BLBarButtonItem *replyAllBarButtonItem; // @synthesize replyAllBarButtonItem=_replyAllBarButtonItem;
@property(retain, nonatomic) BLBarButtonItem *replyBarButtonItem; // @synthesize replyBarButtonItem=_replyBarButtonItem;
@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) UIView *toolbarContainerView; // @synthesize toolbarContainerView=_toolbarContainerView;
@property(retain, nonatomic) DTCMessageView *messageView; // @synthesize messageView=_messageView;
@property(retain, nonatomic) NSArray *bottomActionBarItems; // @synthesize bottomActionBarItems=_bottomActionBarItems;
@property(retain, nonatomic) NSArray *topActionBarItems; // @synthesize topActionBarItems=_topActionBarItems;
@property(nonatomic) _Bool isShowQuickReply; // @synthesize isShowQuickReply=_isShowQuickReply;
@property(nonatomic) _Bool isReadMailMode; // @synthesize isReadMailMode=_isReadMailMode;
@property(nonatomic) _Bool hideToolBar; // @synthesize hideToolBar=_hideToolBar;
@property(nonatomic) __weak id <DTCMailDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *arrQuick; // @synthesize arrQuick=_arrQuick;
@property(retain, nonatomic) DTCMailDetailPresenter *eventHandler; // @synthesize eventHandler=_eventHandler;
@property(retain, nonatomic) DTCFolder *folder; // @synthesize folder=_folder;
@property(retain, nonatomic) NSString *mailId; // @synthesize mailId=_mailId;
@property(retain, nonatomic) DTCMail *mail; // @synthesize mail=_mail;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)showInlineImageTextDivTemplate;
- (_Bool)shouldLoadAfterDownloaded;
- (_Bool)inlineImagesHasDownloaded;
- (void)imapAttachmentsDownload;
- (id)replaceAllImageSourceToDownloadUrls;
- (void)dealInlineImageCacheFromInterceptor:(id)arg1;
- (void)updateQuickItems:(id)arg1;
- (void)openQuickAdd;
- (void)updateQuickContent;
- (void)openMailReply:(_Bool)arg1 content:(id)arg2;
- (void)mailReply:(_Bool)arg1 content:(id)arg2;
- (void)mailForward;
- (void)saveQuickContent:(id)arg1;
- (void)reloadMailDetailQuickList;
- (void)updateReplyBtnText;
- (void)btnEditPress:(id)arg1;
- (void)forwardMail;
- (void)saveQuickItems;
- (void)loadQuickItems;
- (void)replyAllForQuickReply;
- (void)replyAll;
- (void)replySingleForQuickReply;
- (void)replySingle;
- (id)createQuickView;
- (void)messageView:(id)arg1 didClickReceiver:(id)arg2;
- (void)messageViewDidClickSender:(id)arg1;
- (void)messageView:(id)arg1 longPressImage:(id)arg2;
- (void)didTapStatusBar;
- (void)datePickerViewControllerDidCancel:(id)arg1;
- (void)datePickerViewController:(id)arg1 didPickerDate:(id)arg2;
- (_Bool)datePickerViewController:(id)arg1 shouldPickerDate:(id)arg2;
- (void)reminderPopupDidCancelDate:(id)arg1;
- (void)reminderPopupDidClickCustomDate:(id)arg1;
- (void)reminderPopup:(id)arg1 didPickDate:(id)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)showDatePickerWithSelectedDate:(id)arg1;
- (void)updateReminderTime:(id)arg1;
- (void)showReminderPopupView:(_Bool)arg1;
- (void)setToolBarItemsType:(long long)arg1;
@property(readonly, nonatomic) NSString *dingtalkEncrytedUserId;
@property(readonly, nonatomic) NSString *jsTemplateFileName;
@property(readonly, nonatomic) NSString *readerTemplateFileName;
@property(readonly, nonatomic) NSArray *CIDImageURLStrings;
@property(readonly, nonatomic) struct CGRect viewFrame;
- (void)showAttendeeStatus:(id)arg1;
- (void)showGeneralErrorHUD:(id)arg1;
- (void)showNetworkErrorAlert;
- (void)showDownloadOptionActionsheet;
- (void)updateLayoutIfNeed:(_Bool)arg1;
- (void)updateMailBodyLoadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)showMailBodyLoadingFailed:(id)arg1;
- (void)showMailBodyLoading;
- (void)showViewAttendeeStatusControls:(_Bool)arg1;
- (void)showResponseControls:(_Bool)arg1 withDisallowReason:(id)arg2;
- (void)hideEventArea;
- (void)updateEventDate:(id)arg1 andAlarmDate:(id)arg2;
- (void)updateEventOrganizer:(id)arg1;
- (void)updateEventLocation:(id)arg1;
- (void)setNeedManualShowInlineAttachments;
- (void)loadedInlineAttachmentAtFilePath:(id)arg1 withCIDURL:(id)arg2;
- (void)updateAttachmentDownloadProgress:(unsigned long long)arg1 total:(unsigned long long)arg2 status:(long long)arg3 atIndex:(unsigned long long)arg4;
- (void)updateAttachment:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)reloadAttachment:(id)arg1;
- (void)setAttachmentsFieldHidden:(_Bool)arg1;
- (void)updateBodyContent:(id)arg1 withBaseURL:(id)arg2;
- (void)updateRead:(_Bool)arg1;
- (void)updateFlagColors:(id)arg1;
- (void)updateTagColors:(id)arg1;
- (void)updateImportant:(_Bool)arg1;
- (void)updateSendTime:(id)arg1;
- (void)updateUnreadCount:(long long)arg1 andTotalRecipients:(long long)arg2 andShouldDetail:(_Bool)arg3;
- (void)updateAllRecipiensField:(id)arg1 andRecipientsCount:(unsigned long long)arg2;
- (void)updateCcFieldTokens:(id)arg1;
- (void)updateToFieldTokens:(id)arg1;
- (void)setDifferentOrgTips:(id)arg1;
- (void)updateSenderFieldWithEmail:(id)arg1 andName:(id)arg2;
- (void)updateAvatarWithEmail:(id)arg1 nick:(id)arg2;
- (void)updateSubjectField:(id)arg1;
- (void)hasShownMail:(id)arg1;
- (struct CGRect)frameForToolbarAtOrientation:(long long)arg1;
- (void)hideToolBarMethod;
- (void)setupNavigationbar;
- (void)setupToolbar;
- (id)createContentWebView;
- (void)reloadMailDetailWithMail:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadMail;
- (void)onCancelSaveDraftNotificationReceived:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
