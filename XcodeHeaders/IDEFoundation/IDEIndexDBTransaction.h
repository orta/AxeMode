/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEIndexDBSQLStream.h>

@class NSMutableArray;

@interface IDEIndexDBTransaction : IDEIndexDBSQLStream
{
    NSMutableArray *_runQueue;
    IDEIndexDBSQLStream *_parent;
    NSMutableArray *_dbFactories;
}

- (void).cxx_destruct;
- (void)closeFactories;
- (id)dbConnection;
- (void)doBlock:(id)arg1;
- (id)init;
- (id)newFactoryForTable:(id)arg1 columns:(id)arg2;
@property(retain, nonatomic) IDEIndexDBSQLStream *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) unsigned long long queueSize;
- (void)submit;

@end

