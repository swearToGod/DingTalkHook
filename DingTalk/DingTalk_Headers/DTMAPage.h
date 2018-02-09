//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTMAPageIndex, DTMAPageNavigation, NSArray, NSMutableArray, NSString;
@protocol DTMAPageViewController;

@interface DTMAPage : NSObject
{
    NSMutableArray *_childPages;
    DTMAPageIndex *_pageIndex;
    DTMAPageNavigation *_pageNavigation;
    _Bool _autoRemove;
    DTMAPage *_parrentPage;
    NSString *_pageIdentifier;
    id <DTMAPageViewController> _pageViewController;
}

+ (id)pageWithPageViewController:(id)arg1;
+ (id)pageWithPageViewControllerId:(id)arg1;
+ (id)pageIdentifierWithViewControllerId:(id)arg1;
@property(retain, nonatomic) id <DTMAPageViewController> pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) _Bool autoRemove; // @synthesize autoRemove=_autoRemove;
@property(readonly, copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier=_pageIdentifier;
@property(nonatomic) __weak DTMAPage *parrentPage; // @synthesize parrentPage=_parrentPage;
- (void).cxx_destruct;
- (void)setPageNavigation:(id)arg1;
@property(readonly, nonatomic) DTMAPageNavigation *pageNavigation;
- (void)setPageIndex:(id)arg1;
- (id)pageIndex;
- (void)removeFromParentPage;
- (void)addChildPage:(id)arg1;
@property(readonly, nonatomic) NSArray *childPages; // @dynamic childPages;
- (void)invalidate;
- (void)dealloc;
- (id)initWithPageIdentifier:(id)arg1;
- (id)init;
- (_Bool)isRootPage;

@end
