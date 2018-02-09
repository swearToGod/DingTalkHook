//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DTAtInputTextDelegate-Protocol.h"

@class DTDisplayNameCondition, DTMessageComposerTextView, DTMessageReactionKeyboardItem, NSString, UIButton, YYLabel;

@interface DTMessageReactionKeyboardView : UIView <DTAtInputTextDelegate>
{
    CDUnknownBlockType _didPresentBlock;
    CDUnknownBlockType _willDismissBlock;
    CDUnknownBlockType _didDismissBlock;
    CDUnknownBlockType _sendBlock;
    DTMessageComposerTextView *_inputView;
    UIButton *_cancelButton;
    YYLabel *_titleLabel;
    YYLabel *_contentLabel;
    DTMessageReactionKeyboardItem *_item;
    DTDisplayNameCondition *_displayCondition;
}

@property(retain, nonatomic) DTDisplayNameCondition *displayCondition; // @synthesize displayCondition=_displayCondition;
@property(retain, nonatomic) DTMessageReactionKeyboardItem *item; // @synthesize item=_item;
@property(retain, nonatomic) YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) YYLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) DTMessageComposerTextView *inputView; // @synthesize inputView=_inputView;
@property(copy, nonatomic) CDUnknownBlockType sendBlock; // @synthesize sendBlock=_sendBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock; // @synthesize willDismissBlock=_willDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType didPresentBlock; // @synthesize didPresentBlock=_didPresentBlock;
- (void).cxx_destruct;
- (void)cancel;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)updateScrollViewInsetsWithFrame:(struct CGRect)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)configWithItem:(id)arg1;
- (void)resignActive;
- (void)beginActive;
- (void)dismiss;
- (void)presendWithAnimation:(_Bool)arg1;
- (id)inputText;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

