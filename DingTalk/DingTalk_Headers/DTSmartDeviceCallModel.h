//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSString;

@interface DTSmartDeviceCallModel : Marshal
{
    NSString *_resultCode;
    NSString *_resultMsg;
    NSString *_jsonData;
}

@property(copy, nonatomic) NSString *jsonData; // @synthesize jsonData=_jsonData;
@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(copy, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

