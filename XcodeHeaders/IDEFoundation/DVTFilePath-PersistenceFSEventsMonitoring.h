/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "DVTFilePath.h"

@interface DVTFilePath (PersistenceFSEventsMonitoring)
- (void)addChangedFilePath:(char *)arg1;
- (void)doneAddingChangedFilesFromStream:(struct __FSEventStream *)arg1;
- (id)relativePathOnVolume;
- (BOOL)subpathsChangedSinceDate:(id)arg1 withBlock:(id)arg2;
@end
