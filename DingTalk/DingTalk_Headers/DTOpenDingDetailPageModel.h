//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DTBizDingModel, UINavigationController;

@interface DTOpenDingDetailPageModel : NSObject
{
    _Bool _needCheckPermission;
    _Bool _scrollToComments;
    _Bool _animation;
    long long _dingId;
    DTBizDingModel *_dingModel;
    UINavigationController *_nav;
}

+ (id)buildWithDingModel:(id)arg1;
@property(nonatomic) _Bool animation; // @synthesize animation=_animation;
@property(nonatomic) __weak UINavigationController *nav; // @synthesize nav=_nav;
@property(nonatomic) _Bool scrollToComments; // @synthesize scrollToComments=_scrollToComments;
@property(nonatomic) _Bool needCheckPermission; // @synthesize needCheckPermission=_needCheckPermission;
@property(retain, nonatomic) DTBizDingModel *dingModel; // @synthesize dingModel=_dingModel;
@property(nonatomic) long long dingId; // @synthesize dingId=_dingId;
- (void).cxx_destruct;
- (id)init;

@end

