/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying.h"

@class NSImage, NSString, NSURL;

@interface IDEWelcomeWindowRecent : NSObject <NSCopying>
{
    id <NSRecentDocumentInfo> _recentInfo;
    NSURL *_url;
}

+ (id)_descriptionForLastOpenedDate:(id)arg1 isLastOpenedDate:(BOOL)arg2;
+ (id)recentsForRecentInfos:(id)arg1;
+ (id)recentsForURLs:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly) NSImage *image;
- (id)initWithRecentInfo:(id)arg1;
- (id)initWithURL:(id)arg1;
@property(readonly) NSString *lastOpenedDate;
@property(readonly) NSString *name;
- (id)recentDocumentInfo;
- (long long)state;
@property(readonly) NSString *truncatedPath;
@property(readonly) NSURL *url;

@end

