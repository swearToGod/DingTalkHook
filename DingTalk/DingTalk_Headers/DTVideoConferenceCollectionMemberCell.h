//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAShapeLayer, DTAvatarImageView, UIImageView, UILabel, UIView;
@protocol DTVideoConferenceCollectionMemberCellDataSource, DTVideoConferenceCollectionMemberCellDelegate;

@interface DTVideoConferenceCollectionMemberCell : UICollectionViewCell
{
    _Bool _muteAll;
    _Bool _closeCameraAll;
    DTAvatarImageView *_avater;
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UIImageView *_audioStatusImageView;
    UIImageView *_videoStatusImageView;
    unsigned long long _memberIdentifer;
    unsigned long long _memberVideoScreenStatus;
    id <DTVideoConferenceCollectionMemberCellDataSource> _dataSource;
    id <DTVideoConferenceCollectionMemberCellDelegate> _delegate;
    UIView *_cirleView;
    CAShapeLayer *_minusLayer;
}

@property(retain, nonatomic) CAShapeLayer *minusLayer; // @synthesize minusLayer=_minusLayer;
@property(retain, nonatomic) UIView *cirleView; // @synthesize cirleView=_cirleView;
@property(nonatomic) __weak id <DTVideoConferenceCollectionMemberCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <DTVideoConferenceCollectionMemberCellDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long memberVideoScreenStatus; // @synthesize memberVideoScreenStatus=_memberVideoScreenStatus;
@property(nonatomic) _Bool closeCameraAll; // @synthesize closeCameraAll=_closeCameraAll;
@property(nonatomic) _Bool muteAll; // @synthesize muteAll=_muteAll;
@property(nonatomic) unsigned long long memberIdentifer; // @synthesize memberIdentifer=_memberIdentifer;
@property(retain, nonatomic) UIImageView *videoStatusImageView; // @synthesize videoStatusImageView=_videoStatusImageView;
@property(retain, nonatomic) UIImageView *audioStatusImageView; // @synthesize audioStatusImageView=_audioStatusImageView;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DTAvatarImageView *avater; // @synthesize avater=_avater;
- (void).cxx_destruct;
- (void)_speakerShow:(id)arg1;
- (id)_imageForMemberVideoScreenStatus;
- (void)_formatUILabel:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1;
- (void)refreshAvatar:(id)arg1 withSizeKey:(id)arg2 font:(id)arg3;
- (void)refreshAvatarByUid:(id)arg1 withSizeKey:(id)arg2 font:(id)arg3;
- (void)loadCompoment;
- (id)initWithFrame:(struct CGRect)arg1;

@end

