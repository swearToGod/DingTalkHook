//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTMobileInputView, NSString;

@protocol DTMobileInputViewDelegate <NSObject>

@optional
- (void)phoneNumberInputDidChanged:(DTMobileInputView *)arg1;
- (_Bool)phoneNumberInput:(DTMobileInputView *)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(NSString *)arg3;
- (void)phoneNumberInputDidEndEditing:(DTMobileInputView *)arg1;
- (void)phoneNumberInputDidBeginEditing:(DTMobileInputView *)arg1;
- (_Bool)phoneNumberInputShouldEndEditing:(DTMobileInputView *)arg1;
- (_Bool)phoneNumberInputShouldBeginEditing:(DTMobileInputView *)arg1;
@end

