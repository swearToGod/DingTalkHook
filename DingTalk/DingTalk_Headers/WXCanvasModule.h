//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WXModuleProtocol-Protocol.h"

@class EAGLContext, NSMutableDictionary, NSString, WXSDKInstance;

@interface WXCanvasModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
    NSMutableDictionary *_cacheMap;
    EAGLContext *_glcontext;
}

+ (id)wx_export_method_36;
+ (id)wx_export_method_35;
@property(retain, nonatomic) EAGLContext *glcontext; // @synthesize glcontext=_glcontext;
@property(retain, nonatomic) NSMutableDictionary *cacheMap; // @synthesize cacheMap=_cacheMap;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)initTexture:(id)arg1 callbackId:(long long)arg2;
- (id)getImage:(id)arg1;
- (void)addDrawActions:(id)arg1 actions:(id)arg2;
- (void)doBlock:(CDUnknownBlockType)arg1;
- (void)performBlockWithCanvas:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

