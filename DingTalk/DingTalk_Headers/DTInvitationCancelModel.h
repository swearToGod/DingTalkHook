//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class NSNumber, NSString;

@interface DTInvitationCancelModel : Marshal
{
    NSNumber *_dingId;
    NSString *_cancelReason;
}

@property(copy, nonatomic) NSString *cancelReason; // @synthesize cancelReason=_cancelReason;
@property(retain, nonatomic) NSNumber *dingId; // @synthesize dingId=_dingId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

