//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTDoubleLineUserTagsCellItem.h"

@class DTBaseCellViewsMargins;

@interface DTTripleLineUserTagsStarCellItem : DTDoubleLineUserTagsCellItem
{
    DTBaseCellViewsMargins *_starViewMargin;
    unsigned long long _starCount;
}

@property(nonatomic) unsigned long long starCount; // @synthesize starCount=_starCount;
@property(retain, nonatomic) DTBaseCellViewsMargins *starViewMargin; // @synthesize starViewMargin=_starViewMargin;
- (void).cxx_destruct;
- (id)reuseIdentifier;
- (id)cellForItem;

@end
