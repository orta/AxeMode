/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

@protocol IDEIndexDatabaseDelegate

@optional
- (void)clearPCHFailuresForDatabase:(id)arg1;
- (void)database:(id)arg1 didEndImportSession:(id)arg2;
- (void)database:(id)arg1 didForgetFiles:(id)arg2;
- (void)database:(id)arg1 reportAutoQueryProgress:(double)arg2;
- (void)databaseDidIndexHotFile:(id)arg1;
- (void)databaseDidLoad:(id)arg1;
- (void)databaseDidOpen:(id)arg1;
- (void)databaseDidReportError:(id)arg1;
- (void)databaseDidSave:(id)arg1;
- (id)databaseProvidersAndVersions:(id)arg1;
@end

