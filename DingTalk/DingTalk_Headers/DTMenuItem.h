//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DTMenuItem : NSObject
{
    NSString *_title;
    NSString *_normalIcon;
    NSString *_highlightIcon;
    NSString *_superscript;
    id _target;
    SEL _click;
    SEL _longPress;
}

+ (id)menuItemWithTitle:(id)arg1 normalIcon:(id)arg2 highlightIcon:(id)arg3 superscript:(id)arg4 target:(id)arg5 click:(SEL)arg6 longPress:(SEL)arg7;
@property(nonatomic) SEL longPress; // @synthesize longPress=_longPress;
@property(nonatomic) SEL click; // @synthesize click=_click;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(copy, nonatomic) NSString *superscript; // @synthesize superscript=_superscript;
@property(copy, nonatomic) NSString *highlightIcon; // @synthesize highlightIcon=_highlightIcon;
@property(copy, nonatomic) NSString *normalIcon; // @synthesize normalIcon=_normalIcon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 normalIcon:(id)arg2 highlightIcon:(id)arg3 superscript:(id)arg4 target:(id)arg5 click:(SEL)arg6 longPress:(SEL)arg7;

@end

