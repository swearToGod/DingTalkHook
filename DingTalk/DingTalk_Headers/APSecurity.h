//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface APSecurity : NSObject
{
}

+ (id)sharedSecurity;
- (void)savePublicKey:(id)arg1;
- (id)publicKey;
- (id)decryptData:(id)arg1 withInfo:(struct APTaskInfoData)arg2;
- (id)encryptData:(id)arg1 withInfo:(struct APTaskInfoData)arg2;

@end

