//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSArray, NSNumber;

@interface DTDebugWebViewOrder : Marshal
{
    NSNumber *_debugType;
    NSNumber *_devType;
    NSArray *_debugUrlList;
}

@property(copy, nonatomic) NSArray *debugUrlList; // @synthesize debugUrlList=_debugUrlList;
@property(retain, nonatomic) NSNumber *devType; // @synthesize devType=_devType;
@property(retain, nonatomic) NSNumber *debugType; // @synthesize debugType=_debugType;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

