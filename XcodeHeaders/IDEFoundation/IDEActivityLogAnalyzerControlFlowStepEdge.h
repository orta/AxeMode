/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class DVTTextDocumentLocation;

@interface IDEActivityLogAnalyzerControlFlowStepEdge : NSObject
{
    DVTTextDocumentLocation *_startLocation;
    DVTTextDocumentLocation *_endLocation;
}

- (void).cxx_destruct;
- (id)description;
- (id)dvt_initFromDeserializer:(id)arg1;
- (void)dvt_writeToSerializer:(id)arg1;
- (id)endLocation;
- (id)initWithStartLocation:(id)arg1 endLocation:(id)arg2;
- (id)startLocation;

@end
