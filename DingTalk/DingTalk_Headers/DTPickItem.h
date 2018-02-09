//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTPickIdentifier, UIColor;

@interface DTPickItem : NSObject
{
    unsigned long long _checkBoxStatus;
    unsigned long long _singlePickStatus;
    DTPickIdentifier *_identifier;
    UIColor *_bgColor;
    CDUnknownBlockType _cellDidSelectBlock;
    CDUnknownBlockType _cellForRowBlock;
}

@property(copy, nonatomic) CDUnknownBlockType cellForRowBlock; // @synthesize cellForRowBlock=_cellForRowBlock;
@property(copy, nonatomic) CDUnknownBlockType cellDidSelectBlock; // @synthesize cellDidSelectBlock=_cellDidSelectBlock;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) DTPickIdentifier *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned long long singlePickStatus; // @synthesize singlePickStatus=_singlePickStatus;
@property(nonatomic) unsigned long long checkBoxStatus; // @synthesize checkBoxStatus=_checkBoxStatus;
- (void).cxx_destruct;
- (id)createPickCell;
- (id)cellIdentifier;

@end

