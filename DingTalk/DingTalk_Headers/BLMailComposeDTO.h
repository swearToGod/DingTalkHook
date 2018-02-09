//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BLMailComposeDTO : NSObject
{
    _Bool _isAutoQuoteMail;
    NSString *_subjectFieldText;
    NSArray *_toTokenObjects;
    NSArray *_ccTokenObjects;
    NSArray *_bccTokenObjects;
    NSString *_htmlContent;
    NSString *_planTextContent;
    NSArray *_inLineImagesURLStrings;
    NSString *_senderEmail;
}

@property(retain, nonatomic) NSString *senderEmail; // @synthesize senderEmail=_senderEmail;
@property(nonatomic) _Bool isAutoQuoteMail; // @synthesize isAutoQuoteMail=_isAutoQuoteMail;
@property(retain, nonatomic) NSArray *inLineImagesURLStrings; // @synthesize inLineImagesURLStrings=_inLineImagesURLStrings;
@property(copy, nonatomic) NSString *planTextContent; // @synthesize planTextContent=_planTextContent;
@property(copy, nonatomic) NSString *htmlContent; // @synthesize htmlContent=_htmlContent;
@property(retain, nonatomic) NSArray *bccTokenObjects; // @synthesize bccTokenObjects=_bccTokenObjects;
@property(retain, nonatomic) NSArray *ccTokenObjects; // @synthesize ccTokenObjects=_ccTokenObjects;
@property(retain, nonatomic) NSArray *toTokenObjects; // @synthesize toTokenObjects=_toTokenObjects;
@property(copy, nonatomic) NSString *subjectFieldText; // @synthesize subjectFieldText=_subjectFieldText;
- (void).cxx_destruct;

@end

