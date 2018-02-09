//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DTBusinessConfMemberView, DTConferenceMember, UILabel;
@protocol BusinessConfMeberDelegate;

@interface DTBusinessConfMemberCollectionViewCell : UICollectionViewCell
{
    id <BusinessConfMeberDelegate> _delegate;
    DTConferenceMember *_currentMember;
    DTBusinessConfMemberView *_memberView;
    UILabel *_nickLabel;
}

@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) DTBusinessConfMemberView *memberView; // @synthesize memberView=_memberView;
@property(retain, nonatomic) DTConferenceMember *currentMember; // @synthesize currentMember=_currentMember;
@property(nonatomic) __weak id <BusinessConfMeberDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)reloadSpecialCellWithImage:(id)arg1 sizeKey:(id)arg2 backColor:(id)arg3;
- (void)reloadSpecialCell:(id)arg1 sizeKey:(id)arg2;
- (void)reloadMemberCell:(id)arg1 sizeKey:(id)arg2 attributeMap:(id)arg3;
- (void)reloadMemberCell:(id)arg1 sizeKey:(id)arg2;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;

@end

