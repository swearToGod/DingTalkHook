//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol WKAlarmServiceDelegate;

@interface WKAlarmDelegateItem : NSObject
{
    unsigned long long _hashValue;
    id <WKAlarmServiceDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <WKAlarmServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDelegate:(id)arg1;

@end

