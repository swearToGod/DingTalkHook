//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AMRFileCodecHandler : NSObject
{
    struct __sFILE *_fileEncode;
    struct enc_interface_State *_encodeState;
    int _writeBytes;
}

- (void)dealloc;
- (int)EndEncode;
- (int)EncodeData:(const char *)arg1 dataLen:(int)arg2;
- (int)PrepareEncode:(const char *)arg1;
- (int)writeBytes;
- (void)resetData;
- (id)init;

@end

