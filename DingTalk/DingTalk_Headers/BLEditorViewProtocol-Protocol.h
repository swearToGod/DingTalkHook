//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol BLEditorHeaderViewProtocol;

@protocol BLEditorViewProtocol <NSObject>
@property(nonatomic) _Bool editorCanEdit;
@property(copy, nonatomic) NSString *strHtmlEditorTemplate;
- (void)hideOrShowEditorPlaceholder:(_Bool)arg1;
- (void)replaceAttachesCidsToPaths:(NSString *)arg1;
- (void)replaceAttachesPathsToCids:(NSString *)arg1;
- (NSString *)getCurrentTextContentWithoutWhitespaceAndNewLines;
- (NSString *)getCurrentTextContent;
- (NSString *)getCurrentHtmlContent;
- (_Bool)headerHasChanges;
- (_Bool)editorHasChanges;
- (_Bool)headerBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)setScrollEnabled:(_Bool)arg1;
- (struct CGSize)getContentSize;
- (void)setContentSize:(struct CGSize)arg1;
- (void)adjustContentSizeToFit:(_Bool)arg1;
- (void)adjustContentSizeToFit;
- (struct CGPoint)getContentOffset;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)adjustContentInsetToFit;
- (void)scrollToDefaultContentOffset:(_Bool)arg1;
- (void)scrollToDefaultContentOffset;
- (double)defaultContentOffsetTop;
- (double)defaultContentInsetTop;
- (void)layoutHeaderView;
- (NSString *)getHeaderSubject;
- (void)setHeaderSubject:(NSString *)arg1;
- (void)loadHtmlContent:(NSString *)arg1;
- (void)setEditorViewDelegate:(id)arg1;
- (id <BLEditorHeaderViewProtocol>)getHeaderView;
- (void)initHeaderView;
- (void)initEditorView;
@end

