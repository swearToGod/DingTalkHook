//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "HPGrowingTextViewDelegate-Protocol.h"

@class HPGrowingTextView, MASConstraint, NSString;

@interface DTGroupAnnounceInputTextCell : UITableViewCell <HPGrowingTextViewDelegate>
{
    CDUnknownBlockType _inputTextViewTextDidChangeCallback;
    CDUnknownBlockType _inputTextViewHeightDidChangeCallback;
    HPGrowingTextView *_inputTextView;
    MASConstraint *_inputTextViewHeightConstraint;
}

@property(retain, nonatomic) MASConstraint *inputTextViewHeightConstraint; // @synthesize inputTextViewHeightConstraint=_inputTextViewHeightConstraint;
@property(retain, nonatomic) HPGrowingTextView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(copy, nonatomic) CDUnknownBlockType inputTextViewHeightDidChangeCallback; // @synthesize inputTextViewHeightDidChangeCallback=_inputTextViewHeightDidChangeCallback;
@property(copy, nonatomic) CDUnknownBlockType inputTextViewTextDidChangeCallback; // @synthesize inputTextViewTextDidChangeCallback=_inputTextViewTextDidChangeCallback;
- (void).cxx_destruct;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)growingTextViewDidEndEditing:(id)arg1;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) _Bool active;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

