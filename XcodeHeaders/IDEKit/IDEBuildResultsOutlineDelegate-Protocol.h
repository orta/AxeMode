/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class IDEActivityLogSection;

@protocol IDEBuildResultsOutlineDelegate <NSObject>
- (id)activityLogSection;
- (void)doubleClickDocumentLocation:(id)arg1;
@property(readonly) BOOL lastFindResult;
@property(readonly) struct _NSRange lastFindResultRange;
@property(readonly) IDEActivityLogSection *lastFindResultSection;
- (void)processNewSelectedIndexPaths:(id)arg1;
- (void)showAllMessages:(id)arg1;
@end
