//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DTCircleCommentModel, DTCirclePostModel, NSArray, OpenDatabase;

@protocol DTCircleServicePersistenceProtocol <NSObject>
- (_Bool)readRedDotBeforeCreateAt:(long long)arg1;
- (_Bool)readNoticeBeforeCreateAt:(long long)arg1;
- (_Bool)saveNoticeList:(NSArray *)arg1;
- (void)updateCommentFromLocalPostId:(long long)arg1 toPostId:(long long)arg2;
- (NSArray *)getFailPostList;
- (void)updatePostId:(long long)arg1 status:(unsigned long long)arg2;
- (void)readNoticeLocally;
- (NSArray *)getNoticeWithCursor:(long long)arg1 count:(int)arg2;
- (int)getNoticeUnreadCount;
- (void)deleteCommentWithCommentId:(long long)arg1;
- (void)deleteAllCommentWithPostId:(long long)arg1;
- (void)deleteCommentWithPostId:(long long)arg1;
- (DTCircleCommentModel *)getCommentWithCommentId:(long long)arg1;
- (NSArray *)getCommentListWithPostId:(long long)arg1;
- (void)saveCommentList:(NSArray *)arg1;
- (void)saveComment:(DTCircleCommentModel *)arg1;
- (NSArray *)getPersonPostListWithStartTime:(long long)arg1 endTime:(long long)arg2 uid:(long long)arg3;
- (NSArray *)getMainPostListWithStartTime:(long long)arg1 endTime:(long long)arg2;
- (NSArray *)getPersonPostListWithCursor:(long long)arg1 count:(int)arg2 uid:(long long)arg3;
- (NSArray *)getMainPostListWithCursor:(long long)arg1 count:(int)arg2;
- (DTCirclePostModel *)getPost:(long long)arg1 targetTable:(unsigned long long)arg2;
- (void)clearAllPersonalPostWithUid:(long long)arg1;
- (void)clearAllMainPost;
- (void)deletePost:(long long)arg1 targetTable:(unsigned long long)arg2;
- (void)savePostList:(NSArray *)arg1 targetTable:(unsigned long long)arg2;
- (void)savePost:(DTCirclePostModel *)arg1 targetTable:(unsigned long long)arg2;
- (void)clearDbConnection;
- (void)resetDbConnection:(OpenDatabase *)arg1;
- (id)initWithDbConnection:(OpenDatabase *)arg1;
@end
