//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AMapNetworkManager, NSMapTable;
@protocol AMapLocationSearchManagerDelegate;

@interface AMapLocationSearchManager : NSObject
{
    id <AMapLocationSearchManagerDelegate> _delegate;
    long long _timeout;
    long long _language;
    AMapNetworkManager *_networkManager;
    NSMapTable *_requestOperationMapping;
}

@property(retain, nonatomic) NSMapTable *requestOperationMapping; // @synthesize requestOperationMapping=_requestOperationMapping;
@property(retain, nonatomic) AMapNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(nonatomic) long long language; // @synthesize language=_language;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) __weak id <AMapLocationSearchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearAllOperations;
- (void)removeOperationForRequest:(id)arg1;
- (void)addOperation:(id)arg1 forRequest:(id)arg2;
- (_Bool)containsRequest:(id)arg1;
- (id)operationForRequest:(id)arg1;
- (void)performPOIAroundRequestWithReformer:(id)arg1 request:(id)arg2;
- (void)performPOIKeywordsRequestWithReformer:(id)arg1 request:(id)arg2;
- (void)performDistrictRequestWithReformer:(id)arg1 request:(id)arg2;
- (id)additionalParameters;
- (void)invokePOIAroundDelegateWithRequest:(id)arg1 result:(id)arg2;
- (void)invokePOIKeywordsDelegateWithRequest:(id)arg1 result:(id)arg2;
- (void)invokeDistrictDelegateWithRequest:(id)arg1 result:(id)arg2;
- (void)invokeDelegateWithError:(id)arg1 forRequest:(id)arg2;
- (void)invokeDelegateWithURLError:(id)arg1 forRequest:(id)arg2;
- (void)locationPOIAroundSearch:(id)arg1;
- (void)locationPOIKeywordsSearch:(id)arg1;
- (void)locationDistrictSearch:(id)arg1;
- (void)cancelAllRequests;
- (void)dealloc;
- (id)init;

@end
