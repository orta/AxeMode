/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <IDEFoundation/IDEActivityLogChangeEvent.h>

@class NSSet;

@interface IDEActivityLogStopRecordingChangeEvent : IDEActivityLogChangeEvent
{
    NSSet *_supersections;
}

- (void).cxx_destruct;
- (id)description;
- (id)initWithSection:(id)arg1 supersections:(id)arg2;
@property(readonly) NSSet *supersections; // @synthesize supersections=_supersections;

@end

