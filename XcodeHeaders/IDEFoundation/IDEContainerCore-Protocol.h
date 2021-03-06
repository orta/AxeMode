/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTInvalidation.h"
#import "NSObject.h"

@protocol IDEContainerCore <NSObject, DVTInvalidation>
+ (id)containerDataFilePathsForFilePath:(id)arg1;
+ (id)containerFileType;
+ (BOOL)supportsFilePersistence;
- (id)containerExtension;
- (int)currentActivity;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 extension:(id)arg2 error:(id *)arg3;
- (void)releaseContainerCore;
- (void)retainContainerCore;
- (id)rootGroup;
@end

