//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface LWEmotionViewModel : NSObject
{
    _Bool _disableShortCut;
    _Bool _disableControlSuperScrollView;
    long long _pageIndex;
    long long _emotionsOneLine;
    long long _emotionsLines;
    long long _emotionsPerPage;
    unsigned long long _layoutType;
    long long _magicPackageId;
    NSArray *_emotions;
    long long _startIndex;
}

+ (id)buildMagicEmotionViewModelWithMagicPackageId:(long long)arg1;
+ (id)buildNormalEmotionViewModel;
@property(nonatomic) long long startIndex; // @synthesize startIndex=_startIndex;
@property(nonatomic) _Bool disableControlSuperScrollView; // @synthesize disableControlSuperScrollView=_disableControlSuperScrollView;
@property(nonatomic) _Bool disableShortCut; // @synthesize disableShortCut=_disableShortCut;
@property(retain, nonatomic) NSArray *emotions; // @synthesize emotions=_emotions;
@property(nonatomic) long long magicPackageId; // @synthesize magicPackageId=_magicPackageId;
@property(nonatomic) unsigned long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) long long emotionsPerPage; // @synthesize emotionsPerPage=_emotionsPerPage;
@property(nonatomic) long long emotionsLines; // @synthesize emotionsLines=_emotionsLines;
@property(nonatomic) long long emotionsOneLine; // @synthesize emotionsOneLine=_emotionsOneLine;
@property(nonatomic) long long pageIndex; // @synthesize pageIndex=_pageIndex;
- (void).cxx_destruct;

@end

