//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSString, NSTextCheckingResult, NSTimeZone, NSURL, TTTAttributedLabel;

@protocol TTTAttributedLabelDelegate <NSObject>

@optional
- (void)didTappedOnAttributedLabel:(TTTAttributedLabel *)arg1;
- (void)attributedLabel:(TTTAttributedLabel *)arg1 didSelectLinkWithTextCheckingResult:(NSTextCheckingResult *)arg2;
- (void)attributedLabel:(TTTAttributedLabel *)arg1 didSelectLinkWithTransitInformation:(NSDictionary *)arg2;
- (void)attributedLabel:(TTTAttributedLabel *)arg1 didSelectLinkWithDate:(NSDate *)arg2 timeZone:(NSTimeZone *)arg3 duration:(double)arg4;
- (void)attributedLabel:(TTTAttributedLabel *)arg1 didSelectLinkWithDate:(NSDate *)arg2;
- (void)attributedLabel:(TTTAttributedLabel *)arg1 didSelectLinkWithPhoneNumber:(NSString *)arg2;
- (void)attributedLabel:(TTTAttributedLabel *)arg1 didSelectLinkWithAddress:(NSDictionary *)arg2;
- (void)attributedLabel:(TTTAttributedLabel *)arg1 didSelectLinkWithURL:(NSURL *)arg2;
@end

