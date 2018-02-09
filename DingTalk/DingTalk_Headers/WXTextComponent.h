//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXComponent.h"

@class NSString, NSTextStorage, UIColor;

@interface WXTextComponent : WXComponent
{
    struct UIEdgeInsets _border;
    struct UIEdgeInsets _padding;
    NSTextStorage *_textStorage;
    double _textStorageWidth;
    NSString *_text;
    UIColor *_color;
    NSString *_fontFamily;
    double _fontSize;
    double _fontWeight;
    unsigned long long _fontStyle;
    unsigned long long _lines;
    long long _textAlign;
    long long _textDecoration;
    NSString *_textOverflow;
    double _lineHeight;
    double _letterSpacing;
    _Bool _truncationLine;
    NSString *_useCoreTextAttr;
}

+ (_Bool)textRenderUsingCoreText;
+ (void)setRenderUsingCoreText:(_Bool)arg1;
@property(nonatomic) NSString *useCoreTextAttr; // @synthesize useCoreTextAttr=_useCoreTextAttr;
- (void).cxx_destruct;
- (void)_resetCSSNodeStyles:(id)arg1;
- (struct CGSize)calculateTextHeightWithWidth:(double)arg1;
- (void)drawLineThroughWithRun:(struct __CFArray *)arg1 context:(struct CGContext *)arg2 index:(long long)arg3 origin:(struct CGPoint)arg4;
- (struct __CTLine *)buildTruncatedLineWithRuns:(struct __CFArray *)arg1 lines:(id)arg2 path:(struct CGPath *)arg3;
- (void)drawTextWithRuns:(struct __CFArray *)arg1 context:(struct CGContext *)arg2 lineOrigin:(struct CGPoint)arg3;
- (void)drawTextWithContext:(struct CGContext *)arg1 bounds:(struct CGRect)arg2 padding:(struct UIEdgeInsets)arg3 view:(id)arg4;
- (void)_updateAttributesOnComponentThread:(id)arg1;
- (void)_updateStylesOnComponentThread:(id)arg1 resetStyles:(id)arg2 isUpdateStyles:(_Bool)arg3;
- (void)_frameDidCalculated:(_Bool)arg1;
- (void)syncTextStorageForView;
- (id)textStorageWithWidth:(double)arg1;
- (_Bool)adjustLineHeight;
- (id)buildAttributeString;
- (id)buildCTAttributeString;
- (void)repaintText:(id)arg1;
- (id)text;
- (CDUnknownBlockType)measureBlock;
- (id)drawRect:(struct CGRect)arg1;
- (_Bool)needsDrawRect;
- (id)loadView;
- (void)viewDidLoad;
- (void)setNeedsLayout;
- (void)setNeedsRepaint;
- (void)fillAttributes:(id)arg1;
- (void)fillCSSStyles:(id)arg1;
- (void)dealloc;
- (_Bool)useCoreText;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

@end

