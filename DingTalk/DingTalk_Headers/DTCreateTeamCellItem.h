//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTBaseCellItem.h"

@class NSString;

@interface DTCreateTeamCellItem : DTBaseCellItem
{
    NSString *_imageUrl;
    CDUnknownBlockType _buttonClickBlock;
    struct CGSize _iconSize;
}

@property(copy, nonatomic) CDUnknownBlockType buttonClickBlock; // @synthesize buttonClickBlock=_buttonClickBlock;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)cellForItem;
- (id)init;

@end

