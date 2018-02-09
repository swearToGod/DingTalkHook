//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class BLGTToken, BLGTTokenFieldInternalDelegate, NSArray, NSCharacterSet, NSMutableArray, UIColor, UILabel, UIScrollView;
@protocol BLGTTokenFieldDelegate;

@interface BLGTTokenField : UITextField
{
    id delegate;
    BLGTTokenFieldInternalDelegate *_internalDelegate;
    NSMutableArray *_tokens;
    struct CGPoint _tokenCaret;
    UILabel *_placeHolderLabel;
    _Bool _editable;
    _Bool _resultsModeEnabled;
    _Bool _removesTokensOnEndEditing;
    _Bool _forcePickSearchResult;
    int _numberOfLines;
    int _tokenLimit;
    BLGTToken *_selectedToken;
    NSCharacterSet *_tokenizingCharacters;
    UIColor *_tokenTintColor;
    UIColor *_tokenTintColorHighlighted;
}

@property(retain, nonatomic) UIColor *tokenTintColorHighlighted; // @synthesize tokenTintColorHighlighted=_tokenTintColorHighlighted;
@property(retain, nonatomic) UIColor *tokenTintColor; // @synthesize tokenTintColor=_tokenTintColor;
@property(nonatomic) int tokenLimit; // @synthesize tokenLimit=_tokenLimit;
@property(nonatomic) _Bool forcePickSearchResult; // @synthesize forcePickSearchResult=_forcePickSearchResult;
@property(retain, nonatomic) NSCharacterSet *tokenizingCharacters; // @synthesize tokenizingCharacters=_tokenizingCharacters;
@property(readonly, nonatomic) __weak BLGTToken *selectedToken; // @synthesize selectedToken=_selectedToken;
@property(readonly, nonatomic) int numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) _Bool removesTokensOnEndEditing; // @synthesize removesTokensOnEndEditing=_removesTokensOnEndEditing;
@property(nonatomic) _Bool resultsModeEnabled; // @synthesize resultsModeEnabled=_resultsModeEnabled;
@property(nonatomic) _Bool editable; // @synthesize editable=_editable;
@property(nonatomic) __weak id <BLGTTokenFieldDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
@property(readonly, nonatomic) double rightViewWidth;
@property(readonly, nonatomic) double leftViewWidth;
- (struct CGRect)rightViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)leftViewRectForBounds:(struct CGRect)arg1;
- (struct CGRect)placeholderRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setPromptText:(id)arg1;
- (void)setResultsModeEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutTokensAnimated:(_Bool)arg1;
- (double)layoutTokensInternal;
- (void)tokenTouchUpInside:(id)arg1;
- (void)tokenTouchDown:(id)arg1;
- (void)tokenizeText;
- (void)deselectSelectedToken;
- (void)selectToken:(id)arg1;
- (void)removeAllTokens;
- (void)removeToken:(id)arg1;
- (void)loadTokens:(id)arg1;
- (void)addToken:(id)arg1 checkPredicate:(_Bool)arg2;
- (void)addToken:(id)arg1;
- (void)addTokensWithTitleArray:(id)arg1;
- (void)addTokensWithTitleList:(id)arg1;
- (id)addTokenWithTitle:(id)arg1 representedObject:(id)arg2;
- (id)addTokenWithTitle:(id)arg1;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)showOrHidePlaceHolderLabel;
- (void)didChangeText;
- (void)didEndEditing;
- (void)didBeginEditing;
- (_Bool)becomeFirstResponder;
@property(readonly, nonatomic) __weak UIScrollView *scrollView;
@property(readonly, nonatomic) __weak NSArray *tokenObjects;
@property(readonly, nonatomic) __weak NSArray *tokenTitles;
@property(readonly, nonatomic) __weak NSArray *tokens;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

