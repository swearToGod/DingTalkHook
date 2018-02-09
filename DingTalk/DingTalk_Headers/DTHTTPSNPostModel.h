//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Marshal.h"

@class DTHTTPSNContentModel, DTHTTPSNUserModel, NSArray, NSNumber;

@interface DTHTTPSNPostModel : Marshal
{
    NSNumber *_postId;
    NSNumber *_createAt;
    DTHTTPSNUserModel *_author;
    DTHTTPSNContentModel *_content;
    NSArray *_comments;
    NSNumber *_status;
}

@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSArray *comments; // @synthesize comments=_comments;
@property(retain, nonatomic) DTHTTPSNContentModel *content; // @synthesize content=_content;
@property(retain, nonatomic) DTHTTPSNUserModel *author; // @synthesize author=_author;
@property(retain, nonatomic) NSNumber *createAt; // @synthesize createAt=_createAt;
@property(retain, nonatomic) NSNumber *postId; // @synthesize postId=_postId;
- (void).cxx_destruct;
- (id)filedsMeta__;
- (id)init;

@end

