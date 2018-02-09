//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, UIView;
@protocol LAContainerHandler;

@interface LAActionRequest : NSObject
{
    NSDictionary *_args;
    id <LAContainerHandler> _ctnHandler;
    UIView *_containerView;
}

@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <LAContainerHandler> ctnHandler; // @synthesize ctnHandler=_ctnHandler;
@property(copy, nonatomic) NSDictionary *args; // @synthesize args=_args;
- (void).cxx_destruct;
- (id)initWithArgs:(id)arg1 containerView:(id)arg2 ctnHandler:(id)arg3;

@end

