//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AlicloudIPv6PrefixResolver : NSObject
{
    int ipv6PrefixResolveStatus;
    char *ipv6Prefix;
    int prefixLen;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)getInstance;
- (id)convertIPv4toIPv6:(id)arg1;
- (unsigned char)resolveIPv6Prefix:(char *)arg1;
- (_Bool)isIPv6Prefix:(char *)arg1 withPrefixLen:(int)arg2 withIP:(char *)arg3 withIPLen:(int)arg4;
- (void)updateIPv6Prefix;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

