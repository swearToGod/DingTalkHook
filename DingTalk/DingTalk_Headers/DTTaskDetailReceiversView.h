//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DTBizDingModel, DTDingTableActionView, NSArray, UIImageView;
@protocol DTTaskDetailReceiversViewDelegate;

@interface DTTaskDetailReceiversView : UIView
{
    id <DTTaskDetailReceiversViewDelegate> _delegate;
    UIImageView *_mainBgView;
    UIView *_avatarBgView;
    NSArray *_receivers;
    DTDingTableActionView *_finishStatusView;
    DTBizDingModel *_taskModel;
}

+ (double)heightOfReceiversView;
@property(retain, nonatomic) DTBizDingModel *taskModel; // @synthesize taskModel=_taskModel;
@property(retain, nonatomic) DTDingTableActionView *finishStatusView; // @synthesize finishStatusView=_finishStatusView;
@property(copy, nonatomic) NSArray *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) UIView *avatarBgView; // @synthesize avatarBgView=_avatarBgView;
@property(retain, nonatomic) UIImageView *mainBgView; // @synthesize mainBgView=_mainBgView;
@property(nonatomic) __weak id <DTTaskDetailReceiversViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)mainBgTap:(id)arg1;
- (id)finishStatusTitleWithCount:(unsigned long long)arg1 totalCount:(long long)arg2;
- (void)configWithReceivers:(id)arg1;
- (void)configTaskModel:(id)arg1;
- (void)layoutSubviews;
- (void)loadComponent;
- (id)init;

@end

