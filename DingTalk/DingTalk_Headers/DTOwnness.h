//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTOwnness : NSObject
{
    NSString *_icon;
    NSString *_status;
}

@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (id)initWithIcon:(id)arg1 status:(id)arg2;
- (id)toIDLModel;
- (id)ownnessString;
- (id)initWIthIDLMode:(id)arg1;

@end

