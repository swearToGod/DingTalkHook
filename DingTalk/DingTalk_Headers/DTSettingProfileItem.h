//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTSettingProfileItem : NSObject
{
    _Bool _indicateHidden;
    NSString *_title;
    NSString *_detail;
    CDUnknownBlockType _selectBlock;
}

+ (id)itemWithTitle:(id)arg1 detail:(id)arg2 indicateHidden:(_Bool)arg3 selectBlock:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) _Bool indicateHidden; // @synthesize indicateHidden=_indicateHidden;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

