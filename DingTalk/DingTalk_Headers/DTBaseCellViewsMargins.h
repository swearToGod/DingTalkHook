//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBaseCellViewsHorizontalMargins, DTBaseCellViewsVerticalMargins;

@interface DTBaseCellViewsMargins : NSObject
{
    DTBaseCellViewsHorizontalMargins *_horizontalMargins;
    DTBaseCellViewsVerticalMargins *_verticalMargins;
}

+ (id)marginsWithTopMargin:(double)arg1 bottomMargin:(double)arg2 leftMargin:(double)arg3 rightMargin:(double)arg4;
@property(retain, nonatomic) DTBaseCellViewsVerticalMargins *verticalMargins; // @synthesize verticalMargins=_verticalMargins;
@property(retain, nonatomic) DTBaseCellViewsHorizontalMargins *horizontalMargins; // @synthesize horizontalMargins=_horizontalMargins;
- (void).cxx_destruct;

@end

