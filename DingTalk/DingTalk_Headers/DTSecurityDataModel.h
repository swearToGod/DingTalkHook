//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTSafeLocationModel, NSString;

@interface DTSecurityDataModel : Marshal
{
    NSString *_wua;
    NSString *_securityToken;
    DTSafeLocationModel *_safeLocationModel;
}

@property(retain, nonatomic) DTSafeLocationModel *safeLocationModel; // @synthesize safeLocationModel=_safeLocationModel;
@property(copy, nonatomic) NSString *securityToken; // @synthesize securityToken=_securityToken;
@property(copy, nonatomic) NSString *wua; // @synthesize wua=_wua;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

