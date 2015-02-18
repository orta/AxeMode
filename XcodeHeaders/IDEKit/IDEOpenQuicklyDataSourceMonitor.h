/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTPerformanceMetric, NSCountedSet;

@interface IDEOpenQuicklyDataSourceMonitor : NSObject
{
    NSCountedSet *activeScans;
    DVTPerformanceMetric *_performanceMetric;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly) BOOL anyDataSourceIsScanning;
- (void)dataSourceFinishedScanning:(id)arg1 path:(id)arg2;
- (void)dataSourceStartedScanning:(id)arg1;
- (id)init;
- (void)invokeBlockWhilePostingKVOChanges:(id)arg1;
@property(readonly) BOOL scanningIsComplete;

@end
