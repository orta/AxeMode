/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDESchemeActionAbstractTestSummaryObject.h>

#import "IDESchemeActionTestSummaryContainer.h"

@class NSArray, NSMutableArray, NSString;

@interface IDESchemeActionTestSummaryGroup : IDESchemeActionAbstractTestSummaryObject <IDESchemeActionTestSummaryContainer>
{
    NSMutableArray *_subtests;
    NSString *_identifier;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)addNewTestSummaryGroupWithName:(id)arg1 identifier:(id)arg2;
- (id)addNewTestSummaryWithName:(id)arg1 identifier:(id)arg2 status:(unsigned long long)arg3 failureSummaries:(id)arg4 performanceMetrics:(id)arg5;
@property(readonly) NSArray *containedTestSummaries;
- (id)dictionaryRepresentation;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;
@property(readonly) NSMutableArray *mutableContainedTestSummaries;
- (unsigned long long)status;
- (BOOL)updateWithDictionaryRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSMutableArray *mutableSubtests; // @dynamic mutableSubtests;
@property(copy) NSString *name;
@property(copy) NSArray *subtests; // @dynamic subtests;
@property(readonly) Class superclass;

@end

