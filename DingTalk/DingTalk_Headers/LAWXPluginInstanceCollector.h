//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LAPluginInstanceCollector.h"

@class WXSDKInstance;

@interface LAWXPluginInstanceCollector : LAPluginInstanceCollector
{
    WXSDKInstance *_wxInstance;
}

+ (id)parseInstanceCollectorFromWxInstance:(id)arg1;
+ (void)unBindInstanceCollectorFromWxInstance:(id)arg1;
+ (_Bool)bindInstanceCollector:(id)arg1 wxInstance:(id)arg2;
@property(nonatomic) __weak WXSDKInstance *wxInstance; // @synthesize wxInstance=_wxInstance;
- (void).cxx_destruct;
- (void)dispatchEvent:(id)arg1 data:(id)arg2;
- (void)plugin:(id)arg1 callAction:(id)arg2 data:(id)arg3 callBack:(CDUnknownBlockType)arg4;
- (void)registerInstanceCollector;
- (void)unregisterInstanceCollector;
- (id)initCollectorWithContainer:(id)arg1 ctnHandler:(id)arg2 wxInstance:(id)arg3;

@end

