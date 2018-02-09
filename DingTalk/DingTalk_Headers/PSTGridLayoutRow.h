//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PSTGridLayoutSection;

@interface PSTGridLayoutRow : NSObject
{
    NSMutableArray *_items;
    _Bool _isValid;
    int _verticalAlignement;
    int _horizontalAlignement;
    _Bool _complete;
    _Bool _fixedItemSize;
    PSTGridLayoutSection *_section;
    long long _index;
    long long _itemCount;
    struct CGSize _rowSize;
    struct CGRect _rowFrame;
}

@property(nonatomic) long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) _Bool fixedItemSize; // @synthesize fixedItemSize=_fixedItemSize;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) struct CGRect rowFrame; // @synthesize rowFrame=_rowFrame;
@property(nonatomic) struct CGSize rowSize; // @synthesize rowSize=_rowSize;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) PSTGridLayoutSection *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (id)copyFromSection:(id)arg1;
- (id)snapshot;
- (void)addItem:(id)arg1;
- (id)layoutRowAndGenerateRectArray:(_Bool)arg1;
- (void)layoutRow;
- (id)itemRects;
- (void)invalidate;
- (id)description;
- (id)init;

@end

