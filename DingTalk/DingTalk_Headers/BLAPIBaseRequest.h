//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AFHTTPRequestOperation.h"

@class NSString, NSURL;

@interface BLAPIBaseRequest : AFHTTPRequestOperation
{
    _Bool _wantBinaryResponse;
    NSString *_emailAddress;
    id _sender;
    CDUnknownBlockType _apiCompletionBlock;
    CDUnknownBlockType _apiFailedBlock;
    NSURL *_binaryResponseSaveURL;
    long long _requestStartDate;
}

@property(nonatomic) long long requestStartDate; // @synthesize requestStartDate=_requestStartDate;
@property(retain, nonatomic) NSURL *binaryResponseSaveURL; // @synthesize binaryResponseSaveURL=_binaryResponseSaveURL;
@property(nonatomic) _Bool wantBinaryResponse; // @synthesize wantBinaryResponse=_wantBinaryResponse;
@property(copy, nonatomic) CDUnknownBlockType apiFailedBlock; // @synthesize apiFailedBlock=_apiFailedBlock;
@property(copy, nonatomic) CDUnknownBlockType apiCompletionBlock; // @synthesize apiCompletionBlock=_apiCompletionBlock;
@property(nonatomic) __weak id sender; // @synthesize sender=_sender;
@property(retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (void)start;
- (id)parseResponse:(id)arg1;
- (id)initWithRequest:(id)arg1;

@end

