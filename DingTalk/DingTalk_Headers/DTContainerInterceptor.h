//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LAContainerInterceptorProtocol-Protocol.h"
#import "LWHPMInterceptorDelegate-Protocol.h"

@class H5AMAppDataSource, LWHPMInterceptor, NSString, NSURL;
@protocol LAContainerInterceptorDelegate, LAMicroAppContextProtocol;

@interface DTContainerInterceptor : NSObject <LWHPMInterceptorDelegate, LAContainerInterceptorProtocol>
{
    id <LAContainerInterceptorDelegate> _delegate;
    id <LAMicroAppContextProtocol> _microAppContext;
    NSURL *_initialURL;
    LWHPMInterceptor *_hAMInterceptor;
    H5AMAppDataSource *_h5AMDatasource;
    NSString *_h5AMAppId;
}

@property(copy, nonatomic) NSString *h5AMAppId; // @synthesize h5AMAppId=_h5AMAppId;
@property(retain, nonatomic) H5AMAppDataSource *h5AMDatasource; // @synthesize h5AMDatasource=_h5AMDatasource;
@property(retain, nonatomic) LWHPMInterceptor *hAMInterceptor; // @synthesize hAMInterceptor=_hAMInterceptor;
@property(retain, nonatomic) NSURL *initialURL; // @synthesize initialURL=_initialURL;
@property(nonatomic) __weak id <LAMicroAppContextProtocol> microAppContext; // @synthesize microAppContext=_microAppContext;
@property(nonatomic) __weak id <LAContainerInterceptorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)safeAppMode;
- (id)appIdForSafeContainer;
- (id)syncFetchResponseDataOverLwp_RunLoop:(id)arg1;
- (id)syncFetchResponseDataOverLwp_Semaphore:(id)arg1;
- (id)syncFetchResponseDataOverLwp:(id)arg1;
- (_Bool)shouldInterceptRequest:(id)arg1 missMatched:(_Bool *)arg2;
- (id)i_containerAppId;
- (_Bool)interceptor:(id)arg1 forbidHttpForRequest:(id)arg2;
- (id)interceptor:(id)arg1 mineTypeForRequest:(id)arg2;
- (id)interceptor:(id)arg1 dataForRequest:(id)arg2 statusCode:(long long *)arg3 headers:(id *)arg4;
- (_Bool)shouldDisableHPMPackage:(id)arg1;
- (_Bool)hasHPMPakageMounted;
- (id)buildInterceptorWithAppId:(id)arg1;
- (void)resetContainerInterceptors;
- (void)setupContainerInterceptors;
- (void)dealloc;
- (id)initWithURL:(id)arg1 delegate:(id)arg2 microAppContext:(id)arg3;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

