//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTDingCreateBasePresenter : NSObject
{
}

+ (void)loadConversationMembersWithInputPrarm:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (id)cycleRemindTextWithRule:(id)arg1;
+ (id)messageContentWithInputParam:(id)arg1;
+ (id)messageAttachmentsWithInputParam:(id)arg1;
+ (id)buildAttachmentWithLinkAttachment:(id)arg1;
+ (id)buildAttachmentWithFileAttachment:(id)arg1;
+ (id)buildAttachmentWithLinkModel:(id)arg1;
+ (id)buildImageAttachmentWithMediaId:(id)arg1 isOriginalImage:(_Bool)arg2;
+ (id)buildAttachmentWithCSpaceDentry:(id)arg1;

@end

