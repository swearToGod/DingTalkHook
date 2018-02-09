//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface FBSDKShareUtility : NSObject
{
}

+ (_Bool)_validateAssetLibraryVideoURL:(id)arg1 name:(id)arg2 error:(id *)arg3;
+ (_Bool)_validateArgumentWithName:(id)arg1 value:(unsigned long long)arg2 isIn:(id)arg3 error:(id *)arg4;
+ (_Bool)_validateRequiredValue:(id)arg1 name:(id)arg2 error:(id *)arg3;
+ (_Bool)_validateNetworkURL:(id)arg1 name:(id)arg2 error:(id *)arg3;
+ (_Bool)_validateFileURL:(id)arg1 name:(id)arg2 error:(id *)arg3;
+ (_Bool)_validateArray:(id)arg1 minCount:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 name:(id)arg4 error:(id *)arg5;
+ (void)_testOpenGraphValueContainer:(id)arg1 containsMedia:(_Bool *)arg2 containsPhotos:(_Bool *)arg3 containsVideos:(_Bool *)arg4;
+ (void)_testObject:(id)arg1 containsMedia:(_Bool *)arg2 containsPhotos:(_Bool *)arg3 containsVideos:(_Bool *)arg4;
+ (void)_stageImagesForPhotoContent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)_isOpenGraphValue:(id)arg1;
+ (id)_convertPhoto:(id)arg1;
+ (id)getOpenGraphNameAndNamespaceFromFullName:(id)arg1 namespace:(id *)arg2;
+ (id)_convertOpenGraphValueContainer:(id)arg1 requireNamespace:(_Bool)arg2;
+ (id)_convertObject:(id)arg1;
+ (void)_addToParameters:(id)arg1 forShareVideoContent:(id)arg2;
+ (void)_addToParameters:(id)arg1 forShareLinkContent:(id)arg2;
+ (void)_addToParameters:(id)arg1 forSharePhotoContent:(id)arg2;
+ (void)_addToParameters:(id)arg1 forShareOpenGraphContent:(id)arg2;
+ (void)_addToParameters:(id)arg1 forShareContent:(id)arg2;
+ (_Bool)shareMediaContentContainsPhotosAndVideos:(id)arg1;
+ (_Bool)validateShareVideoContent:(id)arg1 error:(id *)arg2;
+ (_Bool)validateShareLinkContent:(id)arg1 error:(id *)arg2;
+ (_Bool)validateShareMediaContent:(id)arg1 error:(id *)arg2;
+ (_Bool)validateSharePhotoContent:(id)arg1 error:(id *)arg2;
+ (_Bool)validateShareOpenGraphContent:(id)arg1 error:(id *)arg2;
+ (_Bool)validateShareContent:(id)arg1 error:(id *)arg2;
+ (_Bool)validateAssetLibraryURLsWithShareMediaContent:(id)arg1 name:(id)arg2 error:(id *)arg3;
+ (_Bool)validateAssetLibraryURLWithShareVideoContent:(id)arg1 name:(id)arg2 error:(id *)arg3;
+ (void)testShareContent:(id)arg1 containsMedia:(_Bool *)arg2 containsPhotos:(_Bool *)arg3 containsVideos:(_Bool *)arg4;
+ (id)parametersForShareContent:(id)arg1 shouldFailOnDataError:(_Bool)arg2;
+ (id)imageWithCircleColor:(id)arg1 canvasSize:(struct CGSize)arg2 circleSize:(struct CGSize)arg3;
+ (id)hashtagStringFromHashtag:(id)arg1;
+ (id)feedShareDictionaryForContent:(id)arg1;
+ (id)convertOpenGraphValues:(id)arg1;
+ (id)convertOpenGraphValue:(id)arg1;
+ (void)buildAsyncWebPhotoContent:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)buildWebShareContent:(id)arg1 methodName:(id *)arg2 parameters:(id *)arg3 error:(id *)arg4;
+ (void)assertOpenGraphValues:(id)arg1 requireKeyNamespace:(_Bool)arg2;
+ (void)assertOpenGraphValue:(id)arg1;
+ (void)assertOpenGraphKey:(id)arg1 requireNamespace:(_Bool)arg2;
+ (void)assertCollection:(id)arg1 ofClass:(id)arg2 name:(id)arg3;
+ (void)assertCollection:(id)arg1 ofClassStrings:(id)arg2 name:(id)arg3;
- (id)init;

@end
