//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface DTSpaceOnlineDocRPCService : NSObject
{
}

+ (void)listUnEditWithSpaceId:(long long)arg1 fileId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)listEditWithSpaceId:(long long)arg1 fileId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)addEditorWithSpaceId:(long long)arg1 fileId:(id)arg2 convId:(id)arg3 mid:(long long)arg4 uids:(id)arg5 endTime:(id)arg6 success:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
+ (void)getMemberList:(long long)arg1 fileId:(id)arg2 success:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)saveOnlineDoc:(long long)arg1 fileId:(id)arg2 convId:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)createOnlineDoc:(long long)arg1 fileId:(id)arg2 convId:(id)arg3 mid:(long long)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;

@end

