//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTEmotionPackageModel : Marshal
{
    NSNumber *_packageId;
    NSString *_name;
    NSString *_packageMediaId;
    NSNumber *_state;
    NSString *_iconMediaId;
    NSString *_shortDesc;
    NSNumber *_price;
}

@property(retain, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *shortDesc; // @synthesize shortDesc=_shortDesc;
@property(copy, nonatomic) NSString *iconMediaId; // @synthesize iconMediaId=_iconMediaId;
@property(retain, nonatomic) NSNumber *state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *packageMediaId; // @synthesize packageMediaId=_packageMediaId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *packageId; // @synthesize packageId=_packageId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

