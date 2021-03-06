/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTMapTable, IDEContainer, IDEIssueProvider, NSArray, NSMutableArray, NSSet;

@interface IDEIssueGroup : NSObject
{
    IDEIssueProvider *_issueProvider;
    IDEContainer *_container;
    id <IDEBlueprint> _blueprint;
    NSMutableArray *_issueFileGroups;
    DVTMapTable *_issueFileGroupsIndex;
    NSMutableArray *_issuesWithNoFile;
    NSMutableArray *_issueTypeGroups;
    DVTMapTable *_issueTypeGroupsIndex;
    unsigned long long _testFailureCount;
    unsigned long long _errorCount;
    unsigned long long _warningCount;
    unsigned long long _noticeCount;
    unsigned long long _analyzerResultCount;
    int _issueType;
}

- (void).cxx_destruct;
- (void)_addIssues:(id)arg1;
- (void)_addNoFileIssues:(id)arg1;
@property(readonly) NSSet *_allIssues;
- (id)_initWithIssueProvider:(id)arg1 container:(id)arg2 blueprint:(id)arg3;
- (void)_removeIssues:(id)arg1;
- (void)_updateIssueType;
@property(readonly) id <IDEBlueprint> blueprint; // @synthesize blueprint=_blueprint;
@property(readonly) IDEContainer *container; // @synthesize container=_container;
- (id)init;
@property(readonly) unsigned long long issueCount;
@property(readonly) NSArray *issueFileGroups; // @synthesize issueFileGroups=_issueFileGroups;
@property(readonly) IDEIssueProvider *issueProvider; // @synthesize issueProvider=_issueProvider;
@property(readonly) int issueType; // @synthesize issueType=_issueType;
@property(readonly) NSArray *issueTypeGroups; // @synthesize issueTypeGroups=_issueTypeGroups;
@property(readonly) NSArray *issuesWithNoFile; // @synthesize issuesWithNoFile=_issuesWithNoFile;

@end

