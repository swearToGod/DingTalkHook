//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BisClientConfigContent : NSObject
{
    NSString *_token;
    NSString *_type;
    NSString *_sampleMode;
    NSString *_androidcfg;
    NSString *_ioscfg;
}

@property(retain, nonatomic) NSString *ioscfg; // @synthesize ioscfg=_ioscfg;
@property(retain, nonatomic) NSString *androidcfg; // @synthesize androidcfg=_androidcfg;
@property(retain, nonatomic) NSString *sampleMode; // @synthesize sampleMode=_sampleMode;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end

