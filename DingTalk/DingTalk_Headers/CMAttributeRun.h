//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CMAttributeRun : NSObject
{
    _Bool _listTight;
    unsigned int _fontTraits;
    NSDictionary *_attributes;
    long long _orderedListItemNumber;
}

@property(readonly, nonatomic) _Bool listTight; // @synthesize listTight=_listTight;
@property(nonatomic) long long orderedListItemNumber; // @synthesize orderedListItemNumber=_orderedListItemNumber;
@property(readonly, nonatomic) unsigned int fontTraits; // @synthesize fontTraits=_fontTraits;
@property(readonly, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (id)initWithAttributes:(id)arg1 fontTraits:(unsigned int)arg2 orderedListNumber:(long long)arg3;

@end

