/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEIssueProvider.h>

@class DVTMapTable, DVTObservingToken;

@interface IDEWorkspaceIntegrityIssueProvider : IDEIssueProvider
{
    id _modelObjectDidChangeObserver;
    DVTObservingToken *_referencedContainersObserverToken;
    DVTMapTable *_referencedContainersToIssueObserverTokensMapTable;
    DVTMapTable *_referencedContainersToProviderContextsMapTable;
    DVTObservingToken *_blueprintsObserverToken;
    DVTMapTable *_blueprintsToIssueObserverTokensMapTable;
    DVTMapTable *_blueprintsToProviderContextsMapTable;
}

+ (void)initialize;
+ (int)providerType;
- (void).cxx_destruct;
- (void)_blueprintsDidChange;
- (id)_integrityIssuesForDataSource:(id)arg1;
- (id)_issueForMessage:(id)arg1;
- (void)_referencedContainersDidChange;
- (id)displayNameForIssueTypeIdentifier:(id)arg1;
- (id)ideModelObjectTypeIdentifier;
- (id)initWithIssueManager:(id)arg1 extension:(id)arg2;
- (void)primitiveInvalidate;

@end

