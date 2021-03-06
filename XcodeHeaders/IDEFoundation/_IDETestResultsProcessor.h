/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation.h"

@class DVTDevice, DVTStackBacktrace, IDERunOperation, NSMutableArray, NSString;

@interface _IDETestResultsProcessor : NSObject <DVTInvalidation>
{
    BOOL _finished;
    NSString *_targetArchitecture;
    DVTDevice *_targetDevice;
    NSMutableArray *_validatorsStack;
    IDERunOperation *_operation;
    DVTStackBacktrace *_creationBacktrace;
    id <_IDETestResultsProcessorDelegate> _delegate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) DVTStackBacktrace *creationBacktrace; // @synthesize creationBacktrace=_creationBacktrace;
@property(retain) id <_IDETestResultsProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL finished; // @synthesize finished=_finished;
- (id)initWithSessionStateDelegate:(id)arg1 andOperation:(id)arg2;
- (void)initializeValidatorsStack;
@property(retain) IDERunOperation *operation; // @synthesize operation=_operation;
- (void)primitiveInvalidate;
@property(retain) NSString *targetArchitecture; // @synthesize targetArchitecture=_targetArchitecture;
@property(retain) DVTDevice *targetDevice; // @synthesize targetDevice=_targetDevice;
@property(retain) NSMutableArray *validatorsStack; // @synthesize validatorsStack=_validatorsStack;
- (BOOL)validateEvent:(int)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

