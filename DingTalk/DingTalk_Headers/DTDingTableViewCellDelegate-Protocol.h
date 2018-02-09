//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTAttributedLabel, DTBizDingAttachmentExtra, DTBizDingLinkModel, DTBizDingModel, DTContact, NSArray, NSString, NSURL, UITableViewCell, UITapGestureRecognizer;

@protocol DTDingTableViewCellDelegate <NSObject>

@optional
- (void)collapsedLongTextDidExpanded;
- (_Bool)isSelectedCell:(UITableViewCell *)arg1 dingModel:(DTBizDingModel *)arg2;
- (NSArray *)rightUtilityButtonsOfCell:(UITableViewCell *)arg1;
- (void)editCellDidSelectedWithDingModel:(DTBizDingModel *)arg1;
- (void)detailAttachDescClickedWithDing:(DTBizDingModel *)arg1;
- (void)changeDingModelV2:(DTBizDingModel *)arg1 isFocus:(_Bool)arg2 cell:(UITableViewCell *)arg3;
- (void)changeDingModel:(DTBizDingModel *)arg1 isFocus:(_Bool)arg2;
- (void)gotoMessageWithDingModel:(DTBizDingModel *)arg1;
- (void)dinglistCellConferenceFinishButtonClick:(DTBizDingModel *)arg1 statusType:(long long)arg2;
- (void)dinglistCellfinishButtonClick:(DTBizDingModel *)arg1;
- (void)moreOperationV2:(DTBizDingModel *)arg1 cell:(UITableViewCell *)arg2;
- (void)cellTapped:(UITapGestureRecognizer *)arg1;
- (void)attributedLabel:(DTAttributedLabel *)arg1 didSelectLinkWithURL:(NSURL *)arg2;
- (void)attributedLabel:(DTAttributedLabel *)arg1 didSelectLinkWithPhoneNumber:(NSString *)arg2;
- (void)openDingReceiverWithModel:(DTBizDingModel *)arg1 responseKind:(long long)arg2 bizStatus:(long long)arg3;
- (void)openDingFinishStatusList:(_Bool)arg1 dingModel:(DTBizDingModel *)arg2;
- (void)openDingReceiverStatusList:(_Bool)arg1 dingModel:(DTBizDingModel *)arg2;
- (void)openCSpaceAttachment:(DTBizDingAttachmentExtra *)arg1 senderId:(long long)arg2;
- (void)openAttachmentLink:(DTBizDingLinkModel *)arg1 senderId:(long long)arg2;
- (void)needOpenDingCommentV2:(DTBizDingModel *)arg1 cell:(UITableViewCell *)arg2;
- (void)needConfirmDing:(DTBizDingModel *)arg1;
- (void)openUserProfile:(DTContact *)arg1;
@end

