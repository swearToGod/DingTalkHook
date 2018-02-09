//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString, UIView;
@protocol DTContactProfileMoreOperationDelegate;

@interface DTContactProfileMoreOperationController : NSObject
{
    id <DTContactProfileMoreOperationDelegate> _delegate;
    unsigned long long _destructiveButtonType;
    unsigned long long _actionSheetTitleType;
    NSArray *_actionSheetButtonTypeArray;
    NSArray *_canInviteOrgArray;
    NSArray *_canEditOrgArray;
    long long _uid;
    NSArray *_buttonTitleArray;
    NSArray *_respondTypeArray;
    NSString *_destructiveButtonTitle;
    NSString *_actionSheetTitle;
    NSArray *_buttonTypeTitleArray;
    UIView *_currentView;
}

+ (id)operationControllerWithUid:(long long)arg1;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) NSArray *buttonTypeTitleArray; // @synthesize buttonTypeTitleArray=_buttonTypeTitleArray;
@property(copy, nonatomic) NSString *actionSheetTitle; // @synthesize actionSheetTitle=_actionSheetTitle;
@property(copy, nonatomic) NSString *destructiveButtonTitle; // @synthesize destructiveButtonTitle=_destructiveButtonTitle;
@property(copy, nonatomic) NSArray *respondTypeArray; // @synthesize respondTypeArray=_respondTypeArray;
@property(copy, nonatomic) NSArray *buttonTitleArray; // @synthesize buttonTitleArray=_buttonTitleArray;
@property(nonatomic) long long uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSArray *canEditOrgArray; // @synthesize canEditOrgArray=_canEditOrgArray;
@property(copy, nonatomic) NSArray *canInviteOrgArray; // @synthesize canInviteOrgArray=_canInviteOrgArray;
@property(copy, nonatomic) NSArray *actionSheetButtonTypeArray; // @synthesize actionSheetButtonTypeArray=_actionSheetButtonTypeArray;
@property(nonatomic) unsigned long long actionSheetTitleType; // @synthesize actionSheetTitleType=_actionSheetTitleType;
@property(nonatomic) unsigned long long destructiveButtonType; // @synthesize destructiveButtonType=_destructiveButtonType;
@property(nonatomic) __weak id <DTContactProfileMoreOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeBlacklist;
- (void)addBlacklist;
- (void)cancelAttention;
- (void)addAttention;
- (void)editMember;
- (void)invite;
- (void)report;
- (void)recommend;
- (void)remarkName;
- (void)acceptFriend;
- (void)addFriend;
- (void)removeFriend;
- (void)controlForType:(unsigned long long)arg1;
- (void)showActionSheetInView:(id)arg1;
- (void)resetController;

@end

