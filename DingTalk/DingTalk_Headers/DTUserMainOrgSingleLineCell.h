//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DTSingleLineShowingCell.h"

@class DTIconView, NSString;

@interface DTUserMainOrgSingleLineCell : DTSingleLineShowingCell
{
    DTIconView *_mainOrgView;
    NSString *_mainOrgText;
}

@property(copy, nonatomic) NSString *mainOrgText; // @synthesize mainOrgText=_mainOrgText;
@property(retain, nonatomic) DTIconView *mainOrgView; // @synthesize mainOrgView=_mainOrgView;
- (void).cxx_destruct;
- (void)layoutSubViewsForCell;
- (id)initWithReuseIdentifier:(id)arg1 mainOrgText:(id)arg2;

@end

