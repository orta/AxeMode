/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSArray, NSString;

@interface IDEInspectorChooserCategory : NSObject <DVTInvalidation>
{
    NSArray *choices;
    NSString *title;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly) NSArray *choices; // @synthesize choices;
- (id)initWithTitle:(id)arg1 choices:(id)arg2;
- (void)primitiveInvalidate;
@property(readonly) NSString *title; // @synthesize title;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
